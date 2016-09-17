#ifndef TABELASIMBOLA_H
#define TABELASIMBOLA_H
#include <stdio.h>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

typedef struct UlazUTabeluSimbola{
    unsigned redniBroj;
    string labela;
    string sekcija;
    unsigned pomeraj;
    char lokalitet;
} UlazUTabeluSimbola;

class TabelaSimbola
{
    friend class CitacLinije;
    private:
        static vector<UlazUTabeluSimbola> ulazi;
    public:
        TabelaSimbola();
        ~TabelaSimbola();
        static void dodajSimbol(string labela, string sekcija, unsigned pomeraj,char lokalitet);
        static int postojiSimbol(string labela);
        static UlazUTabeluSimbola pronadjiUlaz(string labela);
        static void ispisi(FILE *fajl);
        static void ispisi(){ispisi(stdout);}
};

#endif // TABELASIMBOLA_H
