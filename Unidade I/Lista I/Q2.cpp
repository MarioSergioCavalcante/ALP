#include <iostream>
using namespace std;
int main(){
  int numero1, numero2, soma, sub, mult, resto;
  setlocale(LC_ALL, "pt_BR.UTF-8");
  cout << "Digite o primeiro número: ";
  cin >> numero1;
  cout << "Digite o segundo número: ";
  cin >> numero2;
  soma = numero1 + numero2;
  sub = numero1 - numero2;
  mult = numero1*numero2;
  float div = (float) numero1/numero2;
  resto = numero1 % numero2;
  cout << "A soma "<< numero1 << " + " << numero2 <<  " = " << soma << endl;
  cout << "A sub: "<< numero1 << " - " << numero2 <<  " = " << sub << endl;
  cout << "A mult: "<< numero1 << " * " << numero2 <<  " = " << mult << endl;
  cout << "A div: "<< numero1 << " / " << numero2 <<  " = " << div << endl;
  cout << "O resto: "<< numero1 << " % " << numero2 <<  " = " << resto << endl;
    return 0;
}
