#pragma once
#include "FiguraGeometrica.h"
#include"Punct.h"
class Eticheta:public FiguraGeometrica
{
	string text;
	Punct p1, p2;

public:
	Eticheta(Punct p1, Punct p2, string text);
	void afisare() override;
	void translatare(int x, int y) override;
	FiguraGeometrica* duplicare()override;








};

