#pragma once
#include "Yin.h"
#include "Shui.h"
#include "Tiangan.h"

class TianGan_Gui :
	public Yin, public Shui, public TianGan	
{
public:
	TianGan_Gui(void);
	~TianGan_Gui(void);

	virtual string getName();
	virtual int getXing();
};
