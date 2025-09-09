#include "Dreptunghi.h"
Dreptunghi::Dreptunghi(Punct p1, Punct p2) :p1(p1), p2(p2) {};
void Dreptunghi::afisare() {
	cout << "p1 dreptunghi: "; p1.afisare();
	cout << "p2 dreptunghi : "; p2.afisare();

}
void Dreptunghi::translatare(int x, int y) {
	p1.translatare(x,y);
	p2.translatare(x, y);

}
FiguraGeometrica* Dreptunghi::duplicare() {
	return p1.duplicare();
	return p2.duplicare();


}