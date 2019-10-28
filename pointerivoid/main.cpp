#include <iostream>

using namespace std;

int main()
{
    int var1;
    void*sprevar1=&var1;
    int*ptvar1=static_cast<int*>(sprevar1);
    *ptvar1=20;
        cout<<var1<<"  "<<*ptvar1<< endl;

}
