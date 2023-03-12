#include <iostream>

using namespace std;

class Data {
    public:
        int dia, mes, ano;

    Data();
};

Data::Data() {
    dia = mes = ano = 1;
}


int main() {
    Data hoje;

    //DIA
    cin >> hoje.dia;
    //MES
    cin >> hoje.mes;
    //ANO
    cin >> hoje.ano;

    cout << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;

    return 0;
}
