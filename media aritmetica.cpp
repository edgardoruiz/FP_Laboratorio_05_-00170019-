#include<iostream>

using namespace std;

int main()
{

 float n, numeros=0, media=0, suma, x;

 
 cout<<"Cuantos numeros desea imgresar"<<endl;

 cin>>n;
 
 
	while(numeros<n){

     	cout<<"Ingrese un numero"<<endl;

	cin>>x;
   
	suma+=x;
  
	numeros++;
 
	}
        
		media+=suma/n;
 
       cout<<"La media aritmetica es:"<<media<<endl;

        cout<<"La cantidad de numeros que usted ingreso es:"<<n<<endl;

return 0;

}