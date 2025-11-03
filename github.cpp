#include <iostream>
using namespace std;


template <typename T>
T le_numero(string texto = "digite algo: "){
    cout << texto;
    T ler;
    cin >> ler;

    return ler;
}

long long calcular_dias_totais(int anos = 0, int meses = 0, int dias = 0){
    anos *= 365;
    meses *= 30;
    long long d = anos + meses + dias;
    return d;
}
int main(){

	// Exemplo de como a função deve ser chamada:
	int anos, dias, meses;
	long long dias_totais;

	anos = le_numero<int>("Digite quantos anos voce tem");
	meses = le_numero<int>("Digite quantos meses a mais voce tem");
	dias = le_numero<int>("Digite quandos dias a mais voce tem");

	dias_totais = calcular_dias_totais(anos, meses, dias);

	cout << "Voce tem " << dias_totais << " de vida!" << endl;



}
