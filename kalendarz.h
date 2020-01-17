#include <iostream>

using namespace std;
class Kalendarz{

    private:
    int dzien, miesiac, rok;
    string wydarzenie;

    public: 
    Kalendarz (string="spotkanie", int=1, int=1, int=2020);
    ~Kalendarz ();
    void zaladuj ();
    void pokaz();
    
};