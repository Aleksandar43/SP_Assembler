#ifndef TABELASIMBOLA_H
#define TABELASIMBOLA_H
#include <stdio.h>
#include <vector>
#include <cstring>
using namespace std;

typedef struct UlazUTabeluSimbola{
    unsigned redniBroj;
    char *labela;
    char *sekcija;
    unsigned pomeraj;
    char lokalitet;
} UlazUTabeluSimbola;

class TabelaSimbola
{
    private:
        static vector<UlazUTabeluSimbola> ulazi;
    public:
        TabelaSimbola();
        ~TabelaSimbola();
        static void dodajSimbol(char *labela, char *sekcija, unsigned pomeraj,char lokalitet);
        static void ispisi();
};

#endif // TABELASIMBOLA_H
