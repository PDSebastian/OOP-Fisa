#include "Eticheta.h"
Eticheta::Eticheta(Punct p1, Punct p2, string text) :Dreptunghi(p1,p2), text(text) {};
void Eticheta::afisare() {
	Dreptunghi::afisare();
	cout << "text din dreptunghi :  " << text << endl;
}
void Eticheta::translatare(int x, int y ) {
	Dreptunghi ::  translatare(x,y);
}
FiguraGeometrica* Eticheta::duplicare() {
	return new Eticheta(*this );


}