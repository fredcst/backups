//
// BluetoothDeviceConnectionIntent.h
//
// This file was automatically generated and should not be edited.
//

#if __has_include(<Intents/Intents.h>)

#import <Intents/Intents.h>
#import "BluetoothAction.h"
#import "BluetoothDevice.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos)
@interface BluetoothDeviceConnectionIntent : INIntent

@property (readwrite, assign, nonatomic) BluetoothAction action;
@property (readwrite, copy, nullable, nonatomic) BluetoothDevice *deviceSelectionConnect;
@property (readwrite, copy, nullable, nonatomic) NSString *manualDeviceNameOrAddressConnect;
@property (readwrite, copy, nullable, nonatomic) NSString *manualDeviceNameOrAddressDisconnect;
@property (readwrite, copy, nullable, nonatomic) BluetoothDevice *deviceSelectionDisconnect;
@property (readwrite, copy, nullable, nonatomic) NSString *inputDictionaryJSON;

@end

@class BluetoothDeviceConnectionIntentResponse;

/*!
 @abstract Protocol to declare support for handling a BluetoothDeviceConnectionIntent. By implementing this protocol, a class can provide logic for resolving, confirming and handling the intent.
 @discussion The minimum requirement for an implementing class is that it should be able to handle the intent. The confirmation method is optional. The handling method is always called last, after confirming the intent.
 */
API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos)
@protocol BluetoothDeviceConnectionIntentHandling <NSObject>

@required

/*!
 @abstract Handling method - Execute the task represented by the BluetoothDeviceConnectionIntent that's passed in
 @discussion Called to actually execute the intent. The app must return a response for this intent.

 @param  intent The input intent
 @param  completion The response handling block takes a BluetoothDeviceConnectionIntentResponse containing the details of the result of having executed the intent

 @see  BluetoothDeviceConnectionIntentResponse
 */
- (void)handleBluetoothDeviceConnection:(BluetoothDeviceConnectionIntent *)intent completion:(void (^)(BluetoothDeviceConnectionIntentResponse *response))completion NS_SWIFT_NAME(handle(intent:completion:));

/*!
 @abstract Dynamic options methods - provide options for the parameter at runtime
 @discussion Called to query dynamic options for the parameter and this intent in its current form.

 @param  intent The input intent
 @param  completion The response block contains options for the parameter
 */
- (void)provideDeviceSelectionConnectOptionsCollectionForBluetoothDeviceConnection:(BluetoothDeviceConnectionIntent *)intent withCompletion:(void (^)(INObjectCollection<BluetoothDevice *> * _Nullable deviceSelectionConnectOptionsCollection, NSError * _Nullable error))completion NS_SWIFT_NAME(provideDeviceSelectionConnectOptionsCollection(for:with:)) API_AVAILABLE(ios(14.0), macos(11.0), watchos(7.0));

- (void)provideDeviceSelectionDisconnectOptionsCollectionForBluetoothDeviceConnection:(BluetoothDeviceConnectionIntent *)intent withCompletion:(void (^)(INObjectCollection<BluetoothDevice *> * _Nullable deviceSelectionDisconnectOptionsCollection, NSError * _Nullable error))completion NS_SWIFT_NAME(provideDeviceSelectionDisconnectOptionsCollection(for:with:)) API_AVAILABLE(ios(14.0), macos(11.0), watchos(7.0));

@optional

/*!
 @abstract Confirmation method - Validate that this intent is ready for the next step (i.e. handling)
 @discussion Called prior to asking the app to handle the intent. The app should return a response object that contains additional information about the intent, which may be relevant for the system to show the user prior to handling. If unimplemented, the system will assume the intent is valid, and will assume there is no additional information relevant to this intent.

 @param  intent The input intent
 @param  completion The response block contains a BluetoothDeviceConnectionIntentResponse containing additional details about the intent that may be relevant for the system to show the user prior to handling.

 @see BluetoothDeviceConnectionIntentResponse
 */
- (void)confirmBluetoothDeviceConnection:(BluetoothDeviceConnectionIntent *)intent completion:(void (^)(BluetoothDeviceConnectionIntentResponse *response))completion NS_SWIFT_NAME(confirm(intent:completion:));

/*!
 @abstract Default values for parameters with dynamic options
 @discussion Called to query the parameter default value.
 */
- (nullable BluetoothDevice *)defaultDeviceSelectionConnectForBluetoothDeviceConnection:(BluetoothDeviceConnectionIntent *)intent NS_SWIFT_NAME(defaultDeviceSelectionConnect(for:)) API_AVAILABLE(ios(14.0), macos(11.0), watchos(7.0));

- (nullable BluetoothDevice *)defaultDeviceSelectionDisconnectForBluetoothDeviceConnection:(BluetoothDeviceConnectionIntent *)intent NS_SWIFT_NAME(defaultDeviceSelectionDisconnect(for:)) API_AVAILABLE(ios(14.0), macos(11.0), watchos(7.0));

/*!
 @abstract Deprecated dynamic options methods.
 */
- (void)provideDeviceSelectionConnectOptionsForBluetoothDeviceConnection:(BluetoothDeviceConnectionIntent *)intent withCompletion:(void (^)(NSArray<BluetoothDevice *> * _Nullable deviceSelectionConnectOptions, NSError * _Nullable error))completion NS_SWIFT_NAME(provideDeviceSelectionConnectOptions(for:with:)) API_DEPRECATED("", ios(13.0, 14.0), watchos(6.0, 7.0));

- (void)provideDeviceSelectionDisconnectOptionsForBluetoothDeviceConnection:(BluetoothDeviceConnectionIntent *)intent withCompletion:(void (^)(NSArray<BluetoothDevice *> * _Nullable deviceSelectionDisconnectOptions, NSError * _Nullable error))completion NS_SWIFT_NAME(provideDeviceSelectionDisconnectOptions(for:with:)) API_DEPRECATED("", ios(13.0, 14.0), watchos(6.0, 7.0));

@end

/*!
 @abstract Constants indicating the state of the response.
 */
typedef NS_ENUM(NSInteger, BluetoothDeviceConnectionIntentResponseCode) {
    BluetoothDeviceConnectionIntentResponseCodeUnspecified = 0,
    BluetoothDeviceConnectionIntentResponseCodeReady,
    BluetoothDeviceConnectionIntentResponseCodeContinueInApp,
    BluetoothDeviceConnectionIntentResponseCodeInProgress,
    BluetoothDeviceConnectionIntentResponseCodeSuccess,
    BluetoothDeviceConnectionIntentResponseCodeFailure,
    BluetoothDeviceConnectionIntentResponseCodeFailureRequiringAppLaunch
} API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos);

API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos)
@interface BluetoothDeviceConnectionIntentResponse : INIntentResponse

- (instancetype)init NS_UNAVAILABLE;

/*!
 @abstract Initializes the response object with the specified code and user activity object.
 @discussion The app extension has the option of capturing its private state as an NSUserActivity and returning it as the 'currentActivity'. If the app is launched, an NSUserActivity will be passed in with the private state. The NSUserActivity may also be used to query the app's UI extension (if provided) for a view controller representing the current intent handling state. In the case of app launch, the NSUserActivity will have its activityType set to the name of the intent. This intent object will also be available in the NSUserActivity.interaction property.

 @param  code The response code indicating your success or failure in confirming or handling the intent.
 @param  userActivity The user activity object to use when launching your app. Provide an object if you want to add information that is specific to your app. If you specify nil, the system automatically creates a user activity object for you, sets its type to the class name of the intent being handled, and fills it with an INInteraction object containing the intent and your response.
 */
- (instancetype)initWithCode:(BluetoothDeviceConnectionIntentResponseCode)code userActivity:(nullable NSUserActivity *)userActivity NS_DESIGNATED_INITIALIZER;

/*!
 @abstract The response code indicating your success or failure in confirming or handling the intent.
 */
@property (readonly, NS_NONATOMIC_IOSONLY) BluetoothDeviceConnectionIntentResponseCode code;

@end

NS_ASSUME_NONNULL_END

#endif
