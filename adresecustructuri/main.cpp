#include <iostream>

using namespace std;

    struct ModelareAdresa
    {
        char prenume[30];
        char strada[30];
        char oras[30];
        char judet[30];
        int numar;
        int codPostal;
    };
    void introDate(ModelareAdresa& adresa1)
    {
        cout<<"Cum te numesti? "<<endl;
        cin>>adresa1.prenume;
        cout<<"In ce judet te-ai nascut? "<<endl;
        cin>>adresa1.judet;
        cout<<"Dar orasul? "<<endl;
        cin>>adresa1.oras;
        cout<<"Mai exact,pe ce strada? "<<endl;
        cin>>adresa1.strada;
        cout<<"Si la ce numar? "<<endl;
        cin>>adresa1.numar;
        cout<<"Stii si codul postal? "<<endl;
        cin>>adresa1.codPostal;
    }
        void Afisam (ModelareAdresa& adresa1)
        {
            cout<<"Ma numesc "<<adresa1.prenume<<endl;
            cout<<"M-am nascut in judetul "<<adresa1.judet<<", in orasul "<<adresa1.oras<<", pe strada "<<adresa1.strada<<" ,"<<endl<<" cu numarul "<<adresa1.numar<<", si codul postal "<<adresa1.codPostal<<" ."<<endl;
        }
    int main()
    {
        ModelareAdresa adresa1;
            introDate(adresa1);
            Afisam(adresa1);
    }

