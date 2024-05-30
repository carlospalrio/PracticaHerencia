#pragma once
#include <iostream>
using namespace std;
class Personaje
{
	//Atributos
protected:
	int Hp;
	int Atack;
	string Name;
	int posicionX;
	int posicionY;

	//Metodos
public:
	int getRandomX();
	void setRandomX(int X);

	int getX();
	void setX(int X);



	int getY();
	void setY(int Y);

	int getAtck();
	int getHp();
	void setHp(int hpp);

	string getName();
	void setName(string nme);

	void printAtrib();
	
	void posicionTablero(); 
	void borrarPosicion();
	bool verificarEnemigo();	

	Personaje();
	Personaje(int hpp, int attck, string nme, int X, int Y);
};

class Enemigo
{
	//Atributos
protected:
	int Hp;
	int Atack;
	string Name;
	int posicionX;
	int posicionY;

	//Metodos
public:
	int getX();
	void setX(int X);


	int getY();
	void setY(int Y);

	int getAtck();
	int getHp();
	void setHp(int hpp);

	void printAtrib();

	bool posicionTablero();
	void posicionBoss();
	void dibujarTablero();


	Enemigo();
	Enemigo(int hpp, int attck, string nme, int X, int Y);
};

