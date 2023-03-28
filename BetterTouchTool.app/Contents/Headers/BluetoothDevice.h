//
// BluetoothDevice.h
//
// This file was automatically generated and should not be edited.
//

#if __has_include(<Intents/Intents.h>)

#import <Intents/Intents.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos)
@interface BluetoothDevice : INObject

@property (readwrite, copy, nullable, nonatomic) NSString *address API_AVAILABLE(ios(13.0), macos(11.0), watchos(6.0));

@end

API_AVAILABLE(ios(13.0), macos(11.0), watchos(6.0)) API_UNAVAILABLE(tvos)
@interface BluetoothDeviceResolutionResult : INObjectResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given BluetoothDevice. The resolvedValue can be different than the original BluetoothDevice. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedBluetoothDevice:(BluetoothDevice *)resolvedObject NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to disambiguate between the provided BluetoothDevice.
+ (instancetype)disambiguationWithBluetoothDevicesToDisambiguate:(NSArray<BluetoothDevice *> *)objectsToDisambiguate NS_SWIFT_NAME(disambiguation(with:));

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithBluetoothDeviceToConfirm:(BluetoothDevice *)objectToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

+ (instancetype)successWithResolvedObject:(__kindof INObject *)resolvedObject NS_UNAVAILABLE;
+ (instancetype)disambiguationWithObjectsToDisambiguate:(NSArray<__kindof INObject *> *)objectsToDisambiguate NS_UNAVAILABLE;
+ (instancetype)confirmationRequiredWithObjectToConfirm:(nullable __kindof INObject *)objectToConfirm NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

#endif
