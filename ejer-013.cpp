#include<iostream>
using namespace std;

/*
Dados N y M numeros naturales, informar su producto por sumas sucesivas.
 n = 4  cantidad de veces
 m = 5     
		5 + 5 + 5 + 5 = 20

*/
int main(){
	int n;
	int m;
	
	cout<<"Ingrese un numero: ";
	cin>>n;
	cout<<"Ingrese otro numero: ";
	cin>>m;
	
	int producto;
	for (int i=1; i<=n ;i++){
		producto = m + producto;
	}
	cout<<"\n el Producto mediante suma sucesiva es: "<< producto;
	return 0;
}
