#pragma once
#include <iostream>
using namespace std;
class FiguraGeometrica
{
public:
	FiguraGeometrica();
	virtual void afisare();
	virtual void translatare(int x,int y)=0;
	virtual FiguraGeometrica* duplicare()=0;
	virtual ~FiguraGeometrica();











};

