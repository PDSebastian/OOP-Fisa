#include "Schema.h"

void Schema::adaugaFigura(FiguraGeometrica* fig) {
	figuri.addStart(fig);

}
void Schema::translatare(int x, int y) {
	Node<FiguraGeometrica*>* aux = figuri.getHead();
	aux->getData()->translatare(x, y);

}
void Schema::afisare() {
	Node<FiguraGeometrica*>*aux = figuri.getHead();
	while (aux!= NULL) {
		aux->getData()->afisare();
		aux = aux->getNext();
	
	
	}




}
