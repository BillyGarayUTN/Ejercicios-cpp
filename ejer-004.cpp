#include<iostream>
using namespace std;

/*
a aprtir de un valor entero ingresado por teclado, se pide informar :
a) la quinta parte de dicho valor
b) el resto de la division por 5
c) La septima parte del resuktado del punto a).
 */
int main(){
	cout <<"Ingresa un numero: ";
	int numero;
	cin>>numero;
	
	//damos la quinta parte 
	int quinta;
	quinta = numero/5;
	cout<<"la quint parte es: "<< quinta;
	
	//el resto de la division por 5
	int resto;
	resto = numero%5;
	cout<<"\nel resto es es: "<< resto;
	
	//septima parte de el punto a)
	int septimaDeQuinta;
	septimaDeQuinta = quinta/7;
	cout<<"\nla septima parte de la quinta es: "<< septimaDeQuinta;
	
	return 0;
}
