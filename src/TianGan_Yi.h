#pragma once
#include "Yin.h"
#include "Mu.h"
#include "Tiangan.h"

class TianGan_Yi :
	public Yin, public Mu, public TianGan	
{
public:
	TianGan_Yi(void);
	~TianGan_Yi(void);

	virtual string getName();
	virtual int getXing();
};
