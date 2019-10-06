#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero,fibo1,fibo2,i;
       
       
       
         cout << "Introduce un numero: ";
         cin >> numero;
   if(numero==0||numero==1){
       numero=0;
       cout<<"El numero de la serie es:"<<numero<<endl;
   }
   else{
   while(numero<=1);
   cout << endl;
    cout << "Los " << numero << "  numeros de la serie de Fibonacci son:" << endl;
   fibo1=1;
   fibo2=1;
   cout << fibo1 << " ";
   for(i=2;i<=numero;i++)
   {
       cout << fibo2 << " ";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
   }
   cout << endl << endl;
   }
   return 0;
}
