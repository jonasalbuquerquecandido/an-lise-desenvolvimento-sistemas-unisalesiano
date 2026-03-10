#include<iostream>
#include<locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float temperatura;
	cout << "Digite a temperatura: ";
	cin >> temperatura;
	if(temperatura<=15){
		cout << "Está fazendo frio";
	}else if(temperatura<=25){
		cout << "Está agradável";
	}else{
		cout << "Está quente";
	}	
	}

