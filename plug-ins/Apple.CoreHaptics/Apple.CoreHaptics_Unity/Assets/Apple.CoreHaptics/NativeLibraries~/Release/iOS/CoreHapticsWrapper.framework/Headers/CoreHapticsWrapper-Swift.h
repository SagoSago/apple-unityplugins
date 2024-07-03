#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef COREHAPTICSWRAPPER_SWIFT_H
#define COREHAPTICSWRAPPER_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
#endif

#import <CoreHapticsWrapper/CoreHapticsWrapper.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="CoreHapticsWrapper",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_Destroy(void const * _Nonnull playerPtr);


SWIFT_EXTERN BOOL CoreHaptics_CHHapticAdvancedPatternPlayer_GetIsMuted(void const * _Nonnull playerPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CoreHaptics_CHHapticAdvancedPatternPlayer_GetLoopEnabled(void const * _Nonnull playerPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN double CoreHaptics_CHHapticAdvancedPatternPlayer_GetLoopEnd(void const * _Nonnull playerPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN float CoreHaptics_CHHapticAdvancedPatternPlayer_GetPlaybackRate(void const * _Nonnull playerPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_Pause(void const * _Nonnull playerPtr, float pauseTime, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_RegisterCompletionHandler(void const * _Nonnull playerPtr, void (* _Nonnull handler)(void const * _Nonnull), void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_Resume(void const * _Nonnull playerPtr, float resumeTime, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_Seek(void const * _Nonnull playerPtr, float seekTime, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_SendParameters(void const * _Nonnull playerPtr, CHWSendParametersRequest request, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_SetIsMuted(void const * _Nonnull playerPtr, BOOL isMuted);


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_SetLoopEnabled(void const * _Nonnull playerPtr, BOOL loopEnabled);


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_SetLoopEnd(void const * _Nonnull playerPtr, double loopEnd);


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_SetPlaybackRate(void const * _Nonnull playerPtr, float rate);


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_Start(void const * _Nonnull playerPtr, float startTime, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticAdvancedPatternPlayer_Stop(void const * _Nonnull playerPtr, float stopTime, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void * _Nullable CoreHaptics_CHHapticEngine_Create(void (* _Nonnull onError)(CHWError), void (* _Nonnull onStopped)(void const * _Nonnull, int32_t), void (* _Nonnull onReset)(void const * _Nonnull)) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_Destroy(void const * _Nonnull enginePtr);


SWIFT_EXTERN double CoreHaptics_CHHapticEngine_Get_CurrentTime(void const * _Nonnull enginePtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CoreHaptics_CHHapticEngine_Get_IsAutoShutdownEnabled(void const * _Nonnull enginePtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CoreHaptics_CHHapticEngine_Get_IsMutedForAudio(void const * _Nonnull enginePtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CoreHaptics_CHHapticEngine_Get_IsMutedForHaptics(void const * _Nonnull enginePtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CoreHaptics_CHHapticEngine_Get_PlaysHapticsOnly(void const * _Nonnull enginePtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CoreHaptics_CHHapticEngine_HardwareSupportsHaptics(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CoreHaptics_CHHapticEngine_MakeAdvancedPlayer(void const * _Nonnull enginePtr, int8_t * _Nonnull ahapJson, void (* _Nonnull onFinishedPlaying)(void const * _Nonnull), void (* _Nonnull onError)(CHWError)) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CoreHaptics_CHHapticEngine_MakePlayer(void const * _Nonnull enginePtr, int8_t * _Nonnull ahapJson, void (* _Nonnull onError)(CHWError)) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_NotifyWhenPlayersFinished(void const * _Nonnull enginePtr, BOOL leaveEngineRunning, int32_t (* _Nonnull onAllPlayersFinished)(void const * _Nonnull), void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_PlayPatternFromJson(void const * _Nonnull enginePtr, int8_t * _Nonnull ahapJson, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_PlayPatternFromUrl(void const * _Nonnull enginePtr, int8_t * _Nonnull ahapUrl, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_Set_IsAutoShutdownEnabled(void const * _Nonnull enginePtr, BOOL isAutoShutdownEnabled);


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_Set_IsMutedForAudio(void const * _Nonnull enginePtr, BOOL isMutedForAudio);


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_Set_IsMutedForHaptics(void const * _Nonnull enginePtr, BOOL isMutedForHaptics);


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_Set_PlaysHapticsOnly(void const * _Nonnull enginePtr, BOOL playsHapticsOnly);


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_Start(void const * _Nonnull enginePtr, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticEngine_Stop(void const * _Nonnull enginePtr, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticPatternPlayer_Destroy(void const * _Nonnull playerPtr);


SWIFT_EXTERN BOOL CoreHaptics_CHHapticPatternPlayer_GetIsMuted(void const * _Nonnull playerPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CoreHaptics_CHHapticPatternPlayer_ScheduleParameterCurve(void const * _Nonnull playerPtr, CHWHapticParameterCurve curve, float atTime, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticPatternPlayer_SendParameters(void const * _Nonnull playerPtr, CHWSendParametersRequest request, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticPatternPlayer_SetIsMuted(void const * _Nonnull playerPtr, BOOL isMuted);


SWIFT_EXTERN void CoreHaptics_CHHapticPatternPlayer_Start(void const * _Nonnull playerPtr, float startTime, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN void CoreHaptics_CHHapticPatternPlayer_Stop(void const * _Nonnull playerPtr, float stopTime, void (* _Nonnull onError)(void const * _Nonnull, CHWError));


SWIFT_EXTERN float CoreHaptics_Capabilities_DefaultValueForDynamicParameter(NSInteger parameterId) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN float CoreHaptics_Capabilities_DefaultValueForEventParameter(NSInteger parameterId, NSInteger eventType) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN float CoreHaptics_Capabilities_MaxValueForDynamicParameter(NSInteger parameterId) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN float CoreHaptics_Capabilities_MaxValueForEventParameter(NSInteger parameterId, NSInteger eventType) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN float CoreHaptics_Capabilities_MinValueForDynamicParameter(NSInteger parameterId) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN float CoreHaptics_Capabilities_MinValueForEventParameter(NSInteger parameterId, NSInteger eventType) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable UIFeedbackGenerator_CreateImpactGenerator(NSInteger feedbackStyle) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable UIFeedbackGenerator_CreateNotificationGenerator(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable UIFeedbackGenerator_CreateSelectionGenerator(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void UIFeedbackGenerator_DestroyImpactGenerator(void const * _Nonnull generatorPtr);


SWIFT_EXTERN void UIFeedbackGenerator_DestroyNotificationGenerator(void const * _Nonnull generatorPtr);


SWIFT_EXTERN void UIFeedbackGenerator_DestroySelectionGenerator(void const * _Nonnull generatorPtr);


SWIFT_EXTERN void UIFeedbackGenerator_Prepare(void const * _Nonnull generatorPtr);


SWIFT_EXTERN void UIImpactFeedbackGenerator_Trigger(void const * _Nonnull generatorPtr, float intensity);


SWIFT_EXTERN void UINotificationFeedbackGenerator_Trigger(void const * _Nonnull generatorPtr, NSInteger feedbackType);


SWIFT_EXTERN void UISelectionFeedbackGenerator_Trigger(void const * _Nonnull generatorPtr);

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
