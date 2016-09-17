//#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "TabelaSimbola.h"
#include "CitacLinije.h"
#include "GreskaAsemblera.h"
#pragma GCC diagnostic ignored "-Wwrite-strings"

using namespace std;

int main(int argc,char* argv[])
{
    if(argc<2){
        cout<<"Nije naveden fajl!\n";
        return 0;
    }
    string imeFajla=argv[1];
    FILE *fajl=fopen(argv[1],"r");
    if(fajl==nullptr) {
        cout<<"Ne postoji fajl sa tim imenom!\n";
        return 0;
    }
    CitacLinije::init();
    /*Ukloniti komentare?*/
    try{
        CitacLinije::proba1();
    } catch(GreskaAsemblera g){cout<<g;}
    TabelaSimbola::ispisi();
    fclose(fajl);
    return 0;
}
