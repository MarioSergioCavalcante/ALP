#include <iostream>// i/o -> Entrada  (Input) e Saida (Output) -> fluxo (stream)
using namespace std;
int main() { //Principal  - 
	//Declação das variaveis: 
	float preco, total_a_pagar;
	int litros;
	//Comandos de leitura e escrita na tela: 
	cout << "Digite o preco da gasolina: ";
	cin >> preco;
	cout << "Digite a qtd de litros que vc ira abastercer: ";
	cin >> litros;
	//Operações de multiplicação e atribuição:
	total_a_pagar = preco * litros;
	//Saída do programa:
	cout << "Voce deve pagar: R$" << total_a_pagar << endl;
 return 0;
}
