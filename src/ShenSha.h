#pragma once

#include "DiZhi.h"
#include "Tiangan.h"
#include "Ganzhi.h"

class ShenSha
{
public:
	ShenSha(void);
	~ShenSha(void);

	static bool isTianDe(std::shared_ptr<DiZhi>  pMonth, std::shared_ptr<TianGan>  pTG);
	static bool isTianDe(std::shared_ptr<DiZhi>  pMonth, std::shared_ptr<DiZhi>  pDZ);
	static bool isTianDeHe(std::shared_ptr<DiZhi>  pMonth, std::shared_ptr<TianGan>  pTG);

	static bool isYueDe(std::shared_ptr<DiZhi>  pMonth, int tgid);
	static bool isTianMa(int month, int dzid);
	static bool isDuoMa(int day_dzid, int dzid);
	static bool isJieSha(int day_dzid, int dzid);

};
