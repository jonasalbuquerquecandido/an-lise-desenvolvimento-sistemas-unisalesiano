#include<iostream>
#include<locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float distancia, combustivel, mediacons;
	cout << "-------------------------------- \n";
	cout << "CALCULE O CONSUMO MÉDIO \n";
	cout << "-------------------------------- \n";
	cout << "Qual a distância percorrida em KM? ";
	cin >> distancia;
	cout << "Quantos litros de combustível foi gasto? ";
	cin >> combustivel;
	mediacons = distancia / combustivel;
	cout << "O consumo médio é: " <<mediacons<< " KM/L."<<endl; 
	return 0;
}
