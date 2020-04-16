cmake_minimum_required (VERSION 3.2)

project(smartcardmdrv C)

SET (PROJECT_SOURCE_FILES
	DllMain.c
	smartcardmdrv.c
	unimplemented.c
)

# Cryptographic Provider Development Kit installed path
SET (CPDK_INSTALLED_PATH "C:/Program Files (x86)/Windows Kits/8.0/Cryptographic Provider Development Kit")
SET (CPDK_INCLUDE_DIR ${CPDK_INSTALLED_PATH}/include)
SET (CPDK_LIB_DIR ${CPDK_INSTALLED_PATH}/lib/win8/x64)

link_directories(BEFORE ${CPDK_LIB_DIR})

# define project's build target with project's source files
add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE ${CPDK_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} userenv crypt32 bcrypt_provider)