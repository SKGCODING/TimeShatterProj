// Do not distribute without permission

#include "NativizedAssets.h"
#include "ModuleInterface.h"
#include "ModuleManager.h"

class FNativizedAssetsModule : public IModuleInterface
{	
	virtual void StartupModule() override
	{
			
	}
};

IMPLEMENT_MODULE( FNativizedAssetsModule, NativizedAssets );
