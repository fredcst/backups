//
// ScriptingFunction.h
//
// This file was automatically generated and should not be edited.
//

#if __has_include(<Intents/Intents.h>)

#import <Intents/Intents.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ScriptingFunction) {
    ScriptingFunctionUnknown = 0,
    ScriptingFunctionIs_app_running = 1,
    ScriptingFunctionGet_dock_badge_for = 2,
    ScriptingFunctionGet_active_touch_bar_group = 3,
    ScriptingFunctionIs_true_tone_enabled = 4,
    ScriptingFunctionGet_location = 5,
    ScriptingFunctionSet_persistent_string_variable = 6,
    ScriptingFunctionSet_string_variable = 7,
    ScriptingFunctionSet_persistent_number_variable = 8,
    ScriptingFunctionSet_number_variable = 9,
    ScriptingFunctionGet_number_variable = 10,
    ScriptingFunctionGet_string_variable = 11,
    ScriptingFunctionDelete_trigger = 12,
    ScriptingFunctionExecute_assigned_actions_for_trigger = 13,
    ScriptingFunctionTrigger_named = 14,
    ScriptingFunctionTrigger_named_async_without_response = 15,
    ScriptingFunctionGet_trigger = 16,
    ScriptingFunctionAdd_new_trigger = 17,
    ScriptingFunctionTrigger_action = 18,
    ScriptingFunctionUpdate_trigger = 19,
    ScriptingFunctionRefresh_widget = 20,
    ScriptingFunctionUpdate_touch_bar_widget = 21,
    ScriptingFunctionUpdate_menubar_item = 22
} API_AVAILABLE(ios(12.0), macos(11.0), watchos(5.0)) API_UNAVAILABLE(tvos);

API_AVAILABLE(ios(13.0), macos(11.0), watchos(6.0)) API_UNAVAILABLE(tvos)
@interface ScriptingFunctionResolutionResult : INEnumResolutionResult

// This resolution result is for when the app extension wants to tell Siri to proceed, with a given ScriptingFunction. The resolvedValue can be different than the original ScriptingFunction. This allows app extensions to apply business logic constraints.
// Use +notRequired to continue with a 'nil' value.
+ (instancetype)successWithResolvedScriptingFunction:(ScriptingFunction)resolvedValue NS_SWIFT_NAME(success(with:));

// This resolution result is to ask Siri to confirm if this is the value with which the user wants to continue.
+ (instancetype)confirmationRequiredWithScriptingFunctionToConfirm:(ScriptingFunction)valueToConfirm NS_SWIFT_NAME(confirmationRequired(with:));

+ (instancetype)successWithResolvedValue:(NSInteger)resolvedValue NS_UNAVAILABLE;
+ (instancetype)confirmationRequiredWithValueToConfirm:(NSInteger)valueToConfirm NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END

#endif
