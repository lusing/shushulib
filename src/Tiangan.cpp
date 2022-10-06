#include "Tiangan.h"
#include "DiZhi.h"

int TianGan::getJiGong()
{
	return this->JiGong[this->tgid];
};

/**
 * �׿������ҿγ�
 * �������Ȳ�����
 * ������δ����λ
 * �����ɺ�������
 * �������������
 * ��������������
 */
int TianGan::JiGong[] = {
	DZyin,
	DZchen,
	DZsi,
	DZwei,
	DZsi,
	DZwei,
	DZshen,
	DZxu,
	DZhai,
	DZchou,
};

int TianGan::getTgid()
{
	return this->tgid;
}

int TianGan::getHe()
{
	return (tgid + 5) % 10;
}
