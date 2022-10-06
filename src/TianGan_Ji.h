#pragma once
#include "Yin.h"
#include "Tu.h"
#include "Tiangan.h"

class TianGan_Ji :
	public Yin, public Tu, public TianGan	
{
public:
	TianGan_Ji(void);
	~TianGan_Ji(void);

	virtual string getName();
	virtual int getXing();
};
