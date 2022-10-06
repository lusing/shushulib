#pragma once
#include "Yang.h"
#include "Huo.h"
#include "Tiangan.h"

class TianGan_Bing :
	public Yang, public Huo, public TianGan	
{
public:
	TianGan_Bing(void);
	~TianGan_Bing(void);

	virtual string getName();
	virtual int getXing();
};
