#pragma once

#include <string>
#include <iostream>

#include "Xing.h"
#include "YinYang.h"

using namespace std;

class GanZhi : public YinYang
{
public:

	GanZhi(void);
	virtual ~GanZhi(void);

	virtual int getXing() = 0;
	bool ke(std::shared_ptr<GanZhi> pgz);
	bool sheng(std::shared_ptr<GanZhi> pgz);
	virtual string getName() = 0;
	std::shared_ptr<Xing> buildXing();
};
