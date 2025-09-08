#include "Punct.h"
Punct::Punct(int x, int y) :X(x), Y(y) {};
void Punct::afisare() {
	cout << "P " << X << "," <<Y << endl;

}
void Punct::translatare(int x, int y) {
	X = X + x;
	Y = Y + y;


}
FiguraGeometrica* Punct::duplicare() {
	return new Punct(X, Y);

}