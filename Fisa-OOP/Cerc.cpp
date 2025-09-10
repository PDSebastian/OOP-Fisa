#include "Cerc.h"
Cerc::Cerc(Punct p, int r) :punct(p), raza(r) {};
void Cerc::afisare() {
	cout << "centru cerc: "; punct.afisare();
	cout << "raza cerc: " << raza << endl;

}
void Cerc::translatare(int x, int y) {
	punct.translatare(x, y);

}
FiguraGeometrica* Cerc::duplicare() {
	return new Cerc(punct, raza);


}
