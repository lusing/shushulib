#pragma once
#include "Yin.h"
#include "Jin.h"
#include "DiZhi.h"

class DiZhi_You :
	public Yin, public Jin, public DiZhi	
{
public:
	DiZhi_You(void);
	~DiZhi_You(void);

	virtual string getName();
	virtual int getXing();
};
