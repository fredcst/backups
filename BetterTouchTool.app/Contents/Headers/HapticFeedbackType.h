//
// HapticFeedbackType.h
//
// This file was automatically generated and should not be edited.
//

#if __has_include(<Intents/Intents.h>)

#import <Intents/Intents.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HapticFeedbackType) {
    HapticFeedbackTypeUnknown = 0,
    HapticFeedbackTypeVeryLight = 16,
    HapticFeedbackTypeLight = 1,
    HapticFeedbackTypeStrong = 2,
    HapticFeedbackTypeLightThenStrong = 3,
    HapticFeedbackTypeDoubleStrong = 4,
    HapticFeedbackTypeDoubleLight = 5,
    HapticFeedbackTypeSpringLight = 6,
    HapticFeedbackTypeSpringStrong = 7,
    HapticFeedbackTypeTripleStrong = 8,
    HapticFeedbackTypeTripleLight = 9,
    HapticFeedbackTypeLight2 = 10,
    HapticFeedbackTypeDefaultNormalClick = 12,
    HapticFeedbackTypeDefaultForceClick = 13,
    HapticFeedbackTypeSilentNormalClick = 14,
    HapticFeedbackTypeSilentForceClick = 15
} API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos);

API_AVAILABLE(ios(13.0), macos(11.0), watchos(6.0)) API_UNAVAILABLE(tvos)
@interface HapticFeedbackTypeResolutionResult : INEnumResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given HapticFeedbackType. The resolvedValue can be different than the original HapticFeedbackType. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedHapticFeedbackType:(HapticFeedbackType)resolvedValue NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithHapticFeedbackTypeToConfirm:(HapticFeedbackType)valueToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

+ (instancetype)successWithResolvedValue:(NSInteger)resolvedValue NS_UNAVAILABLE;
+ (instancetype)confirmationRequiredWithValueToConfirm:(NSInteger)valueToConfirm NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

#endif
