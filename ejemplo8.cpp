#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<" \n Digite un numero del 1 al 100: ";
		cin>>numero;
	}while((numero<1) || (numero>100));
	
	for(int i=1;i<=10;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	cout<<"\n";
	system("pause");
	return 0;
}
