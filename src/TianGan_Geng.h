#pragma once
#include "Yang.h"
#include "Jin.h"
#include "Tiangan.h"

class TianGan_Geng :
	public Yang, public Jin, public TianGan	
{
public:
	TianGan_Geng(void);
	~TianGan_Geng(void);

	virtual string getName();
	virtual int getXing();
};
