#include<iostream>
#include<locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num;
	
	cout << "Digite o número a ser analisado: ";
	cin >> num;
	
	if((num>=10)&&(num<=20)){
		cout << "o número está entre 10 e 20";
	} else {
		cout << "O número não está entre 10 e 20";
	}
}
