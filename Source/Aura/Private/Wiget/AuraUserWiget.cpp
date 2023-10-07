// Copyright Nathan.Co


#include "Wiget/AuraUserWiget.h"

void UAuraUserWiget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
