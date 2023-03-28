//
// RelativeWebViewPositioning.h
//
// This file was automatically generated and should not be edited.
//

#if __has_include(<Intents/Intents.h>)

#import <Intents/Intents.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, RelativeWebViewPositioning) {
    RelativeWebViewPositioningUnknown = 0,
    RelativeWebViewPositioningBottom_left_main = 1,
    RelativeWebViewPositioningMouse_pos = 2,
    RelativeWebViewPositioningCenter_mouse_screen = 3,
    RelativeWebViewPositioningTop_left_webview_top_left_mouse_screen = 4,
    RelativeWebViewPositioningTop_right_webview_top_right_mouse_screen = 5,
    RelativeWebViewPositioningBottom_left_webview_bottom_left_mouse_screen = 6,
    RelativeWebViewPositioningBottom_right_webview_bottom_right_mouse_screen = 7
} API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos);

API_AVAILABLE(ios(13.0), macos(11.0), watchos(6.0)) API_UNAVAILABLE(tvos)
@interface RelativeWebViewPositioningResolutionResult : INEnumResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given RelativeWebViewPositioning. The resolvedValue can be different than the original RelativeWebViewPositioning. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedRelativeWebViewPositioning:(RelativeWebViewPositioning)resolvedValue NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithRelativeWebViewPositioningToConfirm:(RelativeWebViewPositioning)valueToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

+ (instancetype)successWithResolvedValue:(NSInteger)resolvedValue NS_UNAVAILABLE;
+ (instancetype)confirmationRequiredWithValueToConfirm:(NSInteger)valueToConfirm NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

#endif
