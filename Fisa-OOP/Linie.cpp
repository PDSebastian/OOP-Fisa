#include "Linie.h"
Linie::Linie(Punct p1, Punct p2) : p1(p1) , p2(p2) {};
void Linie::afisare() {
	cout << "p1 linie : ";p1.afisare();
	cout << "p2 linie : "; p2.afisare() ;


		
}
void Linie::translatare(int x, int y) {
	p1.translatare(x, y);
	p2.translatare(x, y);

}
FiguraGeometrica* Linie::duplicare() {
	return new Linie(p1, p2);

}

