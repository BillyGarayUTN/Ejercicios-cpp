#include<iostream>
using namespace std;

/*
Informar los primeros 100 numeros naturales y su sumatoria
*/
int main(){
	int numero;
	cout<<"Ingrese el numero: ";
	cin>> numero;
	int sumatoria=0;
	
	for(int i=1; i<=100 ;i++){
		sumatoria = sumatoria+numero+i;
	}
	cout <<" La sumatoria es "<<sumatoria;
	
	
	
	return 0;
}
