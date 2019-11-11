#include <iostream>

using namespace std;
    enum Tip{mere,pere,banane,capsuni,mure};
    struct Produs
    {
    Tip tipProdus;
    float cantitate;
    float pret;
    };
int main()
{
 Produs tablou[3];
 double stoc=0;
    for (int i=0,j; i<3; ++i)
    {
        cout<<"introduceti tipul(1-mere,2-pere,3-banane,4-capsuni,5-mure) :";
        cin>> j;
        tablou[i].tipProdus= static_cast<Tip>(j);
        cout<<"introduceti cantitatea: ";
        cin>>tablou[i].cantitate;
        cout<<"introduceti pretul: ";
        cin>>tablou[i].pret;
    }
    cout<< "Produs\t Cantitate\t Pret"<<endl;
        for(int i=0; i<3; ++i)
            {
                switch (tablou[i].tipProdus)
                {
                   case mere: cout<<"Mere"; break;
                   case pere: cout<<"Pere"; break;
                   case banane: cout<<"Banane"; break;
                   case capsuni: cout<<"capsuni"; break;
                   case mure: cout<<"Mure"; break;
                }
                cout<<"\t\t" <<tablou[i].cantitate <<"\t"<<tablou[i].pret<<endl;
                stoc=stoc+(tablou[i].cantitate * tablou[i].pret);
            }
                cout<<" valoare stoc: "<<stoc<<endl;
    return 0;
}
