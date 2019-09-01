// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordRpc/Public/DiscordRpcBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordRpcBlueprint() {}
// Cross Module References
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordRpc();
	DISCORDRPC_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserData();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature();
	DISCORDRPC_API UEnum* Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes();
	DISCORDRPC_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordRichPresence();
	DISCORDRPC_API UClass* Z_Construct_UClass_UDiscordRpc_NoRegister();
	DISCORDRPC_API UClass* Z_Construct_UClass_UDiscordRpc();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_ClearPresence();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_Initialize();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_Respond();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_RunCallbacks();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_Shutdown();
	DISCORDRPC_API UFunction* Z_Construct_UFunction_UDiscordRpc_UpdatePresence();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordJoinRequest_Parms
		{
			FDiscordUserData joinRequest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_joinRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest = { "joinRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordJoinRequest_Parms, joinRequest), Z_Construct_UScriptStruct_FDiscordUserData, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::NewProp_joinRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordJoinRequest__DelegateSignature", sizeof(_Script_DiscordRpc_eventDiscordJoinRequest_Parms), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordSpectate_Parms
		{
			FString spectateSecret;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spectateSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_spectateSecret;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret = { "spectateSecret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordSpectate_Parms, spectateSecret), METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::NewProp_spectateSecret,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordSpectate__DelegateSignature", sizeof(_Script_DiscordRpc_eventDiscordSpectate_Parms), Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordJoin_Parms
		{
			FString joinSecret;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_joinSecret;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret = { "joinSecret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordJoin_Parms, joinSecret), METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::NewProp_joinSecret,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordJoin__DelegateSignature", sizeof(_Script_DiscordRpc_eventDiscordJoin_Parms), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordErrored_Parms
		{
			int32 errorCode;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_errorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordErrored_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordErrored_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::NewProp_errorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordErrored__DelegateSignature", sizeof(_Script_DiscordRpc_eventDiscordErrored_Parms), Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordDisconnected_Parms
		{
			int32 errorCode;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_errorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordDisconnected_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordDisconnected_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::NewProp_errorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordDisconnected__DelegateSignature", sizeof(_Script_DiscordRpc_eventDiscordDisconnected_Parms), Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics
	{
		struct _Script_DiscordRpc_eventDiscordConnected_Parms
		{
			FDiscordUserData joinRequest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_joinRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest = { "joinRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordRpc_eventDiscordConnected_Parms, joinRequest), Z_Construct_UScriptStruct_FDiscordUserData, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::NewProp_joinRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc, nullptr, "DiscordConnected__DelegateSignature", sizeof(_Script_DiscordRpc_eventDiscordConnected_Parms), Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EDiscordJoinResponseCodes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes, Z_Construct_UPackage__Script_DiscordRpc(), TEXT("EDiscordJoinResponseCodes"));
		}
		return Singleton;
	}
	template<> DISCORDRPC_API UEnum* StaticEnum<EDiscordJoinResponseCodes>()
	{
		return EDiscordJoinResponseCodes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordJoinResponseCodes(EDiscordJoinResponseCodes_StaticEnum, TEXT("/Script/DiscordRpc"), TEXT("EDiscordJoinResponseCodes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Hash() { return 2257211805U; }
	UEnum* Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRpc();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordJoinResponseCodes"), 0, Get_Z_Construct_UEnum_DiscordRpc_EDiscordJoinResponseCodes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordJoinResponseCodes::DISCORD_REPLY_NO", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_NO },
				{ "EDiscordJoinResponseCodes::DISCORD_REPLY_YES", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_YES },
				{ "EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE", (int64)EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DISCORD_REPLY_IGNORE.DisplayName", "Ignore" },
				{ "DISCORD_REPLY_NO.DisplayName", "No" },
				{ "DISCORD_REPLY_YES.DisplayName", "Yes" },
				{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
				{ "ToolTip", "Valid response codes for Respond function" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordRpc,
				nullptr,
				"EDiscordJoinResponseCodes",
				"EDiscordJoinResponseCodes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDiscordRichPresence::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDRPC_API uint32 Get_Z_Construct_UScriptStruct_FDiscordRichPresence_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordRichPresence, Z_Construct_UPackage__Script_DiscordRpc(), TEXT("DiscordRichPresence"), sizeof(FDiscordRichPresence), Get_Z_Construct_UScriptStruct_FDiscordRichPresence_Hash());
	}
	return Singleton;
}
template<> DISCORDRPC_API UScriptStruct* StaticStruct<FDiscordRichPresence>()
{
	return FDiscordRichPresence::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordRichPresence(FDiscordRichPresence::StaticStruct, TEXT("/Script/DiscordRpc"), TEXT("DiscordRichPresence"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordRichPresence
{
	FScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordRichPresence()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DiscordRichPresence")),new UScriptStruct::TCppStructOps<FDiscordRichPresence>);
	}
} ScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordRichPresence;
	struct Z_Construct_UScriptStruct_FDiscordRichPresence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static void NewProp_instance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spectateSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_spectateSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_joinSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_joinSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partyMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_partyMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_partySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_partyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smallImageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_smallImageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smallImageKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_smallImageKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_largeImageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_largeImageText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_largeImageKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_largeImageKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_endTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_startTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_details_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
		{ "ToolTip", "Rich presence data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordRichPresence>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_SetBit(void* Obj)
	{
		((FDiscordRichPresence*)Obj)->instance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordRichPresence), &Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret = { "spectateSecret", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, spectateSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret = { "joinSecret", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, joinSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret = { "matchSecret", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, matchSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax = { "partyMax", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, partyMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize = { "partySize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, partySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId = { "partyId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, partyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText = { "smallImageText", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, smallImageText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey = { "smallImageKey", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, smallImageKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText = { "largeImageText", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, largeImageText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey = { "largeImageKey", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, largeImageKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp = { "endTimestamp", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, endTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
		{ "ToolTip", "todo, timestamps are 64bit, does that even matter?" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp = { "startTimestamp", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, startTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, details), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state_MetaData[] = {
		{ "Category", "DiscordRichPresence" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRichPresence, state), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_spectateSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_joinSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_matchSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_partyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_smallImageKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_largeImageKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_endTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_startTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::NewProp_state,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
		nullptr,
		&NewStructOps,
		"DiscordRichPresence",
		sizeof(FDiscordRichPresence),
		alignof(FDiscordRichPresence),
		Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordRichPresence()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordRichPresence_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRpc();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordRichPresence"), sizeof(FDiscordRichPresence), Get_Z_Construct_UScriptStruct_FDiscordRichPresence_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordRichPresence_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordRichPresence_Hash() { return 1098524783U; }
class UScriptStruct* FDiscordUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDRPC_API uint32 Get_Z_Construct_UScriptStruct_FDiscordUserData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordUserData, Z_Construct_UPackage__Script_DiscordRpc(), TEXT("DiscordUserData"), sizeof(FDiscordUserData), Get_Z_Construct_UScriptStruct_FDiscordUserData_Hash());
	}
	return Singleton;
}
template<> DISCORDRPC_API UScriptStruct* StaticStruct<FDiscordUserData>()
{
	return FDiscordUserData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordUserData(FDiscordUserData::StaticStruct, TEXT("/Script/DiscordRpc"), TEXT("DiscordUserData"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordUserData
{
	FScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordUserData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DiscordUserData")),new UScriptStruct::TCppStructOps<FDiscordUserData>);
	}
} ScriptStruct_DiscordRpc_StaticRegisterNativesFDiscordUserData;
	struct Z_Construct_UScriptStruct_FDiscordUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avatar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_avatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_discriminator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_discriminator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
		{ "ToolTip", "Ask to join callback data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordUserData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar_MetaData[] = {
		{ "Category", "DiscordUserData" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar = { "avatar", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserData, avatar), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator_MetaData[] = {
		{ "Category", "DiscordUserData" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator = { "discriminator", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserData, discriminator), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username_MetaData[] = {
		{ "Category", "DiscordUserData" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username = { "username", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserData, username), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId_MetaData[] = {
		{ "Category", "DiscordUserData" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUserData, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_avatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_discriminator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUserData_Statics::NewProp_userId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
		nullptr,
		&NewStructOps,
		"DiscordUserData",
		sizeof(FDiscordUserData),
		alignof(FDiscordUserData),
		Z_Construct_UScriptStruct_FDiscordUserData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUserData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordUserData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRpc();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordUserData"), sizeof(FDiscordUserData), Get_Z_Construct_UScriptStruct_FDiscordUserData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordUserData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordUserData_Hash() { return 2050504250U; }
	void UDiscordRpc::StaticRegisterNativesUDiscordRpc()
	{
		UClass* Class = UDiscordRpc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPresence", &UDiscordRpc::execClearPresence },
			{ "Initialize", &UDiscordRpc::execInitialize },
			{ "Respond", &UDiscordRpc::execRespond },
			{ "RunCallbacks", &UDiscordRpc::execRunCallbacks },
			{ "Shutdown", &UDiscordRpc::execShutdown },
			{ "UpdatePresence", &UDiscordRpc::execUpdatePresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Clear presence" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "ClearPresence", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_ClearPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRpc_ClearPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_Initialize_Statics
	{
		struct DiscordRpc_eventInitialize_Parms
		{
			FString applicationId;
			bool autoRegister;
			FString optionalSteamId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_optionalSteamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_optionalSteamId;
		static void NewProp_autoRegister_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoRegister;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_applicationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_applicationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId = { "optionalSteamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRpc_eventInitialize_Parms, optionalSteamId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId_MetaData)) };
	void Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_autoRegister_SetBit(void* Obj)
	{
		((DiscordRpc_eventInitialize_Parms*)Obj)->autoRegister = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_autoRegister = { "autoRegister", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordRpc_eventInitialize_Parms), &Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_autoRegister_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId = { "applicationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRpc_eventInitialize_Parms, applicationId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_optionalSteamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_autoRegister,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::NewProp_applicationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Initialize connection" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "Initialize", sizeof(DiscordRpc_eventInitialize_Parms), Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRpc_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_Respond_Statics
	{
		struct DiscordRpc_eventRespond_Parms
		{
			FString userId;
			int32 reply;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_reply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_reply = { "reply", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRpc_eventRespond_Parms, reply), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRpc_eventRespond_Parms, userId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRpc_Respond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_reply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRpc_Respond_Statics::NewProp_userId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Respond_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Respond to join request" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_Respond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "Respond", sizeof(DiscordRpc_eventRespond_Parms), Z_Construct_UFunction_UDiscordRpc_Respond_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Respond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_Respond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRpc_Respond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Check for callbacks" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "RunCallbacks", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_RunCallbacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRpc_RunCallbacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Shut down connection" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "Shutdown", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRpc_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Send presence" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRpc, nullptr, "UpdatePresence", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRpc_UpdatePresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRpc_UpdatePresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordRpc_NoRegister()
	{
		return UDiscordRpc::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordRpc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RichPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJoinRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSpectate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpectate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnErrored_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnErrored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsConnected_MetaData[];
#endif
		static void NewProp_IsConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsConnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordRpc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRpc,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordRpc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordRpc_ClearPresence, "ClearPresence" }, // 3351081857
		{ &Z_Construct_UFunction_UDiscordRpc_Initialize, "Initialize" }, // 1726936955
		{ &Z_Construct_UFunction_UDiscordRpc_Respond, "Respond" }, // 1913536045
		{ &Z_Construct_UFunction_UDiscordRpc_RunCallbacks, "RunCallbacks" }, // 3571491157
		{ &Z_Construct_UFunction_UDiscordRpc_Shutdown, "Shutdown" }, // 1756841394
		{ &Z_Construct_UFunction_UDiscordRpc_UpdatePresence, "UpdatePresence" }, // 571179202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Discord" },
		{ "DisplayName", "Discord RPC" },
		{ "IncludePath", "DiscordRpcBlueprint.h" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Rich presence info" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence = { "RichPresence", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRpc, RichPresence), Z_Construct_UScriptStruct_FDiscordRichPresence, METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "When Discord another user sends a join request" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest = { "OnJoinRequest", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRpc, OnJoinRequest), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "When Discord user presses spectate" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate = { "OnSpectate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRpc, OnSpectate), Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "When Discord user presses join" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin = { "OnJoin", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRpc, OnJoin), Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "On error message" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored = { "OnErrored", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRpc, OnErrored), Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "On disconnection" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRpc, OnDisconnected), Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "On connection" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRpc, OnConnected), Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_MetaData[] = {
		{ "Category", "Discord" },
		{ "DisplayName", "Is Discord connected" },
		{ "Keywords", "Discord rpc" },
		{ "ModuleRelativePath", "Public/DiscordRpcBlueprint.h" },
	};
#endif
	void Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_SetBit(void* Obj)
	{
		((UDiscordRpc*)Obj)->IsConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected = { "IsConnected", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDiscordRpc), &Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordRpc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_RichPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoinRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnSpectate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnErrored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_OnConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRpc_Statics::NewProp_IsConnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordRpc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordRpc>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordRpc_Statics::ClassParams = {
		&UDiscordRpc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordRpc_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordRpc_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDiscordRpc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordRpc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordRpc_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordRpc, 1188936836);
	template<> DISCORDRPC_API UClass* StaticClass<UDiscordRpc>()
	{
		return UDiscordRpc::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordRpc(Z_Construct_UClass_UDiscordRpc, &UDiscordRpc::StaticClass, TEXT("/Script/DiscordRpc"), TEXT("UDiscordRpc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordRpc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
