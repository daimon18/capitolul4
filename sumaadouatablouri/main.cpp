#include <iostream>
   static short arraySuma [41];
using namespace std;

int main()
{
    short arrayStack [41];
    short* arrayHeap= new  short[41];
        for(int i=0; i<41; i++)
            arrayStack[i]=0 + i * 7;
        for(int i=0; i<41; i++)
            arrayHeap[i]= 0 + i * 8;
        for (int i=0; i<41; i++)
            arraySuma[i] = arrayStack[i] + arrayHeap[i] ;
        for (int i=0; i<41; i++)
                cout<< "arraySuma["<<i<<"]="<<arraySuma[i]<<endl;
        delete[] arrayHeap;
        delete arrayStack;
        delete arraySuma;
        arrayHeap=NULL;
    return 0;
}
