cmake_minimum_required(VERSION 3.10)

# set the project name
project(shushu)

# add the executable
add_executable(shushu
        src/SixRen.cpp src/LiuRen.cpp src/Xing.cpp src/Tiangan.cpp src/DiZhi.cpp src/month.cpp src/Gan_Zhi.cpp src/Ganzhi.cpp
        src/YinYang.cpp src/JinKouJue.cpp src/ShenSha.cpp src/GuiShen.cpp
        src/QiMenDunJia.cpp src/BaZhaShen.cpp src/JiuXing.cpp src/Gua.cpp
        src/Yang.cpp src/Yin.cpp
        src/TianGan_Jia.cpp src/TianGan_Yi.cpp src/TianGan_Bing.cpp src/TianGan_Ding.cpp src/TianGan_Wu.cpp src/TianGan_Ji.cpp
        src/TianGan_Geng.cpp src/TianGan_Xin.cpp src/TianGan_Ren.cpp src/TianGan_Gui.cpp
        src/DiZhi_Zi.cpp src/DiZhi_Chou.cpp src/DiZhi_Yin.cpp src/DiZhi_Mao.cpp src/DiZhi_Chen.cpp src/DiZhi_Si.cpp
        src/DiZhi_Wu.cpp src/DiZhi_Wei.cpp src/DiZhi_Shen.cpp src/DiZhi_You.cpp src/DiZhi_Xu.cpp src/DiZhi_Hai.cpp
        src/Huo.cpp src/Jin.cpp src/Mu.cpp src/Tu.cpp src/Shui.cpp
        src/BaMen.cpp
        )

