#pragma once
#include "Yin.h"
#include "Huo.h"
#include "Tiangan.h"

class TianGan_Ding :
	public Yin, public Huo, public TianGan	
{
public:
	TianGan_Ding(void);
	~TianGan_Ding(void);

	virtual string getName();
	virtual int getXing();
};
