// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DateTimeMath/Classes/DateTimeFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimeFunctionLibrary() {}
// Cross Module References
	DATETIMEMATH_API UClass* Z_Construct_UClass_UDateTimeFunctionLibrary_NoRegister();
	DATETIMEMATH_API UClass* Z_Construct_UClass_UDateTimeFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DateTimeMath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execLessThanNow)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDateTimeFunctionLibrary::LessThanNow(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execLessThanOrEqualToNow)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDateTimeFunctionLibrary::LessThanOrEqualToNow(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execGreaterThanNow)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDateTimeFunctionLibrary::GreaterThanNow(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execGreaterThanOrEqualToNow)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDateTimeFunctionLibrary::GreaterThanOrEqualToNow(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execLessThan)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_GET_STRUCT(FDateTime,Z_Param_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDateTimeFunctionLibrary::LessThan(Z_Param_A,Z_Param_B,Z_Param_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execLessThanOrEqualTo)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_GET_STRUCT(FDateTime,Z_Param_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDateTimeFunctionLibrary::LessThanOrEqualTo(Z_Param_A,Z_Param_B,Z_Param_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execGreaterThan)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_GET_STRUCT(FDateTime,Z_Param_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDateTimeFunctionLibrary::GreaterThan(Z_Param_A,Z_Param_B,Z_Param_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execGreaterThanOrEqualTo)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_GET_STRUCT(FDateTime,Z_Param_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDateTimeFunctionLibrary::GreaterThanOrEqualTo(Z_Param_A,Z_Param_B,Z_Param_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execSubtractDateTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FDateTime,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=UDateTimeFunctionLibrary::SubtractDateTime(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execSubtractTimespan)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UDateTimeFunctionLibrary::SubtractTimespan(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDateTimeFunctionLibrary::execAddTimespan)
	{
		P_GET_STRUCT(FDateTime,Z_Param_A);
		P_GET_STRUCT(FTimespan,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UDateTimeFunctionLibrary::AddTimespan(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	void UDateTimeFunctionLibrary::StaticRegisterNativesUDateTimeFunctionLibrary()
	{
		UClass* Class = UDateTimeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTimespan", &UDateTimeFunctionLibrary::execAddTimespan },
			{ "GreaterThan", &UDateTimeFunctionLibrary::execGreaterThan },
			{ "GreaterThanNow", &UDateTimeFunctionLibrary::execGreaterThanNow },
			{ "GreaterThanOrEqualTo", &UDateTimeFunctionLibrary::execGreaterThanOrEqualTo },
			{ "GreaterThanOrEqualToNow", &UDateTimeFunctionLibrary::execGreaterThanOrEqualToNow },
			{ "LessThan", &UDateTimeFunctionLibrary::execLessThan },
			{ "LessThanNow", &UDateTimeFunctionLibrary::execLessThanNow },
			{ "LessThanOrEqualTo", &UDateTimeFunctionLibrary::execLessThanOrEqualTo },
			{ "LessThanOrEqualToNow", &UDateTimeFunctionLibrary::execLessThanOrEqualToNow },
			{ "SubtractDateTime", &UDateTimeFunctionLibrary::execSubtractDateTime },
			{ "SubtractTimespan", &UDateTimeFunctionLibrary::execSubtractTimespan },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics
	{
		struct DateTimeFunctionLibrary_eventAddTimespan_Parms
		{
			FDateTime A;
			FTimespan B;
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventAddTimespan_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventAddTimespan_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventAddTimespan_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Date time + Timespan\n\x09*/" },
		{ "CompactNodeTitle", "+" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Date time + Timespan" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "AddTimespan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::DateTimeFunctionLibrary_eventAddTimespan_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics
	{
		struct DateTimeFunctionLibrary_eventGreaterThan_Parms
		{
			FDateTime A;
			FTimespan B;
			FDateTime C;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThan_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThan_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThan_Parms, C), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DateTimeFunctionLibrary_eventGreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DateTimeFunctionLibrary_eventGreaterThan_Parms), &Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Check if date time + timespan >= Now\n\x09*/" },
		{ "CompactNodeTitle", ">" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Check if date time + timespan >= Now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "GreaterThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::DateTimeFunctionLibrary_eventGreaterThan_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics
	{
		struct DateTimeFunctionLibrary_eventGreaterThanNow_Parms
		{
			FDateTime A;
			FTimespan B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThanNow_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThanNow_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DateTimeFunctionLibrary_eventGreaterThanNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DateTimeFunctionLibrary_eventGreaterThanNow_Parms), &Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Check if date time + timespan >= Now\n\x09*/" },
		{ "CompactNodeTitle", ">Now" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Check if date time + timespan >= Now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "GreaterThanNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::DateTimeFunctionLibrary_eventGreaterThanNow_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics
	{
		struct DateTimeFunctionLibrary_eventGreaterThanOrEqualTo_Parms
		{
			FDateTime A;
			FTimespan B;
			FDateTime C;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThanOrEqualTo_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThanOrEqualTo_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThanOrEqualTo_Parms, C), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DateTimeFunctionLibrary_eventGreaterThanOrEqualTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DateTimeFunctionLibrary_eventGreaterThanOrEqualTo_Parms), &Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Check if date time + timespan >= Now\n\x09*/" },
		{ "CompactNodeTitle", ">=" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Check if date time + timespan >= Now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "GreaterThanOrEqualTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::DateTimeFunctionLibrary_eventGreaterThanOrEqualTo_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics
	{
		struct DateTimeFunctionLibrary_eventGreaterThanOrEqualToNow_Parms
		{
			FDateTime A;
			FTimespan B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThanOrEqualToNow_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventGreaterThanOrEqualToNow_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DateTimeFunctionLibrary_eventGreaterThanOrEqualToNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DateTimeFunctionLibrary_eventGreaterThanOrEqualToNow_Parms), &Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Check if date time + timespan >= Now\n\x09*/" },
		{ "CompactNodeTitle", ">=Now" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Check if date time + timespan >= Now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "GreaterThanOrEqualToNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::DateTimeFunctionLibrary_eventGreaterThanOrEqualToNow_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics
	{
		struct DateTimeFunctionLibrary_eventLessThan_Parms
		{
			FDateTime A;
			FTimespan B;
			FDateTime C;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThan_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThan_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThan_Parms, C), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DateTimeFunctionLibrary_eventLessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DateTimeFunctionLibrary_eventLessThan_Parms), &Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Check if date time + timespan >= Now\n\x09*/" },
		{ "CompactNodeTitle", "<" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Check if date time + timespan >= Now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "LessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::DateTimeFunctionLibrary_eventLessThan_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics
	{
		struct DateTimeFunctionLibrary_eventLessThanNow_Parms
		{
			FDateTime A;
			FTimespan B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThanNow_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThanNow_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DateTimeFunctionLibrary_eventLessThanNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DateTimeFunctionLibrary_eventLessThanNow_Parms), &Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Check if date time + timespan >= Now\n\x09*/" },
		{ "CompactNodeTitle", "<Now" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Check if date time + timespan >= Now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "LessThanNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::DateTimeFunctionLibrary_eventLessThanNow_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics
	{
		struct DateTimeFunctionLibrary_eventLessThanOrEqualTo_Parms
		{
			FDateTime A;
			FTimespan B;
			FDateTime C;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThanOrEqualTo_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThanOrEqualTo_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThanOrEqualTo_Parms, C), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DateTimeFunctionLibrary_eventLessThanOrEqualTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DateTimeFunctionLibrary_eventLessThanOrEqualTo_Parms), &Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Check if date time + timespan >= Now\n\x09*/" },
		{ "CompactNodeTitle", "<=" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Check if date time + timespan >= Now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "LessThanOrEqualTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::DateTimeFunctionLibrary_eventLessThanOrEqualTo_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics
	{
		struct DateTimeFunctionLibrary_eventLessThanOrEqualToNow_Parms
		{
			FDateTime A;
			FTimespan B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThanOrEqualToNow_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventLessThanOrEqualToNow_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DateTimeFunctionLibrary_eventLessThanOrEqualToNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DateTimeFunctionLibrary_eventLessThanOrEqualToNow_Parms), &Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Check if date time + timespan >= Now\n\x09*/" },
		{ "CompactNodeTitle", "<=Now" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Check if date time + timespan >= Now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "LessThanOrEqualToNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::DateTimeFunctionLibrary_eventLessThanOrEqualToNow_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics
	{
		struct DateTimeFunctionLibrary_eventSubtractDateTime_Parms
		{
			FDateTime A;
			FDateTime B;
			FTimespan ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventSubtractDateTime_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventSubtractDateTime_Parms, B), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventSubtractDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Date time - Datetime\n\x09*/" },
		{ "CompactNodeTitle", "-" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Date time - Datetime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "SubtractDateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::DateTimeFunctionLibrary_eventSubtractDateTime_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics
	{
		struct DateTimeFunctionLibrary_eventSubtractTimespan_Parms
		{
			FDateTime A;
			FTimespan B;
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventSubtractTimespan_Parms, A), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventSubtractTimespan_Parms, B), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DateTimeFunctionLibrary_eventSubtractTimespan_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::Function_MetaDataParams[] = {
		{ "Category", "DateTimeMath" },
		{ "Comment", "/**\n\x09 * Date time - Timespan\n\x09*/" },
		{ "CompactNodeTitle", "+" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Date time - Timespan" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDateTimeFunctionLibrary, nullptr, "SubtractTimespan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::DateTimeFunctionLibrary_eventSubtractTimespan_Parms), Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDateTimeFunctionLibrary);
	UClass* Z_Construct_UClass_UDateTimeFunctionLibrary_NoRegister()
	{
		return UDateTimeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDateTimeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDateTimeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DateTimeMath,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDateTimeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_AddTimespan, "AddTimespan" }, // 1094935402
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThan, "GreaterThan" }, // 187015288
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanNow, "GreaterThanNow" }, // 1550995571
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualTo, "GreaterThanOrEqualTo" }, // 724853939
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_GreaterThanOrEqualToNow, "GreaterThanOrEqualToNow" }, // 159362160
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThan, "LessThan" }, // 2040638812
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanNow, "LessThanNow" }, // 161415396
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualTo, "LessThanOrEqualTo" }, // 3899688775
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_LessThanOrEqualToNow, "LessThanOrEqualToNow" }, // 3459130063
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractDateTime, "SubtractDateTime" }, // 3660340782
		{ &Z_Construct_UFunction_UDateTimeFunctionLibrary_SubtractTimespan, "SubtractTimespan" }, // 3664998169
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDateTimeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Functions for date time math with timespans.\n */" },
		{ "IncludePath", "DateTimeFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DateTimeFunctionLibrary.h" },
		{ "ToolTip", "Functions for date time math with timespans." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDateTimeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDateTimeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDateTimeFunctionLibrary_Statics::ClassParams = {
		&UDateTimeFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDateTimeFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDateTimeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDateTimeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UDateTimeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDateTimeFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDateTimeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDateTimeFunctionLibrary.OuterSingleton;
	}
	template<> DATETIMEMATH_API UClass* StaticClass<UDateTimeFunctionLibrary>()
	{
		return UDateTimeFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDateTimeFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_VW_AstorasDarkness_Plugins_DateTimeMath_Source_DateTimeMath_Classes_DateTimeFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VW_AstorasDarkness_Plugins_DateTimeMath_Source_DateTimeMath_Classes_DateTimeFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDateTimeFunctionLibrary, UDateTimeFunctionLibrary::StaticClass, TEXT("UDateTimeFunctionLibrary"), &Z_Registration_Info_UClass_UDateTimeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDateTimeFunctionLibrary), 301173736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VW_AstorasDarkness_Plugins_DateTimeMath_Source_DateTimeMath_Classes_DateTimeFunctionLibrary_h_473349174(TEXT("/Script/DateTimeMath"),
		Z_CompiledInDeferFile_FID_VW_AstorasDarkness_Plugins_DateTimeMath_Source_DateTimeMath_Classes_DateTimeFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VW_AstorasDarkness_Plugins_DateTimeMath_Source_DateTimeMath_Classes_DateTimeFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
