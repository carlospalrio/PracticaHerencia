#include "Personaje.h"
#include <iostream>
#include <windows.h>
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);



int TABLERO[10][5] = { {0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},
{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
int TABLERO2[10][5] = { {0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},
{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0} };




int Personaje::getRandomX() {
	return posicionX;
}
void Personaje::setRandomX(int X) {
	X = rand() % 5;
	posicionX = X;
}

int Personaje::getX() {
	return posicionX;
}
void Personaje::setX(int X) {
	posicionX = X;
}

int Personaje::getY() {
	return posicionY;
}
void Personaje::setY(int Y) {
	posicionY = Y;
}

int Personaje::getAtck() {
	return Atack;
}
int Personaje::getHp() {
	return Hp;
}
void Personaje::setHp(int Hpp) {
	Hp = Hpp;
}


string Personaje::getName() {
	return Name;
}
void Personaje::setName(string nme) {
	cout << "Escriba el nombre del heroe: ";
	cin >> nme;
	Name = nme;
}

void Personaje::printAtrib() {
	cout << "El enemigo " << Name << " tiene " << Hp << " de hp y " << Atack << " puntos de dps... " << posicionX << "   " << posicionY<< "\n";
}

void Personaje::posicionTablero() {
	TABLERO[posicionY][posicionX] = 8;
}

void Personaje::borrarPosicion() {
	TABLERO[posicionY][posicionX] = 0;
}







Personaje::Personaje() {
	Hp = 100;
	Atack =10;
	Name = "";
	posicionX = 0;
	posicionY = 10;
}

Personaje::Personaje(int hpp, int attck, string nme, int X, int Y) {
	Hp = hpp;
	Atack = attck;
	Name = nme;
	posicionX = X;
	posicionY = Y;
}













int Enemigo::getX() {
	return posicionX;
}
void Enemigo::setX(int X) {
	X = rand() % 5;
	posicionX = X;
}

int Enemigo::getY() {
	return posicionY;
}
void Enemigo::setY(int Y) {
	Y = 1 + rand() % 8;
	posicionY = Y;
}

int Enemigo::getAtck() {
	return Atack;
}
int Enemigo::getHp() {
	return Hp;
}
void Enemigo::setHp(int Hpp) {
	Hp = Hpp;
}


bool Enemigo::posicionTablero() {
	if (TABLERO2[posicionY][posicionX] == 0) {
		TABLERO2[posicionY][posicionX] = 1;
		return true;
	}
	else {
		return false;
	}
}
void Enemigo::posicionBoss() {
	TABLERO[posicionY][posicionX] = 9;
}

void Enemigo::printAtrib() {
	cout << "El enemigo " << Name << " tiene " << Hp << " de hp y " << Atack << " puntos de dps... " << posicionX << "   " << posicionY << "\n";
}


void Enemigo::dibujarTablero() {
	for (int i = 0; i < 10; i++) {
		cout << "				    ";
		for (int j = 0; j < 5; j++) {
			if (TABLERO[i][j] == 8) {
				SetConsoleTextAttribute(hConsole, 4);
				cout << TABLERO[i][j] << "           ";
				SetConsoleTextAttribute(hConsole, 5);
			}
			else if (TABLERO[i][j] == 9) {
				SetConsoleTextAttribute(hConsole, 7);
				cout << TABLERO[i][j] << "           ";
				SetConsoleTextAttribute(hConsole, 5);
			}
			else {
				cout << TABLERO[i][j] << "           ";
			}
		}
		cout << "\n\n";
	}
}





Enemigo::Enemigo() {
	Hp = 50;
	Atack = 5;
	Name = "";
	posicionX = 0;
	posicionY = 0;
}

Enemigo::Enemigo(int hpp, int attck, string nme, int X, int Y) {
	Hp = hpp;
	Atack = attck;
	Name = nme;
	posicionX = X;
	posicionY = Y;
}