#include <iostream>

using namespace std;

int main()
{
    short ident1, ident2, identSuma, identProdus;
      short* pntident1=&ident1;
      short* pntident2=&ident2;
      short* pntidentSuma=&identSuma;
      short* pntidentProdus=&identProdus;
        *pntident1=10;
        *pntident2=20;
            identSuma= (*pntident1 + *pntident2);
            identProdus= (*pntident1 * *pntident2);
            cout<< *pntidentSuma<<"  "<< *pntidentProdus<< endl;

}
