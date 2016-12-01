// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSDate;
enum SentrySeverity : NSInteger;

/**
  A class used to represent the breadcrumbs leading up to an events
*/
SWIFT_CLASS("_TtC11SentrySwift10Breadcrumb")
@interface Breadcrumb : NSObject
@property (nonatomic, readonly, strong) NSDate * _Nonnull timestamp;
@property (nonatomic, copy) NSString * _Nonnull category;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable message;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull data;
@property (nonatomic) enum SentrySeverity level;
/**
  Creates a breadcrumb
*/
- (nonnull instancetype)initWithCategory:(NSString * _Nonnull)category timestamp:(NSDate * _Nonnull)timestamp message:(NSString * _Nullable)message type:(NSString * _Nullable)type level:(enum SentrySeverity)level data:(NSDictionary<NSString *, id> * _Nullable)data OBJC_DESIGNATED_INITIALIZER;
/**
  Conveneince init for a “navigation” type breadcrumb
*/
- (nonnull instancetype)initWithCategory:(NSString * _Nonnull)category timestamp:(NSDate * _Nonnull)timestamp message:(NSString * _Nullable)message level:(enum SentrySeverity)level data:(NSDictionary<NSString *, id> * _Nullable)data to:(NSString * _Nonnull)to from:(NSString * _Nullable)from;
/**
  Conveneince init for an “http” type breadcrumb (-999 workaround because @objc can’t handle optional Int)
*/
- (nonnull instancetype)initWithCategory:(NSString * _Nonnull)category timestamp:(NSDate * _Nonnull)timestamp message:(NSString * _Nullable)message level:(enum SentrySeverity)level data:(NSDictionary<NSString *, id> * _Nullable)data url:(NSString * _Nonnull)url method:(NSString * _Nonnull)method statusCode:(NSInteger)statusCode reason:(NSString * _Nullable)reason;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Breadcrumb (SWIFT_EXTENSION(SentrySwift))
@end


/**
  A class used to hold and store our \code
  Breadcrumb
  \endcode
*/
SWIFT_CLASS("_TtC11SentrySwift15BreadcrumbStore")
@interface BreadcrumbStore : NSObject
/**
  Adds given crumb to the client store
*/
- (void)add:(Breadcrumb * _Nonnull)crumb;
/**
  Clears the store for given type or all if none specified
*/
- (void)clear;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface BreadcrumbStore (SWIFT_EXTENSION(SentrySwift))
@end


SWIFT_CLASS("_TtC11SentrySwift8Contexts")
@interface Contexts : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface Contexts (SWIFT_EXTENSION(SentrySwift))
@end

@class User;
@class Thread;
@class Exception;
@class Stacktrace;

/**
  A class that defines an event to be reported
*/
SWIFT_CLASS("_TtC11SentrySwift5Event")
@interface Event : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull eventID;
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, strong) NSDate * _Nonnull timestamp;
@property (nonatomic) enum SentrySeverity level;
@property (nonatomic, copy) NSString * _Nonnull platform;
@property (nonatomic, copy) NSString * _Nullable logger;
@property (nonatomic, copy) NSString * _Nullable culprit;
@property (nonatomic, copy) NSString * _Nullable serverName;
@property (nonatomic, copy) NSString * _Nullable releaseVersion;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull tags;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable modules;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull extra;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable fingerprint;
@property (nonatomic, strong) User * _Nullable user;
@property (nonatomic, copy) NSArray<Thread *> * _Nullable threads;
@property (nonatomic, copy) NSArray<Exception *> * _Nullable exceptions;
@property (nonatomic, strong) Stacktrace * _Nullable stacktrace;
- (nonnull instancetype)init:(NSString * _Nonnull)message timestamp:(NSDate * _Nonnull)timestamp level:(enum SentrySeverity)level logger:(NSString * _Nullable)logger culprit:(NSString * _Nullable)culprit serverName:(NSString * _Nullable)serverName release:(NSString * _Nullable)release tags:(NSDictionary<NSString *, NSString *> * _Nonnull)tags modules:(NSDictionary<NSString *, NSString *> * _Nullable)modules extra:(NSDictionary<NSString *, id> * _Nonnull)extra fingerprint:(NSArray<NSString *> * _Nullable)fingerprint user:(User * _Nullable)user exceptions:(NSArray<Exception *> * _Nullable)exceptions stacktrace:(Stacktrace * _Nullable)stacktrace OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Event (SWIFT_EXTENSION(SentrySwift))
@end


@interface Event (SWIFT_EXTENSION(SentrySwift))
@end


SWIFT_CLASS("_TtC11SentrySwift9Exception")
@interface Exception : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull value;
@property (nonatomic, readonly, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> * _Nullable mechanism;
@property (nonatomic, readonly, copy) NSString * _Nullable module;
@property (nonatomic, strong) Thread * _Nullable thread;
/**
  Creates \code
  Exception
  \endcode object
*/
- (nonnull instancetype)initWithValue:(NSString * _Nonnull)value type:(NSString * _Nullable)type mechanism:(NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> * _Nullable)mechanism module:(NSString * _Nullable)module OBJC_DESIGNATED_INITIALIZER;
- (BOOL)isEqual:(id _Nullable)object;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Exception (SWIFT_EXTENSION(SentrySwift))
@end


SWIFT_CLASS("_TtC11SentrySwift5Frame")
@interface Frame : NSObject
@property (nonatomic, copy) NSString * _Nullable file;
@property (nonatomic, copy) NSString * _Nullable function;
@property (nonatomic, copy) NSString * _Nullable module;
@property (nonatomic, copy) NSString * _Nullable package;
@property (nonatomic, copy) NSString * _Nullable imageAddress;
@property (nonatomic, copy) NSString * _Nullable platform;
@property (nonatomic, copy) NSString * _Nullable instructionAddress;
@property (nonatomic, copy) NSString * _Nullable symbolAddress;
/**
  Creates \code
  Exception
  \endcode object
*/
- (nonnull instancetype)initWithFile:(NSString * _Nullable)file function:(NSString * _Nullable)function module:(NSString * _Nullable)module line:(NSInteger)line OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Frame (SWIFT_EXTENSION(SentrySwift))
@end


@interface NSDate (SWIFT_EXTENSION(SentrySwift))
@end

enum SentryLog : NSInteger;
@protocol SentryClientUserFeedbackDelegate;
@class UserFeedbackTableViewController;
@class UINavigationController;
@class UserFeedbackViewModel;

SWIFT_CLASS("_TtC11SentrySwift12SentryClient")
@interface SentryClient : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) SentryClient * _Nullable shared;)
+ (SentryClient * _Nullable)shared;
+ (void)setShared:(SentryClient * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum SentryLog logLevel;)
+ (enum SentryLog)logLevel;
+ (void)setLogLevel:(enum SentryLog)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull versionString;)
+ (NSString * _Nonnull)versionString;
@property (nonatomic, strong) BreadcrumbStore * _Nonnull breadcrumbs;
@property (nonatomic, strong) id <SentryClientUserFeedbackDelegate> _Nullable delegate;
@property (nonatomic, copy) NSString * _Nullable releaseVersion;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull tags;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull extra;
@property (nonatomic, strong) User * _Nullable user;
/**
  Creates a Sentry object iff a valid DSN is provided
*/
- (nullable instancetype)initWithDsnString:(NSString * _Nonnull)dsnString;
- (void)captureMessage:(NSString * _Nonnull)message level:(enum SentrySeverity)level;
/**
  Reports given event to Sentry
*/
- (void)captureEvent:(Event * _Nonnull)event;
- (void)enableAutomaticBreadcrumbTracking;
/**
  This will make you app crash, use only for test purposes
*/
- (void)crash;
- (UserFeedbackTableViewController * _Nullable)userFeedbackTableViewController;
- (UINavigationController * _Nullable)userFeedbackNavigationViewController;
/**
  Call this with your custom UserFeedbackViewModel to configure the UserFeedbackViewController
*/
- (void)enableUserFeedbackAfterFatalEventWithUserFeedbackViewModel:(UserFeedbackViewModel * _Nonnull)userFeedbackViewModel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface SentryClient (SWIFT_EXTENSION(SentrySwift))
- (void)startCrashHandler;
@end

@class NSError;

@interface SentryClient (SWIFT_EXTENSION(SentrySwift))
- (void)captureErrorWithError:(NSError * _Nonnull)error file:(NSString * _Nonnull)file line:(NSInteger)line function:(NSString * _Nonnull)function;
@end


@interface SentryClient (SWIFT_EXTENSION(SentrySwift))
@end


@interface SentryClient (SWIFT_EXTENSION(SentrySwift))
/**
  Saves given event to disk
*/
- (void)saveEvent:(Event * _Nonnull)event;
@end


SWIFT_PROTOCOL("_TtP11SentrySwift32SentryClientUserFeedbackDelegate_")
@protocol SentryClientUserFeedbackDelegate
- (void)userFeedbackReady;
- (void)userFeedbackSent;
@end

typedef SWIFT_ENUM(NSInteger, SentryLog) {
  SentryLogNone = 0,
  SentryLogError = 1,
  SentryLogDebug = 2,
};

typedef SWIFT_ENUM(NSInteger, SentrySeverity) {
  SentrySeverityFatal = 0,
  SentrySeverityError = 1,
  SentrySeverityWarning = 2,
  SentrySeverityInfo = 3,
  SentrySeverityDebug = 4,
};


SWIFT_CLASS("_TtC11SentrySwift10Stacktrace")
@interface Stacktrace : NSObject
@property (nonatomic, readonly, copy) NSArray<Frame *> * _Nonnull frames;
- (nonnull instancetype)initWithFrames:(NSArray<Frame *> * _Nullable)frames OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Stacktrace (SWIFT_EXTENSION(SentrySwift))
@end


SWIFT_CLASS("_TtC11SentrySwift6Thread")
@interface Thread : NSObject
@property (nonatomic, readonly) NSInteger id;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@property (nonatomic, readonly, strong) Stacktrace * _Nullable stacktrace;
@property (nonatomic, readonly, copy) NSString * _Nullable reason;
/**
  Creates \code
  Exception
  \endcode object
*/
- (nonnull instancetype)initWithId:(NSInteger)id crashed:(BOOL)crashed current:(BOOL)current name:(NSString * _Nullable)name stacktrace:(Stacktrace * _Nullable)stacktrace reason:(NSString * _Nullable)reason OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Thread (SWIFT_EXTENSION(SentrySwift))
@end


@interface UIApplication (SWIFT_EXTENSION(SentrySwift))
@end


@interface UIViewController (SWIFT_EXTENSION(SentrySwift))
@end


/**
  A class used to represent the user attached to events
*/
SWIFT_CLASS("_TtC11SentrySwift4User")
@interface User : NSObject
@property (nonatomic, copy) NSString * _Nonnull userID;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable username;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull extra;
/**
  Creates a user
  \param userID A user id

  \param email An optional email

  \param username An optional username

  \param extra An optional extra dictionary

*/
- (nonnull instancetype)initWithId:(NSString * _Nonnull)userID email:(NSString * _Nullable)email username:(NSString * _Nullable)username extra:(NSDictionary<NSString *, id> * _Nonnull)extra OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface User (SWIFT_EXTENSION(SentrySwift))
@end


SWIFT_CLASS("_TtC11SentrySwift12UserFeedback")
@interface UserFeedback : NSObject
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull email;
@property (nonatomic, copy) NSString * _Nonnull comments;
@property (nonatomic, strong) Event * _Nullable event;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UserFeedback (SWIFT_EXTENSION(SentrySwift))
@end

@class UITextField;
@class UITableView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC11SentrySwift31UserFeedbackTableViewController")
@interface UserFeedbackTableViewController : UITableViewController <UITextFieldDelegate>
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

SWIFT_CLASS("_TtC11SentrySwift21UserFeedbackViewModel")
@interface UserFeedbackViewModel : NSObject
@property (nonatomic, copy) NSString * _Nonnull viewControllerTitle;
@property (nonatomic, copy) NSString * _Nonnull title;
@property (nonatomic, copy) NSString * _Nonnull subTitle;
@property (nonatomic, copy) NSString * _Nonnull nameLabel;
@property (nonatomic, copy) NSString * _Nonnull nameTextFieldValue;
@property (nonatomic, copy) NSString * _Nonnull emailLabel;
@property (nonatomic, copy) NSString * _Nonnull emailTextFieldValue;
@property (nonatomic, copy) NSString * _Nonnull commentsTextFieldPlaceholder;
@property (nonatomic, copy) NSString * _Nonnull commentsTextFieldValue;
@property (nonatomic, copy) NSString * _Nonnull submitButtonText;
@property (nonatomic, strong) UIColor * _Nonnull errorTextColor;
@property (nonatomic, strong) UIColor * _Nonnull defaultTextColor;
@property (nonatomic) BOOL showSentryBranding;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
