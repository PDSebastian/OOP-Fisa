
#include "FiguraGeometrica.h"
#include "Schema.h"
#include  "Punct.h"
#include "Linie.h"
#include "Cerc.h"
#include "Dreptunghi.h"
#include "Eticheta.h"

int main()
{
	Schema *s=new Schema();

	Punct* p1 = new Punct(1, 1);
	Punct* p2 = new Punct(2, 2);
	s->adaugaFigura(p1);
	s->adaugaFigura(p2);
	Linie* l = new Linie(*p1, *p2);
	s->adaugaFigura(l);
	s->translatare(5, 5);
	//s->duplicare();
	Dreptunghi* d = new Dreptunghi(*p1, *p2);
	s->adaugaFigura(d);
	Eticheta* e = new Eticheta(*p1, *p2, "text");
	s->adaugaFigura(e);
	s->afisare();


	


	




}


