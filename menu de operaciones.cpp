#include<iostream>
using namespace std;

int main(){
    int a, b, suma, resta, multi, fib, divi, fact, operaciones, i;
      
    cout<<"Que operacion desea realizar:"<<endl;
    cout<<"Si desea realizar una suma ingrese 1"<<endl;
    cout<<"Si desea realizar una resta ingrese 2"<<endl;
    cout<<"Si desea realizar una multiplicacion ingrese 3"<<endl;
    cout<<"Si desea realizar una division ingrese 4"<<endl;
    cout<<"Si desea calcular la serie de fibonacci ingrese 5"<<endl;
    cout<<"Si desea calcular el factorial ingrese 6"<<endl;
    cout<<"Si no desea realizar ninguna operacion ingrese 7"<<endl;
     cin>>operaciones;
    switch(operaciones){
        case 1: 
          cout<<"Ingrese a"<<endl;
        cin>>a;
        cout<<"Ingrese b"<<endl;
         cin>>b;
        suma=a+b;
        cout<<"La operacion seleccionada fue: Suma"<<endl;
        cout<<"El resultado de la operacion es:"<<suma<<endl;
        break;
        case 2:
          cout<<"Ingrese a"<<endl;
        cin>>a;
        cout<<"Ingrese b"<<endl;
         cin>>b;
        resta=a-b;
         cout<<"La operacion seleccionada fue: Resta"<<endl;
        cout<<"El resultado de la operacion es:"<<resta<<endl;
        break;
        case 3:
          cout<<"Ingrese a"<<endl;
        cin>>a;
        cout<<"Ingrese b"<<endl;
         cin>>b;
        multi=a*b;
         cout<<"La operacion seleccionada fue: Multiplicacion"<<endl;
        cout<<"El resultado de la operacion es:"<<multi<<endl;
        break;
        case 4:
          cout<<"Ingrese a"<<endl;
        cin>>a;
        cout<<"Ingrese b"<<endl;
         cin>>b;
          cout<<"La operacion seleccionada fue: Division"<<endl;
        divi=a/b;
        cout<<"El resultado de la operacion es:"<<divi<<endl;
        break;
        case 5:
        int a,fibo1,fibo2,i;
       
       
       
         cout << "Introduce a: ";
         cin >> a;
   if(a==0||a==1){
       a=0;
       cout<<"El numero de la serie es:"<<a<<endl;
   }
   else{
   while(a<=1);
   cout << endl;
    cout << "Los " << a << "  numeros de la serie de Fibonacci son:" << endl;
   fibo1=1;
   fibo2=1;
   cout << fibo1 << " ";
   for(i=2;i<=a;i++)
   {
       cout << fibo2 << " ";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
   }
   cout << endl << endl;
   }
         cout<<"La operacion seleccionada fue: Fibonacci"<<endl;
        break;
        case 6: 
        cout<<"Ingrese a"<<endl;
        cin>>a;
        	if(a<0) {
	
		fact =0;
	}	
	else if(a==0) 
	fact=1;
  
 	else{
     
 	for (i = 1; i <= a; i++){
      
  		 fact = fact*i;
    
	  }
  
 	}
    cout<<"La operacion seleccionada fue: Factorial"<<endl;
	cout<<"Factorial es: "<<fact<<endl;
	break;
        case 7:
        cout<<"Salir"<<endl;
        break;
    default:
    cout<<"La opcion es invalida"<<endl;
    }
    return 0;
}
