//
// RelativeMouseMovements.h
//
// This file was automatically generated and should not be edited.
//

#if __has_include(<Intents/Intents.h>)

#import <Intents/Intents.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, RelativeMouseMovements) {
    RelativeMouseMovementsUnknown = 0,
    RelativeMouseMovementsGlobal = 11111,
    RelativeMouseMovementsTop_right_main = 1001,
    RelativeMouseMovementsBottom_left_main = 1002,
    RelativeMouseMovementsBottom_right_main = 1003,
    RelativeMouseMovementsTop_left_mouse = 1004,
    RelativeMouseMovementsTop_right_mouse = 1005,
    RelativeMouseMovementsBottom_left_mouse = 1006,
    RelativeMouseMovementsBottom_right_mouse = 1007,
    RelativeMouseMovementsTop_left_active_window = 1,
    RelativeMouseMovementsTop_right_active_window = 2,
    RelativeMouseMovementsBottom_left_active_window = 3,
    RelativeMouseMovementsBottom_right_active_window = 4,
    RelativeMouseMovementsCurrent_mouse = 6,
    RelativeMouseMovementsTop_left_focused = 11,
    RelativeMouseMovementsTop_right_focused = 12,
    RelativeMouseMovementsBottom_left_focused = 13,
    RelativeMouseMovementsBottom_right_focused = 14,
    RelativeMouseMovementsCenter_focused = 15,
    RelativeMouseMovementsDefault_button = 17,
    RelativeMouseMovementsCancel_button = 18,
    RelativeMouseMovementsCenter_active_window = 5
} API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos);

API_AVAILABLE(ios(13.0), macos(11.0), watchos(6.0)) API_UNAVAILABLE(tvos)
@interface RelativeMouseMovementsResolutionResult : INEnumResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given RelativeMouseMovements. The resolvedValue can be different than the original RelativeMouseMovements. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedRelativeMouseMovements:(RelativeMouseMovements)resolvedValue NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithRelativeMouseMovementsToConfirm:(RelativeMouseMovements)valueToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

+ (instancetype)successWithResolvedValue:(NSInteger)resolvedValue NS_UNAVAILABLE;
+ (instancetype)confirmationRequiredWithValueToConfirm:(NSInteger)valueToConfirm NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

#endif
