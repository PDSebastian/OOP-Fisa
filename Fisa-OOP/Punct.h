#pragma once
#include "FiguraGeometrica.h"
class Punct:public FiguraGeometrica
{
	int X;
	int Y;
public :
	Punct(int x, int y);
	void afisare() override ;
	void translatare(int x, int y) override;
	FiguraGeometrica* duplicare() override ;







};

