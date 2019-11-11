#include <iostream>

using namespace std;

int main()
{
    char sirStack[]="text la alegere";
    char* sirHeap= new char{sizeof(sirStack)};
        for(short i=0; i<sizeof(sirStack); i++)
       {
           sirHeap[i]= sirStack[i];
            cout<<sirHeap<< endl;
            cout<<"numarul elementelor:"<<sizeof(sirStack)<<endl;
       }
        char varContor=1;
            for(int j=0; j<=16; j++);
             if (varContor=" ")
             varContor++;
    return 0;
}
