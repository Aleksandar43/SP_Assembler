#include "CitacLinije.h"

vector<string> CitacLinije::stringovi=vector<string>();
FILE* CitacLinije::fajl=nullptr;
int CitacLinije::prolaz=1;
string CitacLinije::trenutnaSekcija="";
unsigned CitacLinije::brojacSekcije=0;
unsigned CitacLinije::linijaFajla=0;
map<string,FunkcijaObradeLinije> CitacLinije::direktive,CitacLinije::instrukcije;

void CitacLinije::init(){
    direktive[".public"]=&fPublic;
    direktive[".extern"]=&fExtern;
    direktive[".end"]=&fEnd;
    direktive[".text"]=&fText;
    direktive[".data"]=&fData;
    direktive[".bss"]=&fBss;
    direktive[".char"]=&fChar;
    direktive[".word"]=&fWord;
    direktive[".long"]=&fLong;
    direktive[".align"]=&fAlign;
    direktive[".skip"]=&fSkip;
}

void CitacLinije::procitajLiniju()
{
    string s;
    char c;
    do {c=fgetc(fajl);} while(isspace(c));
    while(c!='\n'){
        s="";
        c=fgetc(fajl);
        if(isalnum(c) || c=='.' || c=='@') s+=c;
        else{
            stringovi.push_back(s);
            s="";
            do {c=fgetc(fajl);} while(isspace(c));
        }
    }
}

void CitacLinije::obradaLinije()
{
    linijaFajla++;

}
void CitacLinije::fPublic()
{

}

void CitacLinije::fExtern()
{

}

void CitacLinije::fEnd()
{

}

void CitacLinije::fText()
{

}

void CitacLinije::fData()
{

}

void CitacLinije::fBss()
{

}

void CitacLinije::fChar()
{

}

void CitacLinije::fWord()
{

}

void CitacLinije::fLong()
{

}

void CitacLinije::fAlign()
{

}

void CitacLinije::fSkip()
{

}
