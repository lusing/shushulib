#pragma once

#include <string>

#include "Gua.h"

const int ZhiFu    = 0;
const int JiuTian  = 1;
const int JiuDi    = 2;
const int ZhuQue   = 3;
const int GouChen  = 4;
const int LiuHe    = 5;
const int LiuYin   = 6;
const int TengShe  = 7;

const char BaZhaShenName[8][10] = {"直符","九天","九地","朱雀","勾陈","六合","太阴","螣蛇"};

class BaZhaShen
{
public:
    static inline std::shared_ptr<std::string> getShenName(int men)
    {
        return std::make_shared<std::string>(BaZhaShenName[men%8]);
    }

};