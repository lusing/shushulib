#pragma once
#include "Yang.h"
#include "Tu.h"
#include "Tiangan.h"

class TianGan_Wu :
	public Yang, public Tu, public TianGan	
{
public:
	TianGan_Wu(void);
	~TianGan_Wu(void);

	virtual string getName();
	virtual int getXing();
};
