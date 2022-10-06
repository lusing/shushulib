#pragma once
#include "Gan_Zhi.h"
#include "GuiShen.h"
#include <vector>
#include <boost/shared_ptr.hpp>

class JinKouJue
{
public:
	JinKouJue(std::shared_ptr<Gan_Zhi> pYear,std::shared_ptr<Gan_Zhi> pMonth,
		std::shared_ptr<Gan_Zhi> pDay,std::shared_ptr<Gan_Zhi> pHour,
		std::shared_ptr<DiZhi> pDiFen);
	~JinKouJue(void);

	std::shared_ptr<Gan_Zhi> pYear;
	std::shared_ptr<Gan_Zhi> pMonth;
	std::shared_ptr<Gan_Zhi> pDay;
	std::shared_ptr<Gan_Zhi> pHour;

	std::shared_ptr<DiZhi> pDiFen;

	std::shared_ptr<DiZhi> pYueJiang;
	std::shared_ptr<GuiShen> pGuiShen;
	std::shared_ptr<TianGan> pRenYuan;

	std::shared_ptr<TianGan> pJiangGan;
	std::shared_ptr<TianGan> pShenGan;

	bool bYongShenIsJiang;

	void show();

	void shensha();

	void duanKe();

	template<class T>
	inline void PRINT_ELEMENTS(const T& coll, const char* optcstr="")
	{
		typename T::const_iterator pos;

		cout<<optcstr;
		for(pos=coll.begin();pos!=coll.end();++pos)
		{
			cout<<*pos<<' ';
		}
		cout<<endl;
	}

private:
	string parseYueJiangName();
	vector<std::shared_ptr<TianGan> > gans;
	vector<std::shared_ptr<DiZhi> > zhis;
	vector<std::shared_ptr<Gan_Zhi> > sizhu;
};
