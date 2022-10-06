#pragma once

#include <string>
#include <iostream>
#include <vector>

#include "Ganzhi.h"
#include "Tiangan.h"

const int DZzi   = 0;
const int DZchou = 1;
const int DZyin  = 2;
const int DZmao  = 3;
const int DZchen = 4;
const int DZsi   = 5;
const int DZwu   = 6;
const int DZwei  = 7;
const int DZshen = 8;
const int DZyou  = 9;
const int DZxu   = 10;
const int DZhai  = 11;

using namespace std;

class DiZhi : public GanZhi
{
public:


	DiZhi(void);
	virtual ~DiZhi(void);
	static bool he(int he1, int he2);//����
	static bool sanhe(int he1, int he2, int he3);//����
	static bool chong(int chong1, int chong2);//��
	int getDzid(void);

	int getMonth(void);

	bool he(std::shared_ptr<DiZhi> pz);
	bool chong(std::shared_ptr<DiZhi> pz);
	bool sanhe(std::shared_ptr<DiZhi> pz2, std::shared_ptr<DiZhi> pz3);

	virtual int getXing() = 0;

	std::shared_ptr<std::vector<int> > getJiGongTianGanList();

protected:
	int dzid;
};
