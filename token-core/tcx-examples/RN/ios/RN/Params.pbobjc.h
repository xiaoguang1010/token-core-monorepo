// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: params.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class AccountResponse;
@class ExternalAddressExtra_ExternalAddress;
@class GPBAny;
@class KeystoreCommonDeriveParam_Derivation;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum KeyType

/** only support two types */
typedef GPB_ENUM(KeyType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  KeyType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  KeyType_Mnemonic = 0,
  KeyType_PrivateKey = 1,
};

GPBEnumDescriptor *KeyType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL KeyType_IsValidValue(int32_t value);

#pragma mark - ParamsRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface ParamsRoot : GPBRootObject
@end

#pragma mark - HdStoreCreateParam

typedef GPB_ENUM(HdStoreCreateParam_FieldNumber) {
  HdStoreCreateParam_FieldNumber_Password = 1,
  HdStoreCreateParam_FieldNumber_PasswordHint = 2,
  HdStoreCreateParam_FieldNumber_Name = 3,
};

/**
 * FUNCTION: hd_store_create(HdStoreCreateParam): WalletResult
 *
 * create a new hd fixtures
 **/
GPB_FINAL @interface HdStoreCreateParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite, copy, null_resettable) NSString *passwordHint;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@end

#pragma mark - WalletResult

typedef GPB_ENUM(WalletResult_FieldNumber) {
  WalletResult_FieldNumber_Id_p = 1,
  WalletResult_FieldNumber_Name = 2,
  WalletResult_FieldNumber_Source = 3,
  WalletResult_FieldNumber_AccountsArray = 4,
  WalletResult_FieldNumber_CreatedAt = 5,
};

GPB_FINAL @interface WalletResult : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, copy, null_resettable) NSString *source;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<AccountResponse*> *accountsArray;
/** The number of items in @c accountsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger accountsArray_Count;

@property(nonatomic, readwrite) int64_t createdAt;

@end

#pragma mark - HdStoreImportParam

typedef GPB_ENUM(HdStoreImportParam_FieldNumber) {
  HdStoreImportParam_FieldNumber_Mnemonic = 1,
  HdStoreImportParam_FieldNumber_Password = 2,
  HdStoreImportParam_FieldNumber_Source = 3,
  HdStoreImportParam_FieldNumber_Name = 4,
  HdStoreImportParam_FieldNumber_PasswordHint = 5,
  HdStoreImportParam_FieldNumber_Overwrite = 6,
};

/**
 * FUNCTION: hd_store_import(HdStoreImportParam): WalletResult
 *
 * create a new hd fixtures by mnemonic
 **/
GPB_FINAL @interface HdStoreImportParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *mnemonic;

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite, copy, null_resettable) NSString *source;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, copy, null_resettable) NSString *passwordHint;

@property(nonatomic, readwrite) BOOL overwrite;

@end

#pragma mark - KeystoreCommonDeriveParam

typedef GPB_ENUM(KeystoreCommonDeriveParam_FieldNumber) {
  KeystoreCommonDeriveParam_FieldNumber_Id_p = 1,
  KeystoreCommonDeriveParam_FieldNumber_Password = 2,
  KeystoreCommonDeriveParam_FieldNumber_DerivationsArray = 3,
};

/**
 * FUNCTION: hd_store_derive(HdStoreDeriveParam): AccountsResponse
 *
 * derive new accounts from a hd fixtures
 **/
GPB_FINAL @interface KeystoreCommonDeriveParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<KeystoreCommonDeriveParam_Derivation*> *derivationsArray;
/** The number of items in @c derivationsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger derivationsArray_Count;

@end

#pragma mark - KeystoreCommonDeriveParam_Derivation

typedef GPB_ENUM(KeystoreCommonDeriveParam_Derivation_FieldNumber) {
  KeystoreCommonDeriveParam_Derivation_FieldNumber_ChainType = 1,
  KeystoreCommonDeriveParam_Derivation_FieldNumber_Path = 2,
  KeystoreCommonDeriveParam_Derivation_FieldNumber_Network = 3,
  KeystoreCommonDeriveParam_Derivation_FieldNumber_SegWit = 4,
  KeystoreCommonDeriveParam_Derivation_FieldNumber_ChainId = 5,
};

GPB_FINAL @interface KeystoreCommonDeriveParam_Derivation : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *chainType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *path;

@property(nonatomic, readwrite, copy, null_resettable) NSString *network;

@property(nonatomic, readwrite, copy, null_resettable) NSString *segWit;

@property(nonatomic, readwrite, copy, null_resettable) NSString *chainId;

@end

#pragma mark - AccountResponse

typedef GPB_ENUM(AccountResponse_FieldNumber) {
  AccountResponse_FieldNumber_ChainType = 1,
  AccountResponse_FieldNumber_Address = 2,
  AccountResponse_FieldNumber_Path = 3,
  AccountResponse_FieldNumber_ExtendedXpubKey = 4,
};

GPB_FINAL @interface AccountResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *chainType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *address;

@property(nonatomic, readwrite, copy, null_resettable) NSString *path;

@property(nonatomic, readwrite, copy, null_resettable) NSString *extendedXpubKey;

@end

#pragma mark - AccountsResponse

typedef GPB_ENUM(AccountsResponse_FieldNumber) {
  AccountsResponse_FieldNumber_AccountsArray = 1,
};

GPB_FINAL @interface AccountsResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<AccountResponse*> *accountsArray;
/** The number of items in @c accountsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger accountsArray_Count;

@end

#pragma mark - KeystoreCommonExportResult

typedef GPB_ENUM(KeystoreCommonExportResult_FieldNumber) {
  KeystoreCommonExportResult_FieldNumber_Id_p = 1,
  KeystoreCommonExportResult_FieldNumber_Type = 2,
  KeystoreCommonExportResult_FieldNumber_Value = 3,
};

/**
 * FUNCTION: hd_store_export(KeystoreCommonExportResult): KeystoreCommonExistsResult
 *
 * export the mnemonic from a hd fixtures
 **/
GPB_FINAL @interface KeystoreCommonExportResult : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite) KeyType type;

@property(nonatomic, readwrite, copy, null_resettable) NSString *value;

@end

/**
 * Fetches the raw value of a @c KeystoreCommonExportResult's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t KeystoreCommonExportResult_Type_RawValue(KeystoreCommonExportResult *message);
/**
 * Sets the raw value of an @c KeystoreCommonExportResult's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetKeystoreCommonExportResult_Type_RawValue(KeystoreCommonExportResult *message, int32_t value);

#pragma mark - PrivateKeyStoreImportParam

typedef GPB_ENUM(PrivateKeyStoreImportParam_FieldNumber) {
  PrivateKeyStoreImportParam_FieldNumber_PrivateKey = 1,
  PrivateKeyStoreImportParam_FieldNumber_Password = 2,
  PrivateKeyStoreImportParam_FieldNumber_Overwrite = 3,
};

/**
 * FUNCTION: private_key_store_import(PrivateKeyStoreImportParam): WalletResult
 *
 * create a new private key fixtures by a private key
 **/
GPB_FINAL @interface PrivateKeyStoreImportParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *privateKey;

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite) BOOL overwrite;

@end

#pragma mark - PrivateKeyStoreExportParam

typedef GPB_ENUM(PrivateKeyStoreExportParam_FieldNumber) {
  PrivateKeyStoreExportParam_FieldNumber_Id_p = 1,
  PrivateKeyStoreExportParam_FieldNumber_Password = 2,
  PrivateKeyStoreExportParam_FieldNumber_ChainType = 3,
  PrivateKeyStoreExportParam_FieldNumber_Network = 4,
};

/**
 * FUNCTION: private_key_store_export(PrivateKeyStoreExportParam): KeystoreCommonExportResult
 *
 * export the private key from a private key fixtures
 **/
GPB_FINAL @interface PrivateKeyStoreExportParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite, copy, null_resettable) NSString *chainType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *network;

@end

#pragma mark - KeystoreCommonExistsParam

typedef GPB_ENUM(KeystoreCommonExistsParam_FieldNumber) {
  KeystoreCommonExistsParam_FieldNumber_Type = 1,
  KeystoreCommonExistsParam_FieldNumber_Value = 2,
};

/**
 * FUNCTION: keystore_common_exists(KeystoreCommonExistsParam): KeystoreCommonExistsResult
 *
 * Check is there a fixtures was generate by the special privateKey or mnemonic
 **/
GPB_FINAL @interface KeystoreCommonExistsParam : GPBMessage

@property(nonatomic, readwrite) KeyType type;

@property(nonatomic, readwrite, copy, null_resettable) NSString *value;

@end

/**
 * Fetches the raw value of a @c KeystoreCommonExistsParam's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t KeystoreCommonExistsParam_Type_RawValue(KeystoreCommonExistsParam *message);
/**
 * Sets the raw value of an @c KeystoreCommonExistsParam's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetKeystoreCommonExistsParam_Type_RawValue(KeystoreCommonExistsParam *message, int32_t value);

#pragma mark - KeystoreCommonExistsResult

typedef GPB_ENUM(KeystoreCommonExistsResult_FieldNumber) {
  KeystoreCommonExistsResult_FieldNumber_IsExists = 1,
  KeystoreCommonExistsResult_FieldNumber_Id_p = 2,
};

GPB_FINAL @interface KeystoreCommonExistsResult : GPBMessage

@property(nonatomic, readwrite) BOOL isExists;

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@end

#pragma mark - KeystoreCommonAccountsParam

typedef GPB_ENUM(KeystoreCommonAccountsParam_FieldNumber) {
  KeystoreCommonAccountsParam_FieldNumber_Id_p = 1,
};

/**
 * FUNCTION: keystore_common_accounts(KeystoreCommonAccountsParam): AccountsResponse
 *
 * List all accounts from the fixtures
 **/
GPB_FINAL @interface KeystoreCommonAccountsParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@end

#pragma mark - SignParam

typedef GPB_ENUM(SignParam_FieldNumber) {
  SignParam_FieldNumber_Id_p = 1,
  SignParam_FieldNumber_Password = 2,
  SignParam_FieldNumber_DerivedKey = 3,
  SignParam_FieldNumber_ChainType = 4,
  SignParam_FieldNumber_Address = 5,
  SignParam_FieldNumber_Input = 6,
};

typedef GPB_ENUM(SignParam_Key_OneOfCase) {
  SignParam_Key_OneOfCase_GPBUnsetOneOfCase = 0,
  SignParam_Key_OneOfCase_Password = 2,
  SignParam_Key_OneOfCase_DerivedKey = 3,
};

/**
 * FUNCTION: sign_tx(SignParam)
 *
 * Sign transaction. This api is used for sign any chain_type, you should build the right TxInput instance and
 * put it in the `input` field
 **/
GPB_FINAL @interface SignParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readonly) SignParam_Key_OneOfCase keyOneOfCase;

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite, copy, null_resettable) NSString *derivedKey;

@property(nonatomic, readwrite, copy, null_resettable) NSString *chainType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *address;

@property(nonatomic, readwrite, strong, null_resettable) GPBAny *input;
/** Test to see if @c input has been set. */
@property(nonatomic, readwrite) BOOL hasInput;

@end

/**
 * Clears whatever value was set for the oneof 'key'.
 **/
void SignParam_ClearKeyOneOfCase(SignParam *message);

#pragma mark - ExternalAddressParam

typedef GPB_ENUM(ExternalAddressParam_FieldNumber) {
  ExternalAddressParam_FieldNumber_Id_p = 1,
  ExternalAddressParam_FieldNumber_ChainType = 2,
  ExternalAddressParam_FieldNumber_ExternalIdx = 3,
};

/**
 * btc-fork
 **/
GPB_FINAL @interface ExternalAddressParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *chainType;

@property(nonatomic, readwrite) uint32_t externalIdx;

@end

#pragma mark - ExternalAddressResult

typedef GPB_ENUM(ExternalAddressResult_FieldNumber) {
  ExternalAddressResult_FieldNumber_Address = 1,
  ExternalAddressResult_FieldNumber_DerivedPath = 2,
  ExternalAddressResult_FieldNumber_Type = 3,
};

GPB_FINAL @interface ExternalAddressResult : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *address;

@property(nonatomic, readwrite, copy, null_resettable) NSString *derivedPath;

@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

@end

#pragma mark - ExternalAddressExtra

typedef GPB_ENUM(ExternalAddressExtra_FieldNumber) {
  ExternalAddressExtra_FieldNumber_EncXpub = 1,
  ExternalAddressExtra_FieldNumber_ExternalAddress = 2,
};

GPB_FINAL @interface ExternalAddressExtra : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *encXpub;

@property(nonatomic, readwrite, strong, null_resettable) ExternalAddressExtra_ExternalAddress *externalAddress;
/** Test to see if @c externalAddress has been set. */
@property(nonatomic, readwrite) BOOL hasExternalAddress;

@end

#pragma mark - ExternalAddressExtra_ExternalAddress

typedef GPB_ENUM(ExternalAddressExtra_ExternalAddress_FieldNumber) {
  ExternalAddressExtra_ExternalAddress_FieldNumber_Address = 1,
  ExternalAddressExtra_ExternalAddress_FieldNumber_DerivedPath = 2,
  ExternalAddressExtra_ExternalAddress_FieldNumber_Type = 3,
};

GPB_FINAL @interface ExternalAddressExtra_ExternalAddress : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *address;

@property(nonatomic, readwrite, copy, null_resettable) NSString *derivedPath;

@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

@end

#pragma mark - BtcForkDeriveExtraParam

typedef GPB_ENUM(BtcForkDeriveExtraParam_FieldNumber) {
  BtcForkDeriveExtraParam_FieldNumber_Network = 1,
  BtcForkDeriveExtraParam_FieldNumber_SegWit = 2,
};

GPB_FINAL @interface BtcForkDeriveExtraParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *network;

@property(nonatomic, readwrite, copy, null_resettable) NSString *segWit;

@end

#pragma mark - HdStoreExtendedPublicKeyParam

typedef GPB_ENUM(HdStoreExtendedPublicKeyParam_FieldNumber) {
  HdStoreExtendedPublicKeyParam_FieldNumber_Id_p = 1,
  HdStoreExtendedPublicKeyParam_FieldNumber_Password = 2,
  HdStoreExtendedPublicKeyParam_FieldNumber_ChainType = 3,
  HdStoreExtendedPublicKeyParam_FieldNumber_Address = 4,
};

GPB_FINAL @interface HdStoreExtendedPublicKeyParam : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite, copy, null_resettable) NSString *chainType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *address;

@end

#pragma mark - HdStoreExtendedPublicKeyResponse

typedef GPB_ENUM(HdStoreExtendedPublicKeyResponse_FieldNumber) {
  HdStoreExtendedPublicKeyResponse_FieldNumber_ExtendedPublicKey = 1,
};

GPB_FINAL @interface HdStoreExtendedPublicKeyResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *extendedPublicKey;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)