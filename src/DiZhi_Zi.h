#pragma once
#include "Yang.h"
#include "Shui.h"
#include "DiZhi.h"

class DiZhi_Zi :
	public Yang, public Shui, public DiZhi	
{
public:
	DiZhi_Zi(void);
	~DiZhi_Zi(void);

	virtual string getName();
	virtual int getXing();
};
