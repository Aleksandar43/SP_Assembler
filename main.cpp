#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "TabelaSimbola.h"

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
    /*Ukloniti komentare?*/
    char *broj="0x200";
    int x=atoi(broj);
    cout<<x<<endl;
    TabelaSimbola::dodajSimbol("labela1","text",8,'l');
    TabelaSimbola::ispisi();
    fclose(fajl);
    return 0;
}
