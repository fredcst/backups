//
// SendKeyboardShortcutIntent.h
//
// This file was automatically generated and should not be edited.
//

#if __has_include(<Intents/Intents.h>)

#import <Intents/Intents.h>
#import "KeyOrKeycode.h"
#import "App.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos)
@interface SendKeyboardShortcutIntent : INIntent

@property (readwrite, copy, nullable, nonatomic) NSNumber *cmd API_AVAILABLE(ios(13.0), macos(10.16), watchos(6.0));
@property (readwrite, copy, nullable, nonatomic) NSNumber *ctrl API_AVAILABLE(ios(13.0), macos(10.16), watchos(6.0));
@property (readwrite, copy, nullable, nonatomic) NSNumber *opt API_AVAILABLE(ios(13.0), macos(10.16), watchos(6.0));
@property (readwrite, copy, nullable, nonatomic) NSNumber *shift API_AVAILABLE(ios(13.0), macos(10.16), watchos(6.0));
@property (readwrite, copy, nullable, nonatomic) NSNumber *fn API_AVAILABLE(ios(13.0), macos(10.16), watchos(6.0));
@property (readwrite, assign, nonatomic) KeyOrKeycode keyOrKeyCode;
@property (readwrite, copy, nullable, nonatomic) NSString *character;
@property (readwrite, copy, nullable, nonatomic) NSNumber *keyCode;
@property (readwrite, copy, nullable, nonatomic) App *app;
@property (readwrite, copy, nullable, nonatomic) NSNumber *bringAppToFront API_AVAILABLE(ios(13.0), macos(10.16), watchos(6.0));
@property (readwrite, copy, nullable, nonatomic) NSNumber *switchBackAfterSending API_AVAILABLE(ios(13.0), macos(10.16), watchos(6.0));

@end

@class SendKeyboardShortcutIntentResponse;

/*!
 @abstract Protocol to declare support for handling a SendKeyboardShortcutIntent. By implementing this protocol, a class can provide logic for resolving, confirming and handling the intent.
 @discussion The minimum requirement for an implementing class is that it should be able to handle the intent. The confirmation method is optional. The handling method is always called last, after confirming the intent.
 */
API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos)
@protocol SendKeyboardShortcutIntentHandling <NSObject>

@required

/*!
 @abstract Handling method - Execute the task represented by the SendKeyboardShortcutIntent that's passed in
 @discussion Called to actually execute the intent. The app must return a response for this intent.

 @param  intent The input intent
 @param  completion The response handling block takes a SendKeyboardShortcutIntentResponse containing the details of the result of having executed the intent

 @see  SendKeyboardShortcutIntentResponse
 */
- (void)handleSendKeyboardShortcut:(SendKeyboardShortcutIntent *)intent completion:(void (^)(SendKeyboardShortcutIntentResponse *response))completion NS_SWIFT_NAME(handle(intent:completion:));

/*!
 @abstract Dynamic options methods - provide options for the parameter at runtime
 @discussion Called to query dynamic options for the parameter and this intent in its current form.

 @param  intent The input intent
 @param  completion The response block contains options for the parameter
 */
- (void)provideAppOptionsCollectionForSendKeyboardShortcut:(SendKeyboardShortcutIntent *)intent withCompletion:(void (^)(INObjectCollection<App *> * _Nullable appOptionsCollection, NSError * _Nullable error))completion NS_SWIFT_NAME(provideAppOptionsCollection(for:with:)) API_AVAILABLE(ios(14.0), macos(11.0), watchos(7.0));

@optional

/*!
 @abstract Confirmation method - Validate that this intent is ready for the next step (i.e. handling)
 @discussion Called prior to asking the app to handle the intent. The app should return a response object that contains additional information about the intent, which may be relevant for the system to show the user prior to handling. If unimplemented, the system will assume the intent is valid, and will assume there is no additional information relevant to this intent.

 @param  intent The input intent
 @param  completion The response block contains a SendKeyboardShortcutIntentResponse containing additional details about the intent that may be relevant for the system to show the user prior to handling.

 @see SendKeyboardShortcutIntentResponse
 */
- (void)confirmSendKeyboardShortcut:(SendKeyboardShortcutIntent *)intent completion:(void (^)(SendKeyboardShortcutIntentResponse *response))completion NS_SWIFT_NAME(confirm(intent:completion:));

/*!
 @abstract Default values for parameters with dynamic options
 @discussion Called to query the parameter default value.
 */
- (nullable App *)defaultAppForSendKeyboardShortcut:(SendKeyboardShortcutIntent *)intent NS_SWIFT_NAME(defaultApp(for:)) API_AVAILABLE(ios(14.0), macos(11.0), watchos(7.0));

/*!
 @abstract Deprecated dynamic options methods.
 */
- (void)provideAppOptionsForSendKeyboardShortcut:(SendKeyboardShortcutIntent *)intent withCompletion:(void (^)(NSArray<App *> * _Nullable appOptions, NSError * _Nullable error))completion NS_SWIFT_NAME(provideAppOptions(for:with:)) API_DEPRECATED("", ios(13.0, 14.0), watchos(6.0, 7.0));

@end

/*!
 @abstract Constants indicating the state of the response.
 */
typedef NS_ENUM(NSInteger, SendKeyboardShortcutIntentResponseCode) {
    SendKeyboardShortcutIntentResponseCodeUnspecified = 0,
    SendKeyboardShortcutIntentResponseCodeReady,
    SendKeyboardShortcutIntentResponseCodeContinueInApp,
    SendKeyboardShortcutIntentResponseCodeInProgress,
    SendKeyboardShortcutIntentResponseCodeSuccess,
    SendKeyboardShortcutIntentResponseCodeFailure,
    SendKeyboardShortcutIntentResponseCodeFailureRequiringAppLaunch
} API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos);

API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos)
@interface SendKeyboardShortcutIntentResponse : INIntentResponse

- (instancetype)init NS_UNAVAILABLE;

/*!
 @abstract Initializes the response object with the specified code and user activity object.
 @discussion The app extension has the option of capturing its private state as an NSUserActivity and returning it as the 'currentActivity'. If the app is launched, an NSUserActivity will be passed in with the private state. The NSUserActivity may also be used to query the app's UI extension (if provided) for a view controller representing the current intent handling state. In the case of app launch, the NSUserActivity will have its activityType set to the name of the intent. This intent object will also be available in the NSUserActivity.interaction property.

 @param  code The response code indicating your success or failure in confirming or handling the intent.
 @param  userActivity The user activity object to use when launching your app. Provide an object if you want to add information that is specific to your app. If you specify nil, the system automatically creates a user activity object for you, sets its type to the class name of the intent being handled, and fills it with an INInteraction object containing the intent and your response.
 */
- (instancetype)initWithCode:(SendKeyboardShortcutIntentResponseCode)code userActivity:(nullable NSUserActivity *)userActivity NS_DESIGNATED_INITIALIZER;

/*!
 @abstract The response code indicating your success or failure in confirming or handling the intent.
 */
@property (readonly, NS_NONATOMIC_IOSONLY) SendKeyboardShortcutIntentResponseCode code;

@end

NS_ASSUME_NONNULL_END

#endif
