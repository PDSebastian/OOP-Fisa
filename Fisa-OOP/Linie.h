#pragma once
#include "FiguraGeometrica.h"
#include "Schema.h"
#include"Punct.h"
class Linie:public FiguraGeometrica
{
	Punct  p1, p2;
public:
	Linie(Punct p1, Punct p2);
	void afisare() override;
	void translatare(int x, int y) override;
	FiguraGeometrica* duplicare() override;






};

