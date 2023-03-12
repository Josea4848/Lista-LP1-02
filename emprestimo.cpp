#include <iostream>

using namespace std;

//Função que verifica se a parcela é maior que 30% do salário
bool Emprestimo(float salario, float emprestimo, int parcelas) {
    if(emprestimo/parcelas > salario*0.3) {
        return false;
    }else {
        return true;
    }
}

int main() {
    float salario, emprestimo;
    int parcelas;

    //Salário
    do {cin >> salario;} while(salario <= 0);
    
    
    //Empréstimo
    do {
        cin >> emprestimo;
    } while (emprestimo <= 0);
    

    do {
        //Parcelas
        cin >> parcelas;
    } while(parcelas <= 0);

    if(Emprestimo(salario, emprestimo, parcelas)) {
        cout << "Emprestimo pode ser concedido\n";
    }else {
        cout << "Emprestimo nao pode ser concedido\n";
    }

    return 0;
}
