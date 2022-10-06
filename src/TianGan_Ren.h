#pragma once
#include "Yang.h"
#include "Shui.h"
#include "Tiangan.h"

class TianGan_Ren :
	public Yang, public Shui, public TianGan	
{
public:
	TianGan_Ren(void);
	~TianGan_Ren(void);

	virtual string getName();
	virtual int getXing();
};
