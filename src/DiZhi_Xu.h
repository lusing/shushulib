#pragma once
#include "Yang.h"
#include "Tu.h"
#include "DiZhi.h"

class DiZhi_Xu :
	public Yang, public Tu, public DiZhi	
{
public:
	DiZhi_Xu(void);
	~DiZhi_Xu(void);

	virtual string getName();
	virtual int getXing();
};
