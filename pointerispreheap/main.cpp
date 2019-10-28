#include <iostream>
double* ppntr= new double (1.3);
using namespace std;

int main()
{
   double* var1=new double (2.3);
   double* var2=new double (5.4);
   double* pntMedie= new double;
    *pntMedie= (*ppntr + *var1 + *var2) / 3;
        std::cout<< *pntMedie << std::endl;
            delete var1;
            delete var2;
            delete pntMedie;
            var1= NULL;
            var2= NULL;
            pntMedie= NULL;
                return 0;
}
