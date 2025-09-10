
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

	Punct* p1 = new Punct(1, 2);
	Punct* p2 = new Punct(2, 3);
	s->adaugaFigura(p1);
	s->adaugaFigura(p2);
	p1->translatare(1, 1);
	p2->translatare(2, 2);
	FiguraGeometrica* copieP = p1->duplicare();
	s->adaugaFigura(copieP);
	s->afisare();
	cout << "//////*//////////////" << endl;
	Linie* l = new Linie(*p1, *p2);
	s->adaugaFigura(l);
	FiguraGeometrica* copieL = l->duplicare();
	s->adaugaFigura(l);
	s->afisare();
	cout << "///////////////////////" << endl;
	Dreptunghi* d = new Dreptunghi(*p1, *p2);
	s->adaugaFigura(d);
	FiguraGeometrica*copieD= d->duplicare();
	s->adaugaFigura(copieD);
	s->afisare();
	cout << "///////////////////////////" << endl;
	Eticheta* e = new Eticheta(*p1, *p2, "text");
	s->adaugaFigura(e);
	FiguraGeometrica* copieE = e->duplicare();
	s->adaugaFigura(e);
	s->afisare();






	
	


	


	




}


