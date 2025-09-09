#include "Schema.h"

void Schema::adaugaFigura(FiguraGeometrica* fig) {
	figuri.addStart(fig);

}
void Schema::translatare(int x, int y) {
	Node<FiguraGeometrica*>* aux = figuri.getHead();
	aux->getData()->translatare(x, y);

}
//Schema Schema ::duplicare() {
//	Schema s;
//	Node<FiguraGeometrica*>* aux = figuri.getHead();
//	s.adaugaFigura(aux->getData()->duplicare());
//	
//}
void Schema::afisare() {
	Node<FiguraGeometrica*>*aux = figuri.getHead();
	aux->getData()->afisare();



}
