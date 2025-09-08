
#include "FiguraGeometrica.h"
#include "Schema.h"
#include  "Punct.h"

int main()
{
	Schema *s=new Schema();

	Punct* p = new Punct(1, 1);
	s->adaugaFigura(p);
	s->translatare(2, 2);
	s->afisare();





}


