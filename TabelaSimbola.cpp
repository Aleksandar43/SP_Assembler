#include "TabelaSimbola.h"
TabelaSimbola::TabelaSimbola()
{
}

TabelaSimbola::~TabelaSimbola()
{
}

vector<UlazUTabeluSimbola> TabelaSimbola::ulazi=vector<UlazUTabeluSimbola>();

void TabelaSimbola::dodajSimbol(char *labela, char *sekcija, unsigned pomeraj,char lokalitet){
    UlazUTabeluSimbola novi;
    novi.labela=labela;
    novi.sekcija=sekcija;
    novi.pomeraj=pomeraj;
    novi.lokalitet=lokalitet;
    novi.redniBroj=ulazi.size();
    ulazi.push_back(novi);
}

void TabelaSimbola::ispisi(){
    printf("%-4s%-15s%-15s%-8s%-5s\n","RB","Labela","Sekcija","Pomeraj","Lok.");
    printf("--------------------------------------------------\n");
    for (unsigned i=0;i<ulazi.size();i++){
        UlazUTabeluSimbola u=ulazi[i];
        printf("%3d %-15s%-15s%7d %c",u.redniBroj,u.labela,u.sekcija,u.pomeraj,u.lokalitet);
    }
}