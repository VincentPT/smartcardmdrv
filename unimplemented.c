#include <cardmod.h>

DWORD
WINAPI
CardQueryCapabilities(
    __in      PCARD_DATA          pCardData,
    __inout   PCARD_CAPABILITIES  pCardCapabilities) {
    return 0;
}

DWORD
WINAPI
CardGetChallengeEx(
    __in                                    PCARD_DATA  pCardData,
    __in                                    PIN_ID      PinId,
    __deref_out_bcount(*pcbChallengeData)   PBYTE* ppbChallengeData,
    __out                                   PDWORD      pcbChallengeData,
    __in                                    DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardAuthenticateEx(
    __in                                    PCARD_DATA  pCardData,
    __in                                    PIN_ID      PinId,
    __in                                    DWORD       dwFlags,
    __in_bcount(cbPinData)                  PBYTE       pbPinData,
    __in                                    DWORD       cbPinData,
    __deref_opt_out_bcount(*pcbSessionPin)  PBYTE* ppbSessionPin,
    __out_opt                               PDWORD      pcbSessionPin,
    __out_opt                               PDWORD      pcAttemptsRemaining) {
    return 0;
}

DWORD
WINAPI
CardChangeAuthenticatorEx(
    __in                                    PCARD_DATA  pCardData,
    __in                                    DWORD       dwFlags,
    __in                                    PIN_ID      dwAuthenticatingPinId,
    __in_bcount(cbAuthenticatingPinData)    PBYTE       pbAuthenticatingPinData,
    __in                                    DWORD       cbAuthenticatingPinData,
    __in                                    PIN_ID      dwTargetPinId,
    __in_bcount(cbTargetData)               PBYTE       pbTargetData,
    __in                                    DWORD       cbTargetData,
    __in                                    DWORD       cRetryCount,
    __out_opt                               PDWORD      pcAttemptsRemaining) {
    return 0;
}


DWORD
WINAPI
CardDeauthenticateEx(
    __in    PCARD_DATA   pCardData,
    __in    PIN_SET      PinId,
    __in    DWORD        dwFlags) {
    return 0;
}

DWORD
WINAPI
CardDeleteContainer(
    __in    PCARD_DATA  pCardData,
    __in    BYTE        bContainerIndex,
    __in    DWORD       dwReserved) {
    return 0;
}

DWORD
WINAPI
CardCreateContainer(
    __in    PCARD_DATA  pCardData,
    __in    BYTE        bContainerIndex,
    __in    DWORD       dwFlags,
    __in    DWORD       dwKeySpec,
    __in    DWORD       dwKeySize,
    __in    PBYTE       pbKeyData) {
    return 0;
}


DWORD
WINAPI
CardCreateContainerEx(
    __in    PCARD_DATA  pCardData,
    __in    BYTE        bContainerIndex,
    __in    DWORD       dwFlags,
    __in    DWORD       dwKeySpec,
    __in    DWORD       dwKeySize,
    __in    PBYTE       pbKeyData,
    __in    PIN_ID      PinId) {
    return 0;
}

DWORD
WINAPI
CardGetContainerInfo(
    __in    PCARD_DATA      pCardData,
    __in    BYTE            bContainerIndex,
    __in    DWORD           dwFlags,
    __inout PCONTAINER_INFO pContainerInfo) {
    return 0;
}


DWORD
WINAPI
CardAuthenticatePin(
    __in                   PCARD_DATA   pCardData,
    __in                   LPWSTR       pwszUserId,
    __in_bcount(cbPin)     PBYTE        pbPin,
    __in                   DWORD        cbPin,
    __out_opt              PDWORD       pcAttemptsRemaining) {
    return 0;
}

DWORD
WINAPI
CardGetChallenge(
    __in                                    PCARD_DATA  pCardData,
    __deref_out_bcount(*pcbChallengeData)   PBYTE* ppbChallengeData,
    __out                                   PDWORD      pcbChallengeData) {
    return 0;
}

DWORD
WINAPI
CardAuthenticateChallenge(
    __in                             PCARD_DATA pCardData,
    __in_bcount(cbResponseData)      PBYTE      pbResponseData,
    __in                             DWORD      cbResponseData,
    __out_opt                        PDWORD     pcAttemptsRemaining) {
    return 0;
}

DWORD
WINAPI
CardUnblockPin(
    __in                               PCARD_DATA  pCardData,
    __in                               LPWSTR      pwszUserId,
    __in_bcount(cbAuthenticationData)  PBYTE       pbAuthenticationData,
    __in                               DWORD       cbAuthenticationData,
    __in_bcount(cbNewPinData)          PBYTE       pbNewPinData,
    __in                               DWORD       cbNewPinData,
    __in                               DWORD       cRetryCount,
    __in                               DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardChangeAuthenticator(
    __in                                 PCARD_DATA  pCardData,
    __in                                 LPWSTR      pwszUserId,
    __in_bcount(cbCurrentAuthenticator)  PBYTE       pbCurrentAuthenticator,
    __in                                 DWORD       cbCurrentAuthenticator,
    __in_bcount(cbNewAuthenticator)      PBYTE       pbNewAuthenticator,
    __in                                 DWORD       cbNewAuthenticator,
    __in                                 DWORD       cRetryCount,
    __in                                 DWORD       dwFlags,
    __out_opt                            PDWORD      pcAttemptsRemaining) {
    return 0;
}

DWORD
WINAPI
CardDeauthenticate(
    __in    PCARD_DATA  pCardData,
    __in    LPWSTR      pwszUserId,
    __in    DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardCreateDirectory(
    __in    PCARD_DATA                      pCardData,
    __in    LPSTR                           pszDirectoryName,
    __in    CARD_DIRECTORY_ACCESS_CONDITION AccessCondition) {
    return 0;
}


DWORD
WINAPI
CardDeleteDirectory(
    __in    PCARD_DATA  pCardData,
    __in    LPSTR       pszDirectoryName) {
    return 0;
}

DWORD
WINAPI
CardCreateFile(
    __in        PCARD_DATA                  pCardData,
    __in_opt    LPSTR                       pszDirectoryName,
    __in        LPSTR                       pszFileName,
    __in        DWORD                       cbInitialCreationSize,
    __in        CARD_FILE_ACCESS_CONDITION  AccessCondition) {
    return 0;
}

DWORD
WINAPI
CardReadFile(
    __in                            	PCARD_DATA  pCardData,
    __in_opt                        	LPSTR       pszDirectoryName,
    __in                            	LPSTR       pszFileName,
    __in                            	DWORD       dwFlags,
    __deref_out_bcount_opt(*pcbData)    PBYTE* ppbData,
    __out                           	PDWORD      pcbData) {
    return 0;
}

DWORD
WINAPI
CardWriteFile(
    __in                     PCARD_DATA  pCardData,
    __in_opt                 LPSTR       pszDirectoryName,
    __in                     LPSTR       pszFileName,
    __in                     DWORD       dwFlags,
    __in_bcount(cbData)      PBYTE       pbData,
    __in                     DWORD       cbData) {
    return 0;
}

DWORD
WINAPI
CardDeleteFile(
    __in        PCARD_DATA  pCardData,
    __in_opt    LPSTR       pszDirectoryName,
    __in        LPSTR       pszFileName,
    __in        DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardEnumFiles(
    __in                                PCARD_DATA  pCardData,
    __in_opt                            LPSTR       pszDirectoryName,
    __deref_out_ecount(*pdwcbFileName)  LPSTR* pmszFileNames,
    __out                               LPDWORD     pdwcbFileName,
    __in                                DWORD       dwFlags) {
    return 0;
}


DWORD
WINAPI
CardGetFileInfo(
    __in        PCARD_DATA      pCardData,
    __in_opt    LPSTR           pszDirectoryName,
    __in        LPSTR           pszFileName,
    __inout     PCARD_FILE_INFO pCardFileInfo) {
    return 0;
}

DWORD
WINAPI
CardQueryFreeSpace(
    __in    PCARD_DATA              pCardData,
    __in    DWORD                   dwFlags,
    __inout PCARD_FREE_SPACE_INFO   pCardFreeSpaceInfo) {
    return 0;
}

DWORD
WINAPI
CardQueryKeySizes(
    __in    PCARD_DATA      pCardData,
    __in    DWORD           dwKeySpec,
    __in    DWORD           dwFlags,
    __inout PCARD_KEY_SIZES pKeySizes) {
    return 0;
}

DWORD
WINAPI
CardRSADecrypt(
    __in    PCARD_DATA              pCardData,
    __inout PCARD_RSA_DECRYPT_INFO  pInfo) {
    return 0;
}

DWORD
WINAPI
CardSignData(
    __in    PCARD_DATA          pCardData,
    __inout PCARD_SIGNING_INFO  pInfo) {
    return 0;
}


DWORD
WINAPI
CardConstructDHAgreement(
    __in    PCARD_DATA pCardData,
    __inout PCARD_DH_AGREEMENT_INFO pAgreementInfo) {
    return 0;
}

DWORD
WINAPI
CardDeriveKey(
    __in    PCARD_DATA pCardData,
    __inout PCARD_DERIVE_KEY pAgreementInfo) {
    return 0;
}

DWORD
WINAPI
CardDestroyDHAgreement(
    __in PCARD_DATA pCardData,
    __in BYTE       bSecretAgreementIndex,
    __in DWORD      dwFlags) {
    return 0;
}

DWORD
WINAPI
CspGetDHAgreement(
    __in    PCARD_DATA  pCardData,
    __in    PVOID       hSecretAgreement,
    __out   BYTE* pbSecretAgreementIndex,
    __in    DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardGetContainerProperty(
    __in                                        PCARD_DATA  pCardData,
    __in                                        BYTE        bContainerIndex,
    __in                                        LPCWSTR     wszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen)  PBYTE       pbData,
    __in                                        DWORD       cbData,
    __out                                       PDWORD      pdwDataLen,
    __in                                        DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardSetContainerProperty(
    __in                    PCARD_DATA  pCardData,
    __in                    BYTE        bContainerIndex,
    __in                    LPCWSTR     wszProperty,
    __in_bcount(cbDataLen)  PBYTE       pbData,
    __in                    DWORD       cbDataLen,
    __in                    DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardGetProperty(
    __in                                        PCARD_DATA  pCardData,
    __in                                        LPCWSTR     wszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen)  PBYTE       pbData,
    __in                                        DWORD       cbData,
    __out                                       PDWORD      pdwDataLen,
    __in                                        DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardSetProperty(
    __in                    PCARD_DATA  pCardData,
    __in                    LPCWSTR     wszProperty,
    __in_bcount(cbDataLen)  PBYTE       pbData,
    __in                    DWORD       cbDataLen,
    __in                    DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
MDImportSessionKey(
    __in                    PCARD_DATA          pCardData,
    __in                    LPCWSTR             pwszBlobType,
    __in                    LPCWSTR             pwszAlgId,
    __out                   PCARD_KEY_HANDLE    phKey,
    __in_bcount(cbInput)    PBYTE               pbInput,
    __in                    DWORD               cbInput) {
    return 0;
}

DWORD
WINAPI
MDEncryptData(
    __in                                    PCARD_DATA              pCardData,
    __in                                    CARD_KEY_HANDLE         hKey,
    __in                                    LPCWSTR                 pwszSecureFunction,
    __in_bcount(cbInput)                    PBYTE                   pbInput,
    __in                                    DWORD                   cbInput,
    __in                                    DWORD                   dwFlags,
    __deref_out_ecount(*pcEncryptedData)    PCARD_ENCRYPTED_DATA* ppEncryptedData,
    __out                                   PDWORD                  pcEncryptedData) {
    return 0;
}

DWORD
WINAPI
CardGetSharedKeyHandle(
    __in                                PCARD_DATA          pCardData,
    __in_bcount(cbInput)                PBYTE               pbInput,
    __in                                DWORD               cbInput,
    __deref_opt_out_bcount(*pcbOutput)  PBYTE* ppbOutput,
    __out_opt                           PDWORD              pcbOutput,
    __out                               PCARD_KEY_HANDLE    phKey) {
    return 0;
}

DWORD
WINAPI
CardDestroyKey(
    __in    PCARD_DATA      pCardData,
    __in    CARD_KEY_HANDLE hKey) {
    return 0;
}


DWORD
WINAPI
CardGetAlgorithmProperty(
    __in                                        PCARD_DATA  pCardData,
    __in                                        LPCWSTR     pwszAlgId,
    __in                                        LPCWSTR     pwszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen)  PBYTE       pbData,
    __in                                        DWORD       cbData,
    __out                                       PDWORD      pdwDataLen,
    __in                                        DWORD       dwFlags) {
    return 0;
}

DWORD
WINAPI
CardGetKeyProperty(
    __in                                        PCARD_DATA      pCardData,
    __in                                        CARD_KEY_HANDLE hKey,
    __in                                        LPCWSTR         pwszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen)  PBYTE           pbData,
    __in                                        DWORD           cbData,
    __out                                       PDWORD          pdwDataLen,
    __in                                        DWORD           dwFlags) {
    return 0;
}

DWORD
WINAPI
CardSetKeyProperty(
    __in                    PCARD_DATA      pCardData,
    __in                    CARD_KEY_HANDLE hKey,
    __in                    LPCWSTR         pwszProperty,
    __in_bcount(cbInput)    PBYTE           pbInput,
    __in                    DWORD           cbInput,
    __in                    DWORD           dwFlags) {
    return 0;
}

DWORD
WINAPI
CardImportSessionKey(
    __in                    PCARD_DATA          pCardData,
    __in                    BYTE                bContainerIndex,
    __in                    LPVOID              pPaddingInfo,
    __in                    LPCWSTR             pwszBlobType,
    __in                    LPCWSTR             pwszAlgId,
    __out                   PCARD_KEY_HANDLE    phKey,
    __in_bcount(cbInput)    PBYTE               pbInput,
    __in                    DWORD               cbInput,
    __in                    DWORD               dwFlags) {
    return 0;
}

DWORD
WINAPI
CardProcessEncryptedData(
    __in                                            PCARD_DATA              pCardData,
    __in                                            CARD_KEY_HANDLE         hKey,
    __in                                            LPCWSTR                 pwszSecureFunction,
    __in_ecount(cEncryptedData)                     PCARD_ENCRYPTED_DATA    pEncryptedData,
    __in                                            DWORD                   cEncryptedData,
    __out_bcount_part_opt(cbOutput, *pdwOutputLen)  PBYTE                   pbOutput,
    __in                                            DWORD                   cbOutput,
    __out_opt                                       PDWORD                  pdwOutputLen,
    __in                                            DWORD                   dwFlags) {
    return 0;
}
