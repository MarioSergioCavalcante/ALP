#include <iostream>
using namespace std;
int main() {
	int idade; //Essa variavel é uma variavel para guardar a idade da pessoa
	cout << "Digite a idade: ";
	cin >> idade;
	//Caso eu queira fazer alguma decisão devo usar o comando if (CONDIÇÃO)
	if (idade > 18) { //Caso a condição for verdadeira, então executa o que tá dentro das chaves.
		cout << "Ja eh um adulto!" << endl;
		cout << "Eh maior que 18 anos" << endl;
	}
	else {//SENÃO 
		if (idade >= 10 && idade <= 18) { //Precisa que ambas condições sejam satisfeitas
			cout << "Eh um adolescente!" << endl;
		}
		else {
			cout << "Eh uma criança!" << endl;
		}
	}

	 

	return 0;
}
