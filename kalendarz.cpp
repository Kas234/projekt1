#include <iostream>
#include "kalendarz.h"

using namespace std;

void Kalendarz:: zaladuj(){
cout<<"Nazwa wydarzenia: ";
cin>>wydarzenie;
cout<<endl<<"Dzien: ";
cin>>dzien;
cout<<endl<<"Miesiac: ";
cin>>miesiac;
cout<<endl<<"Rok: ";
cin>>rok;
cout<<endl;

}

void Kalendarz:: pokaz(){

    cout<<wydarzenie<<" "<<dzien<<"/"<<miesiac<<"/"<<rok<<endl;
}

Kalendarz:: Kalendarz (string w, int d, int m, int r){

    wydarzenie=w;
    dzien=d;
    miesiac=m;
    rok=r;
}

Kalendarz:: ~Kalendarz(){
    cout<<"destruktor"<<endl;
}

