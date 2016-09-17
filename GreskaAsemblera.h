#ifndef GRESKAASEMBLERA_H
#define GRESKAASEMBLERA_H
#include <iostream>

class GreskaAsemblera
{
private:
    unsigned linija;
    string poruka;
public:
        GreskaAsemblera(unsigned l,string p) {poruka=p;linija=l;}
        friend ostream& operator<<(ostream& izlaz,GreskaAsemblera g){
            return izlaz<<"Greska u liniji "<<g.linija<<": "<<g.poruka<<"\n";
        }
};

#endif // GRESKAASEMBLERA_H
