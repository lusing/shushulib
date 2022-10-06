#pragma once
#include "Yang.h"
#include "Mu.h"
#include "Tiangan.h"

class TianGan_Jia :
	public Yang, public Mu, public TianGan	
{
public:
	TianGan_Jia(void);
	~TianGan_Jia(void);

	virtual string getName();
	virtual int getXing();
};
