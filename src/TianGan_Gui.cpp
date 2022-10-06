#include "TianGan_Gui.h"

TianGan_Gui::TianGan_Gui(void)
{
	this->tgid = TGgui;
}

TianGan_Gui::~TianGan_Gui()
{
}

string TianGan_Gui::getName()
{
	return "��";
}

int TianGan_Gui::getXing()
{
	return this->feature;
}
