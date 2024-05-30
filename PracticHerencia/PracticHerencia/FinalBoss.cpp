#include "FinalBoss.h"

int FinalBoss::getSuperAtck1()
{
	return SuperAtck1;
}

void FinalBoss::setSuperAtck1(int pSuperAtck1)
{
	pSuperAtck1 = rand() % 2;
	SuperAtck1 = pSuperAtck1;
}
int FinalBoss::getSuperAtck2()
{
	return SuperAtck2;
}

void FinalBoss::setSuperAtck2(int pSuperAtck2)
{
	pSuperAtck2 = rand() % 3;
	SuperAtck1 = pSuperAtck2;
}
void FinalBoss::psoi(int Y, int X) {
	posicionY = Y;
	posicionX = X;
}


FinalBoss::FinalBoss() {}

int FinalBoss::getHp() {
	return Hp;
}
void FinalBoss::setHp(int Hpp) {
	Hp = Hpp;
}

FinalBoss::FinalBoss(int hpp, int attck, string nme, int X, int Y, int pSuperAtck1, int pSuperAtck2) :Enemigo(hpp, attck,nme,X,Y)
{
	SuperAtck1 = pSuperAtck1;
	SuperAtck2 = pSuperAtck2;
	Hp = 200;

}