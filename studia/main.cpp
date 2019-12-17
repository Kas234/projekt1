#include <iostream>

main ()
{
using namespace std;

    
// namespace std;

    cout <<"Witaj na pokladzie"<<endl;

    int wys, punkty_karne;
    cout << "Na jakiej wysokosci lecimy? : ";
    cin >> wys;
    if (wys<500){
        cout<< wys<< "metrow to za nisko."<<endl;
        punkty_karne =1;
    }
    else 
    {cout<<wys<< "Jestes bezpieczny"<<endl;
    punkty_karne=0;
    }
   return 0;
}