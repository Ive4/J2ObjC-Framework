//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/UnrecoverableKeyException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityUnrecoverableKeyException")
#ifdef RESTRICT_JavaSecurityUnrecoverableKeyException
#define INCLUDE_ALL_JavaSecurityUnrecoverableKeyException 0
#else
#define INCLUDE_ALL_JavaSecurityUnrecoverableKeyException 1
#endif
#undef RESTRICT_JavaSecurityUnrecoverableKeyException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityUnrecoverableKeyException_) && (INCLUDE_ALL_JavaSecurityUnrecoverableKeyException || defined(INCLUDE_JavaSecurityUnrecoverableKeyException))
#define JavaSecurityUnrecoverableKeyException_

#define RESTRICT_JavaSecurityUnrecoverableEntryException 1
#define INCLUDE_JavaSecurityUnrecoverableEntryException 1
#include "../../java/security/UnrecoverableEntryException.h"

/*!
 @brief <code>UnrecoverableKeyException</code> indicates, that a key cannot be recovered
 from a <code>KeyStore</code>.
 - seealso: KeyStore
 */
@interface JavaSecurityUnrecoverableKeyException : JavaSecurityUnrecoverableEntryException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>UnrecoverableKeyException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>UnrecoverableKeyException</code> with the
 given message.
 @param msg
 the detail message for this exception
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityUnrecoverableKeyException)

FOUNDATION_EXPORT void JavaSecurityUnrecoverableKeyException_initWithNSString_(JavaSecurityUnrecoverableKeyException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityUnrecoverableKeyException *new_JavaSecurityUnrecoverableKeyException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityUnrecoverableKeyException *create_JavaSecurityUnrecoverableKeyException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityUnrecoverableKeyException_init(JavaSecurityUnrecoverableKeyException *self);

FOUNDATION_EXPORT JavaSecurityUnrecoverableKeyException *new_JavaSecurityUnrecoverableKeyException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityUnrecoverableKeyException *create_JavaSecurityUnrecoverableKeyException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityUnrecoverableKeyException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityUnrecoverableKeyException")
