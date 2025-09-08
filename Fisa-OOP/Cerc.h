#pragma once
#include "FiguraGeometrica.h"
#include "Punct.h"
class Cerc:public FiguraGeometrica
{
	Punct punct;
	int raza;
public:
	Cerc(Punct p, int r);
	void afisare() override;
	void translatare(int x, int y) override;
	FiguraGeometrica* duplicare()override;





};

