# include "Personaje.h"
#include <iostream>
#include <windows.h>
#include "FinalBoss.h"
int game = 0;
char direccion;
void pelea() {
	
}
int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	SetConsoleTextAttribute(hConsole, 5);
	Personaje Heroe = Personaje(100,10,"", 0,9);
	Heroe.setName("");
	Heroe.setRandomX(0);
	Heroe.printAtrib();
	Heroe.posicionTablero();
	Enemigo Enemigo1;
	Enemigo Enemigo2;
	Enemigo Enemigo3;
	Enemigo Enemigo4;
	Enemigo Enemigo5;
	FinalBoss fBoss = FinalBoss(200, 20, "Final Boss", 3, 0, 0, 0);
	fBoss.psoi(0, 2);
	fBoss.posicionBoss();
	do {
		Enemigo1.setX(0);
		Enemigo1.setY(0);	
	} while (Enemigo1.posicionTablero() == false);
	do {
		Enemigo2.setX(0);
		Enemigo2.setY(0);
	} while (Enemigo2.posicionTablero() == false);
	do {
		Enemigo3.setX(0);
		Enemigo3.setY(0);
	} while (Enemigo3.posicionTablero() == false);
	do {
		Enemigo4.setX(0);
		Enemigo4.setY(0);
	} while (Enemigo4.posicionTablero() == false);
	do {
		Enemigo5.setX(0);
		Enemigo5.setY(0);
	} while (Enemigo5.posicionTablero() == false);
	

	while (game == 0) {

		int enemigo = 0;
		bool fight = false;
		bool continuar = false;
		while (continuar != true) {
			cout << "\n";
			Enemigo1.dibujarTablero();
			Sleep(500);
			cout << "Que direccion te quieres mover (A |      W <<     D  >>)";
			cin >> direccion; 
				cout << "\n";
			if (direccion == 'W' || direccion == 'w') {
				if (Heroe.getY() == 0) {
					cout << "No puedes moverte hacia arriba\n";
				}
				else {
					Heroe.borrarPosicion();
					Heroe.setY(Heroe.getY() - 1);
					if (Heroe.getX() == Enemigo1.getX() && Heroe.getY() == Enemigo1.getY()) {
							fight = true;
							enemigo = 1;
						}
						else if (Heroe.getX() == Enemigo2.getX() && Heroe.getY() == Enemigo2.getY()) {
							fight = true;
							enemigo = 2;
						}
						else if (Heroe.getX() == Enemigo3.getX() && Heroe.getY() == Enemigo3.getY()) {
							fight = true;
							enemigo = 3;
						}
						else if (Heroe.getX() == Enemigo4.getX() && Heroe.getY() == Enemigo4.getY()) {
							fight = true;
							enemigo = 4;
						}
						else if (Heroe.getX() == Enemigo5.getX() && Heroe.getY() == Enemigo5.getY()) {
							fight = true;
							enemigo = 5;
						}
					Heroe.posicionTablero();
					continuar = true;
				}
			}
			else if (direccion == 'A' || direccion == 'a') {
				if (Heroe.getX() == 0) {
					cout << "No puedes moverte a la izquierda\n";
				}
				else {
					Heroe.borrarPosicion();
					Heroe.setX(Heroe.getX() - 1);
					if (Heroe.getX() == Enemigo1.getX() && Heroe.getY() == Enemigo1.getY()) {
						fight = true;
						enemigo = 1;
					}
					else if (Heroe.getX() == Enemigo2.getX() && Heroe.getY() == Enemigo2.getY()) {
						fight = true;
						enemigo = 2;
					}
					else if (Heroe.getX() == Enemigo3.getX() && Heroe.getY() == Enemigo3.getY()) {
						fight = true;
						enemigo = 3;
					}
					else if (Heroe.getX() == Enemigo4.getX() && Heroe.getY() == Enemigo4.getY()) {
						fight = true;
						enemigo = 4;
					}
					else if (Heroe.getX() == Enemigo5.getX() && Heroe.getY() == Enemigo5.getY()) {
						fight = true;
						enemigo = 5;
					}
					Heroe.posicionTablero();
					continuar = true;
				}
			}
			else if (direccion == 'D' || direccion == 'd') {
				if (Heroe.getX() == 4) {
					cout << "No puedes moverte a la derecha\n";

				}
				else {
					Heroe.borrarPosicion();
					Heroe.setX(Heroe.getX() + 1);
					
						

						if (Heroe.getX() == Enemigo1.getX() && Heroe.getY() == Enemigo1.getY()) {
							fight = true;
							enemigo = 1;
						}
						else if (Heroe.getX() == Enemigo2.getX() && Heroe.getY() == Enemigo2.getY()) {
							fight = true;
							enemigo = 2;
						}
						else if (Heroe.getX() == Enemigo3.getX() && Heroe.getY() == Enemigo3.getY()) {
							fight = true;
							enemigo = 3;
						}
						else if (Heroe.getX() == Enemigo4.getX() && Heroe.getY() == Enemigo4.getY()) {
							fight = true;
							enemigo = 4;
						}
						else if (Heroe.getX() == Enemigo5.getX() && Heroe.getY() == Enemigo5.getY()) {
							fight = true;
							enemigo = 5;
						}
						Heroe.posicionTablero();
						continuar = true;
					
				}
			}
			else {
				cout << "Movimiento no valido\n\n";

			}
		}
		if (fight == true) {
			Sleep(500);
			cout << "Te topaste con el enemigo ";
			Sleep(500);
				if (enemigo == 1) {
					cout << "1\n";
					while (Heroe.getHp() > 0 && Enemigo1.getHp() > 0) {
						cout << "El hereo ataca con su espada. Hace " << Heroe.getAtck() << " de sangrado!!\n";
						Enemigo1.setHp(Enemigo1.getHp() - Heroe.getAtck());
						if (Enemigo1.getHp() <= 0) {
							cout << "El enemigo" << enemigo << " ha muerto!!\n";
						}
						else {
							Sleep(1000);
							cout << "Turno del enemigo\n";
							cout << "El Enemigo" << enemigo << " ataca con su espada.Hace " << Enemigo1.getAtck() << " de sangrado!!\n";
							Heroe.setHp(Heroe.getHp() - Enemigo1.getAtck());
						}
						}
				}
				else if (enemigo == 2) {
					cout << "2\n";
					while (Heroe.getHp() > 0 && Enemigo2.getHp() > 0) {
						cout << "El hereo ataca con su espada. Hace " << Heroe.getAtck() << " de sangrado!!\n";
						Enemigo2.setHp(Enemigo2.getHp() - Heroe.getAtck());
						if (Enemigo2.getHp() <= 0) {
							cout << "El enemigo" << enemigo << " ha muerto!!\n";
						}
					
						else {
							Sleep(1000);
							cout << "Turno del enemigo\n";
							cout << "El Enemigo" << enemigo << " ataca con su espada.Hace " << Enemigo2.getAtck() << " de sangrado!!\n";
							Heroe.setHp(Heroe.getHp() - Enemigo2.getAtck());
						}
					}
				}
				else if (enemigo == 3) {
					cout << "3\n";
					while (Heroe.getHp() > 0 && Enemigo3.getHp() > 0) {
						cout << "El hereo ataca con su espada. Hace " << Heroe.getAtck() << " de sangrado!!\n";
						Enemigo3.setHp(Enemigo3.getHp() - Heroe.getAtck());
						if (Enemigo3.getHp() <= 0) {
							cout << "El enemigo" << enemigo << " ha muerto!!\n";
						}
						else {
							Sleep(1000);
							cout << "Turno del enemigo\n";
							cout << "El Enemigo" << enemigo << " ataca con su espada.Hace " << Enemigo3.getAtck() << " de sangrado!!\n";
							Heroe.setHp(Heroe.getHp() - Enemigo3.getAtck());
						}
					}
				}
				else if (enemigo == 4) {
					cout << "4\n";
					while (Heroe.getHp() > 0 && Enemigo4.getHp() > 0) {
						cout << "El hereo ataca con su espada. Hace " << Heroe.getAtck() << " de sangrado!!\n";
						Enemigo4.setHp(Enemigo4.getHp() - Heroe.getAtck());
						if (Enemigo4.getHp() <= 0) {
							cout << "El enemigo" << enemigo << " ha muerto!!\n";
						}
						else {
							Sleep(1000);
							cout << "Turno del enemigo\n";
							cout << "El Enemigo" << enemigo << " ataca con su espada.Hace " << Enemigo4.getAtck() << " de sangrado!!\n";
							Heroe.setHp(Heroe.getHp() - Enemigo4.getAtck());
						}
					}
				}
				else if (enemigo == 5) {
					cout << "5\n";
					while (Heroe.getHp() > 0 && Enemigo5.getHp() > 0) {
						Sleep(500);
						cout << "El hereo ataca con su espada. Hace " << Heroe.getAtck() << " de sangrado!!\n";
						Enemigo5.setHp(Enemigo5.getHp() - Heroe.getAtck());
						if (Enemigo5.getHp() <= 0) {
							cout << "El enemigo" << enemigo << " ha muerto!!\n";
						}
						else {
							Sleep(1000);
							cout << "Turno del enemigo\n";
							cout << "El Enemigo" << enemigo << " ataca con su espada.Hace " << Enemigo5.getAtck() << " de sangrado!!\n";
							Heroe.setHp(Heroe.getHp() - Enemigo5.getAtck());
						}
					}
				}
				fight = false;
		}
		if (Heroe.getHp() <= 0) {
			cout<< "El heroe ha muerto, pierdes!!\n";
			break;
		}
		if (Heroe.getX() == 2 && Heroe.getY() == 0) {
			cout << "Es hora de enfrentar al boss!!\n";
			Sleep(500);
			game = 1;
		}
		Sleep(1000);
		system("CLS");
	}
	int turno = 0;
	while (game == 1 && Heroe.getHp() >= 0 && fBoss.getHp() >= 0) {
		Sleep(500);
		cout << "El hereo ataca con su espada. Hace " << Heroe.getAtck() << " de sangrado!!\n";
		fBoss.setHp(fBoss.getHp() - Heroe.getAtck());
		if (fBoss.getHp() <= 0) {
			cout << "El Final Bossha muerto, consigues pasar la mazmorra!!\n";
		}
		else {
			Sleep(500);
			cout << "Turno del boss\n";
			if (turno % 2 == 0 ) {
				fBoss.setSuperAtck1(0);
				if (fBoss.getSuperAtck1() == 0) {
					Sleep(500);
					cout << "El final bos usa el super ataque 1!!\n";
					Heroe.setHp(Heroe.getHp() - 30);
				}
				else  {
					cout << "El final bos falla el super ataque 1!!\n";
					Sleep(500);
				}
			
			}
			if (turno % 2 != 0) {
				fBoss.setSuperAtck2(0);
				if (fBoss.getSuperAtck2() == 0) {
					Sleep(500);
					cout << "El final bos usa el super ataque 2!!\n";
					Heroe.setHp(Heroe.getHp() - 50);
				}
				else {
					cout << "El final bos falla el super ataque 2!!\n";
					Sleep(500);
				}
				
			}
			turno++;
		}
	}
	if (Heroe.getHp() <= 0) {
		cout << "El Heroe a muerto, pierdes!!\n";
	}

}

