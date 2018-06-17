#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"

struct FUnconvertedWrapper__UMenuSaver_C__pf1473906957 : public FUnconvertedWrapper<USaveGame>
{
	FUnconvertedWrapper__UMenuSaver_C__pf1473906957(const USaveGame* __InObject) : FUnconvertedWrapper<USaveGame>(__InObject){}
	FORCENOINLINE int32 & GetRef__ResolutionScale__pf()
	{
		static TWeakObjectPtr<const UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("ResolutionScale")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<int32 >(__Object));
	}
	FORCENOINLINE bool & GetRef__FullscreenEnabled__pf()
	{
		static TWeakObjectPtr<const UProperty> __PropertyPtr{};
		const UProperty* __Property = __PropertyPtr.Get();
		if (nullptr == __Property)
		{
			__Property = GetClass()->FindPropertyByName(FName(TEXT("FullscreenEnabled")));
			check(__Property);
			__PropertyPtr = __Property;
		}
		return *(__Property->ContainerPtrToValuePtr<bool >(__Object));
	}
};
