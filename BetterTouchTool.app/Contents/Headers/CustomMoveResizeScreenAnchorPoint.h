//
// CustomMoveResizeScreenAnchorPoint.h
//
// This file was automatically generated and should not be edited.
//

#if __has_include(<Intents/Intents.h>)

#import <Intents/Intents.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CustomMoveResizeScreenAnchorPoint) {
    CustomMoveResizeScreenAnchorPointUnknown = 0,
    CustomMoveResizeScreenAnchorPointCenterOfScreen = 1,
    CustomMoveResizeScreenAnchorPointTopLeftCornerOfScreen = 2,
    CustomMoveResizeScreenAnchorPointTopRightCornerOfScreen = 3,
    CustomMoveResizeScreenAnchorPointBottomLeftCornerOfScreen = 4,
    CustomMoveResizeScreenAnchorPointBottomRightCornerOfScreen = 5,
    CustomMoveResizeScreenAnchorPointOriginalAnchorPointOfWindowItself = 6,
    CustomMoveResizeScreenAnchorPointMouseCursorPosition = 7
} API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos);

API_AVAILABLE(ios(13.0), macos(11.0), watchos(6.0)) API_UNAVAILABLE(tvos)
@interface CustomMoveResizeScreenAnchorPointResolutionResult : INEnumResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given CustomMoveResizeScreenAnchorPoint. The resolvedValue can be different than the original CustomMoveResizeScreenAnchorPoint. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedCustomMoveResizeScreenAnchorPoint:(CustomMoveResizeScreenAnchorPoint)resolvedValue NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithCustomMoveResizeScreenAnchorPointToConfirm:(CustomMoveResizeScreenAnchorPoint)valueToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

+ (instancetype)successWithResolvedValue:(NSInteger)resolvedValue NS_UNAVAILABLE;
+ (instancetype)confirmationRequiredWithValueToConfirm:(NSInteger)valueToConfirm NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

#endif
