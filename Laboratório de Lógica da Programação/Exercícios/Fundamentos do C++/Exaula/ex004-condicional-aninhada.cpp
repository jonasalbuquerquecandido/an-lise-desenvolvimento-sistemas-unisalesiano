#include<iostream>
#include<locale>
// positivo, negativo ou igual a 0
using namespace std; 

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	cout << "Digite um número: ";
	cin >> num;
	if (num>0){
		cout << "O número: " << num << " é POSITIVO! ";
	} else if ( num<0 ) {
		cout << "O número: " << num << " é NEGATIVO!";
	} else {
		cout << "O número: " <<num<< " é igual a 0.";
	}
	
}
