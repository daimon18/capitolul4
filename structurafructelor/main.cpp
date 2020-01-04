#include <iostream>
using namespace std;

    enum Tip {banane, mere, avocado, mango, piersici};
        struct Produs {Tip tipProdus; float cantitate; float pret;};

int main()
{
    Produs tablou [3];
    int stoc=0;
        for (int i=0; i<3; i++)
        {
            unsigned short F;
            cout<<"Introdu un fruct: 1-banane, 2-mere, 3-avocado, 4-mango, 5-piersici ."<<endl;
            cin >> F;
            tablou[i].tipProdus= static_cast<Tip>(F);
            cout<<"Introdu cantitatea."<<endl;
            cin>>tablou[i].cantitate;
            cout<<"Introdu pretul."<<endl;
            cin>>tablou[i].pret;
        }
        cout<<"Produs   Cantitate   Pret"<<endl;
            for(int i=0; i<3; i++)
            {
                switch (tablou[i].tipProdus)
                {
                    case banane:cout<<"banane";
                    break;
                    case mere:cout<<"mere";
                    break;
                    case avocado:cout<<"avocado";
                    break;
                    case mango:cout<<"mango";
                    break;
                    case piersici:cout<<"piersici";
                    break;
                }
                cout<<"\t\t"<<tablou[i].cantitate<<"\t"<<tablou[i].pret<<endl;
                    stoc=(tablou[i].cantitate*tablou[i].pret);
            }
                cout<<"Stocul valoreaza: "<<stoc<<endl;
}
