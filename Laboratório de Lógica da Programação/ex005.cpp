#include<iostream>
#include<locale>

using namespace std; 

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	cout << "-------------------- \n";
	cout << "Digite um número: \n";
	cout << "-------------------- \n";
	cin >> num;
	if (num > 0){
		cout << "-------------------- \n";
		cout << "O número: " << num << " é Positivo \n";
		cout << "-------------------- \n";
	} else {
		cout << "O número: " << num << " é NEGATIVO!";
	}
}
