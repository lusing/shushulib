#pragma once
#include "Yang.h"
#include "Jin.h"
#include "DiZhi.h"

class DiZhi_Shen :
	public Yang, public Jin, public DiZhi	
{
public:
	DiZhi_Shen(void);
	~DiZhi_Shen(void);

	virtual string getName();
	virtual int getXing();
};
