#include <iostream>
#include <string>

using namespace std;

//Data
class Data{
public:
    Data();

    void setData();
    void printData();

private:
    int dia, mes, ano;
    string nomeMes;
};

Data::Data() {

}

void Data::setData() {
    string meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro",
    "Outubro", "Novembro", "Dezembro"};

    //Dia
    cin >> dia;
    //Mes
    cin >> mes;
    //Ano
    cin >> ano;

    //Definindo o nome do mês
    if(mes >= 1 && mes <= 12) {
        nomeMes = meses[mes - 1];
    } else {
        nomeMes = "Indefinido";
    }
}

void Data::printData() {
    cout << dia << " de " << nomeMes << " de " << ano << endl;
}

//Data END

int main() {
    Data data;

    data.setData();

    data.printData();

    return 0;
}
