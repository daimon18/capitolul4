#include <iostream>

using namespace std;

int main()
{
    char sirStack[]="text la alegere";
    char* sirHeap= new char{sizeof(sirStack)};
        for(short i=0; i<sizeof(sirStack); i++)
        sirHeap[i]= sirStack[i];
            cout<<sirHeap<< endl;
            cout<<"numarul elementelor:"<<sizeof(sirStack)<<endl;
    return 0;
}
