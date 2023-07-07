#include<iostream>
using namespace std;

/*
INgresar un valor enteroo N (<20) . Acontinuacion ingresar un conjutnto VEC de N
componentes . A partir de este conjuntoi generar otro FACT en el que cada elemento sea
el factorial del elemento homologo de VEC. Finalmente imprimir ambos vecxtores 
a razon de un valor de cada uno por reglon.

ejemplos: 
VEC      FACT
2          2
3          6
4          24
*/
int main(){
	
	int n ;
	cout<<"ingrese la cantidad de elementos: ";
	cin >>n;
	
	int VEC[n];
	int FAC[n];
	int Factorial;
	
	int k= 0;
	
	for(int  i = 0; i<n;i++){
	cout<<"\n Ingrese un valor: ";
	cin>>VEC[i];
	
	
	
	
	
	//Calculo  el factorial
	Factorial = VEC[i];
	int sum = 0;
	
	for(int j = 0; j<=Factorial ;j++){
		 sum = Factorial * (Factorial-1) ;
	}
	
	FAC[i] = sum;
	}
	
	
	for(int i= 0; i<n ;i++){
	
	cout<<"\n Su facorial de "<<VEC[i]<<" es "<<FAC[i]; 
	
	}
	
	
	
	return 0;
}
