#pragma once
#include"Lista.h"
#include "FiguraGeometrica.h"
class Schema
{
private:
	Lista<FiguraGeometrica*> figuri;
public:
	void adaugaFigura(FiguraGeometrica* fig);
	void afisare();
	void translatare(int x, int y);
	Schema duplicare();



};


