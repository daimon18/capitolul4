#include <iostream>

using namespace std;
enum TipTeren{agricol,pasune,livada,viran};
struct Suprafata {float _lung ;float _lat;};
struct Teren {long long _cnpProprietar;TipTeren _tipTeren;Suprafata _suprafata;float _arie;};
int main()
{
    Teren unTeren;
        unTeren._suprafata._lung=15.5;
        unTeren._suprafata._lat=10.2;
            unTeren._cnpProprietar=1990710410106;
            unTeren._tipTeren=viran;
            unTeren._arie=unTeren._suprafata._lung*unTeren._suprafata._lat;
    Teren *oMovila= new Teren;
        oMovila->_suprafata._lung=unTeren._suprafata._lung;
        oMovila->_suprafata._lat=unTeren._suprafata._lat;
        oMovila->_cnpProprietar=unTeren._cnpProprietar;
        oMovila->_tipTeren=unTeren._tipTeren;
        oMovila->_arie=unTeren._arie;
            cout<<"Terenul are suprafata de :"<<oMovila->_arie<<" mp, cu lungimea de "<<oMovila->_suprafata._lung<<" metri si latimea de "<<oMovila->_suprafata._lat<<" metri."<<endl;
            cout<<"Terenul este de tip ";
                switch (unTeren._tipTeren)
                {
                    case agricol:cout<<"agricol"<<endl;
                    break;
                    case pasune:cout<<"pasune"<<endl;
                    break;
                    case livada:cout<<"livada"<<endl;
                    break;
                    case viran:cout<<"viran"<<endl;
                    break;
                }
            cout<<"proprietarul terenului are cnp-ul:"<<oMovila->_cnpProprietar<<endl;

            delete oMovila;
            oMovila=NULL;

    return 0;
}
