#include<iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int n,suma = 0;
	
	
	cout<<"Escriba un numero de elementos: ";
	cin>>n;
		
	for(int i=1;i<=n;i++){
		suma = suma + i;
	}

    cout<<"\nLa suma es: "<<suma<<endl;
    
    
    
    getch();
	return 0;
}
