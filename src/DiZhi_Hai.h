#pragma once
#include "Yin.h"
#include "Shui.h"
#include "DiZhi.h"

class DiZhi_Hai :
	public Yin, public Shui, public DiZhi	
{
public:
	DiZhi_Hai(void);
	~DiZhi_Hai(void);

	virtual string getName();
	virtual int getXing();
};
