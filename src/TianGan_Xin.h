#pragma once
#include "Yin.h"
#include "Jin.h"
#include "Tiangan.h"

class TianGan_Xin :
	public Yin, public Jin, public TianGan	
{
public:
	TianGan_Xin(void);
	~TianGan_Xin(void);

	virtual string getName();
	virtual int getXing();
};
