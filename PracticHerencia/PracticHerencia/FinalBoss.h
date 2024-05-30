#pragma once
#include "Personaje.h"
class FinalBoss : public Enemigo
{
private:
	int SuperAtck1;
	int SuperAtck2;
public:
	int getSuperAtck1();
	void setSuperAtck1(int pSuperAtck1);
	int getSuperAtck2();
	void setSuperAtck2(int pSuperAtck2);
	int getHp();
	void setHp(int hpp);
	void psoi(int Y, int X);
	FinalBoss();
	FinalBoss(int hpp, int attck, string nme, int X, int Y, int pSuperAtck1, int pSuperAtck2);








};
