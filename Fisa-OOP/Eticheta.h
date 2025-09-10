#pragma once
#include <iostream>
#include "FiguraGeometrica.h"
#include"Punct.h"
#include"Dreptunghi.h"
class Eticheta:public Dreptunghi
{
	string text;

public:
	Eticheta(Punct p1, Punct p2, string text);
	void afisare() override;
	void translatare(int x, int y) override;
	FiguraGeometrica* duplicare()override;



};

