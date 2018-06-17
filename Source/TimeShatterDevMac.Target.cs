// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class TimeShatterDevMacTarget : TargetRules
{
	public TimeShatterDevMacTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "TimeShatterDevMac" } );
	}
}
