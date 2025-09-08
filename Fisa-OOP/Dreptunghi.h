#pragma once
#include"FiguraGeometrica.h"
#include "Punct.h "
class Dreptunghi:public FiguraGeometrica
{
	Punct p1, p2;
public :
	Dreptunghi(Punct p1, Punct p2);
	void afisare() override;
	void translatare(int x, int y ) override;
	FiguraGeometrica* duplicare() override;









};

