#include "TabelaSimbola.h"
TabelaSimbola::TabelaSimbola()
{
}

TabelaSimbola::~TabelaSimbola()
{
}

vector<UlazUTabeluSimbola> TabelaSimbola::ulazi=vector<UlazUTabeluSimbola>();

void TabelaSimbola::dodajSimbol(string labela, string sekcija, unsigned pomeraj,char lokalitet){
    UlazUTabeluSimbola novi;
    novi.labela=labela;
    novi.sekcija=sekcija;
    novi.pomeraj=pomeraj;
    novi.lokalitet=lokalitet;
    novi.redniBroj=ulazi.size();
    ulazi.push_back(novi);
}

void TabelaSimbola::ispisi(FILE *fajl){
    fprintf(fajl,"%-4s%-15s%-15s%-8s%-5s\n","RB","Labela","Sekcija","Pomeraj","Lok.");
    fprintf(fajl,"--------------------------------------------------\n");
    for (unsigned i=0;i<ulazi.size();i++){
        UlazUTabeluSimbola u=ulazi[i];
        fprintf(fajl,"%3d %-15s%-15s%7d %c\n",u.redniBroj,u.labela.c_str(),u.sekcija.c_str(),u.pomeraj,u.lokalitet);
    }
}

int TabelaSimbola::postojiSimbol(string labela)
{
    for(unsigned i=0;i<TabelaSimbola::ulazi.size();i++){
        if(ulazi[i].labela==labela) return 1;
    }
    return 0;
}

//UlazUTabeluSimbola TabelaSimbola::pronadjiUlaz(string labela)
//{
//    for(unsigned i=0;i<TabelaSimbola::ulazi.size();i++){
//        if(ulazi[i].labela==labela) return ulazi[i];
//    }
//    UlazUTabeluSimbola n=UlazUTabeluSimbola();
//    n.labela="";
//
//}
