#pragma once
#include "Yin.h"
#include "Huo.h"
#include "DiZhi.h"

class DiZhi_Si :
	public Yin, public Huo, public DiZhi	
{
public:
	DiZhi_Si(void);
	~DiZhi_Si(void);

	virtual string getName();
	virtual int getXing();
};
