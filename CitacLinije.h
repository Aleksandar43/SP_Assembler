#ifndef CITACLINIJE_H
#define CITACLINIJE_H
#include <vector>
#include <map>
#include <iostream>
#include <stdio.h>
#include "TabelaSimbola.h"
#include "GreskaAsemblera.h"
using namespace std;

typedef void (*FunkcijaObradeLinije)(void);

class CitacLinije
{
        static vector<string> stringovi;
        static FILE *fajl;
        static int prolaz;
        static string trenutnaSekcija;
        static unsigned brojacSekcije;
        static unsigned linijaFajla;
        static map<string,FunkcijaObradeLinije> direktive,instrukcije;
    public:
        static void init();
        static void setFajl(FILE* f){fajl=f;}
        static FILE* getFajl(){return fajl;}
        static void procitajLiniju();
        static void obradaLinije();
        /*static void posaljiNaStampanje();*/
        static void fPublic();
        static void fExtern();
        static void fEnd();
        static void fText();
        static void fData();
        static void fBss();
        static void fChar();
        static void fWord();
        static void fLong();
        static void fAlign();
        static void fSkip();
        static void proba1();
};

#endif // CITACLINIJE_H
