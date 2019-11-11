#include <iostream>

using namespace std;

int main()
{
    char sirStack[]="text la alegere";
    char* sirHeap= new char{sizeof(sirStack)};
        for(short i=0; i<sizeof(sirStack); i++)
           {
           sirHeap[i]= sirStack[i];
           }
            cout<<sirHeap<< endl;
            cout<<"numarul elementelor:"<<sizeof(sirStack)<<endl;

        int varContor=1;
            for(int j=0; j<sizeof(sirStack[j]); j++)
             {
             if (sirStack[j]=' ')
             varContor++;
             }
             cout<<"textul are "<<varContor<<" cuvinte."<<endl;
    return 0;
}
