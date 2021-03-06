//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/KeyManagerFactorySpi.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslKeyManagerFactorySpi")
#ifdef RESTRICT_JavaxNetSslKeyManagerFactorySpi
#define INCLUDE_ALL_JavaxNetSslKeyManagerFactorySpi 0
#else
#define INCLUDE_ALL_JavaxNetSslKeyManagerFactorySpi 1
#endif
#undef RESTRICT_JavaxNetSslKeyManagerFactorySpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslKeyManagerFactorySpi_) && (INCLUDE_ALL_JavaxNetSslKeyManagerFactorySpi || defined(INCLUDE_JavaxNetSslKeyManagerFactorySpi))
#define JavaxNetSslKeyManagerFactorySpi_

@class IOSCharArray;
@class IOSObjectArray;
@class JavaSecurityKeyStore;
@protocol JavaxNetSslManagerFactoryParameters;

/*!
 @brief The <i>Service Provider Interface</i> (SPI) for the
 <code>KeyManagerFactory</code> class.
 */
@interface JavaxNetSslKeyManagerFactorySpi : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>KeyManagerFactorySpi</code> instance.
 */
- (instancetype)init;

#pragma mark Protected

/*!
 @brief Returns a list of key managers, one instance for each type of key in the
 key store.
 @return a list of key managers.
 */
- (IOSObjectArray *)engineGetKeyManagers;

/*!
 @brief Initializes this instance with the specified key store and password.
 @param ks
 the key store or <code>null</code> to use the default key store.
 @param password
 the key store password.
 @throws KeyStoreException
 if initializing this instance fails.
 @throws NoSuchAlgorithmException
 if a required algorithm is not available.
 @throws UnrecoverableKeyException
 if a key cannot be recovered.
 */
- (void)engineInitWithJavaSecurityKeyStore:(JavaSecurityKeyStore *)ks
                             withCharArray:(IOSCharArray *)password;

/*!
 @brief Initializes this instance with the specified factory parameters.
 @param spec
 the factory parameters.
 @throws InvalidAlgorithmParameterException
 if an error occurs.
 */
- (void)engineInitWithJavaxNetSslManagerFactoryParameters:(id<JavaxNetSslManagerFactoryParameters>)spec;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslKeyManagerFactorySpi)

FOUNDATION_EXPORT void JavaxNetSslKeyManagerFactorySpi_init(JavaxNetSslKeyManagerFactorySpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslKeyManagerFactorySpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslKeyManagerFactorySpi")
