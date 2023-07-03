#include<iostream>
using namespace std;

/*
Dado dos valores enteros y distintos, emitir una leyenda 
apropiada que inorfme cuan es el mayor entre ellos 
 */
 
int main(){
	
	int a; 
	cout<<"Ingrese el primer valor: ";
	cin>>a;
	
	int b; 
	cout<<"\nIngrese el segundo valor: ";
	cin>>b;
	
	
	// si son iguales corrige hasta que los valores sean distintos
	while(a==b){
		cout<<"\n\n ****Porfavor ingrese los valores distintos*****\n\n";
		cout<<"\nIngrese el primer valor: ";
		
		cin>>a;
		cout<<"\nIngrese el segundo valor: ";
		cin>>b;		
	}
	
	// informa cual de ellos es el mayor
	if(a>b){
		cout<<"\nEl primer valor "<<a<<" es el mayor.";
	}else{
		cout<<"\nEl segundo valor "<<b<<" es el mayor.";
	}
	
	
	return 0;
}
