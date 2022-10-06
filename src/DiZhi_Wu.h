#pragma once
#include "Yang.h"
#include "Huo.h"
#include "DiZhi.h"

class DiZhi_Wu :
	public Yang, public Huo, public DiZhi	
{
public:
	DiZhi_Wu(void);
	~DiZhi_Wu(void);

	virtual string getName();
	virtual int getXing();
};
