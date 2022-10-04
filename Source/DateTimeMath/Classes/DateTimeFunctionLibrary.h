// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DateTimeFunctionLibrary.generated.h"

/**
 * Functions for date time math with timespans.
 */
UCLASS(BlueprintType,Blueprintable)
class DATETIMEMATH_API UDateTimeFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	/**
	 * Date time + Timespan
	*/
	UFUNCTION(BlueprintPure,Category = "DateTimeMath", Meta = (CompactNodeTitle = "+"))
		static FDateTime AddTimespan(FDateTime A, FTimespan B)
	{
		return A + B.GetTicks();
	}

	/**
	 * Date time - Timespan
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = "+"))
		static FDateTime SubtractTimespan(FDateTime A, FTimespan B)
	{
		return A - B;
	}

	/**
	 * Date time - Datetime
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = "-"))
		static FTimespan SubtractDateTime(FDateTime A, FDateTime B)
	{
		return A - B;
	}

	/**
	 * Check if date time + timespan >= Now
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = ">="))
		static bool GreaterThanOrEqualTo(FDateTime A, FTimespan B, FDateTime C)
	{
		return AddTimespan(A, B) >= C;
	}

	/**
	 * Check if date time + timespan >= Now
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = ">"))
		static bool GreaterThan(FDateTime A, FTimespan B, FDateTime C)
	{
		return AddTimespan(A, B) > C;
	}

	/**
	 * Check if date time + timespan >= Now
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = "<="))
		static bool LessThanOrEqualTo(FDateTime A, FTimespan B, FDateTime C)
	{
		return AddTimespan(A, B) <= C;
	}

	/**
	 * Check if date time + timespan >= Now
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = "<"))
		static bool LessThan(FDateTime A, FTimespan B, FDateTime C)
	{
		return AddTimespan(A, B) < C;
	}

	/**
	 * Check if date time + timespan >= Now
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = ">=Now"))
		static bool GreaterThanOrEqualToNow(FDateTime A, FTimespan B)
	{
		return GreaterThanOrEqualTo(A,B,FDateTime::Now());
	}

	/**
	 * Check if date time + timespan >= Now
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = ">Now"))
		static bool GreaterThanNow(FDateTime A, FTimespan B)
	{
		return GreaterThan(A, B, FDateTime::Now());
	}

	/**
	 * Check if date time + timespan >= Now
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = "<=Now"))
		static bool LessThanOrEqualToNow(FDateTime A, FTimespan B)
	{
		return LessThanOrEqualTo(A, B, FDateTime::Now());
	}

	/**
	 * Check if date time + timespan >= Now
	*/
	UFUNCTION(BlueprintPure, Category = "DateTimeMath", Meta = (CompactNodeTitle = "<Now"))
		static bool LessThanNow(FDateTime A, FTimespan B)
	{
		return LessThan(A, B, FDateTime::Now());
	}

};
