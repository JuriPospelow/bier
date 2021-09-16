#include <iostream>
#include "bier.h"


SPEZIES(pils, mitAlkohol, "fine Bitter", "hell")
SPEZIES(grolsch, Radler, "spitzig", "schwarz")

int main()
{
pils p1((char*)"Krombacher");
grolsch g1((char*)"Citroen");

p1.name();
p1.alkohol();
p1.farbe();
p1.geschmack();
cout << endl << endl;
g1.name();
g1.alkohol();
g1.farbe();
g1.geschmack();
    return 0;
}
