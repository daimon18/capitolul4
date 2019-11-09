#include <iostream>

using namespace std;

        struct modAdr {
    char prenume[20];
    char strada [20];
    char orasul [20];
    char judetul [20];
    int numar;
    int codPostal;
    };

void citiredelacons (modAdr& adresa)
{
    cout<<"introdu prenumele"; cin>>adresa.prenume;
    cout<<"introdu judetul"; cin>>adresa.judetul;
    cout<<"introdu orasul"; cin>>adresa.orasul;
    cout<<"introdu strada"; cin>>adresa.strada;
    cout<<"introdu numarul"; cin>>adresa.numar;
    cout<<"introdu cod postal"; cin>>adresa.codPostal;
}

void afisarea (modAdr adresa)
{
    cout<<" Ma numesc"<<adresa.prenume<<endl;
    cout << "M-am nascut in judetul " << adresa.judetul << ", in orasul " << adresa.orasul << ", pe strada " << adresa.strada << ", la numarul " << adresa.numar <<", cu codul postal:"<<adresa.codPostal<< endl;
}
    int main()
{
    modAdr adresa;
    citiredelacons (adresa);
    afisarea (adresa);
    return 0;
}
