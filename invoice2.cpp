#include <iostream>

#define SIZE 2

using namespace std;

//Invoice
class Invoice
{
	public:
		Invoice(int numberId, string descricao, int qtd, float preco);

		//Set
		void setNumberId(int number);
		void setQtd(int qtd);
		void setPrice(float preco);
		void setDescricao(string descricao);

		//Get
		int getNumberid();
		int getQtd();
		string getDescricao();
		float getPreco();

		//Others methods
        float getInvoiceAmount();
        void print();

	private:
		int numberId;
		int qtd;
		string descricao;
		float preco;
};

using namespace std;

//Construtor
Invoice::Invoice(int numberId, string descricao, int qtd, float preco) {
	//ID do produto
	setNumberId(numberId);

	//Descrição do produto
	setDescricao(descricao);

	//Quantidade
	setQtd(qtd);

	//Preço
	setPrice(preco);

}

//set
void Invoice::setNumberId(int numberId) {
	this->numberId = numberId;
}

void Invoice::setQtd(int qtd) {
	if(qtd < 0) {
		qtd = 0;
	} else {
		this->qtd = qtd;
	}
}

void Invoice::setPrice(float preco) {
	if(preco < 0) {
		this->preco = 0.0;
	} else {
		this->preco = preco;
	}
}

void Invoice::setDescricao(string descricao) {
	this->descricao = descricao;
}

//Get

int Invoice::getNumberid() {
	return numberId;
}

int Invoice::getQtd() {
	return qtd;
}

string Invoice::getDescricao() {
	return descricao;
}

float Invoice::getPreco() {
	return preco;
}

//Other methods
float Invoice::getInvoiceAmount() {
    return preco*qtd;
}

void Invoice::print() {
    cout << numberId << " - " << descricao << " - " << qtd << " - " << preco << " - " << getInvoiceAmount() << endl;
}


//Invoice END

int main() {
	Invoice *invc[2];

	int id = 0, qtd = 0;
	string descricao = "None";
	float preco = 0.0;

	for(int i = 0; i < SIZE; i++) {
        //Buffer
        cin >> id;

        //Cleaning buffer
        cin.ignore();

        //Description
        getline(cin, descricao);

        //Amount
        cin >> qtd;

        //Price
        cin >> preco;

        invc[i] = new Invoice(id, descricao, qtd, preco);
	}

    for(int i = 0; i < SIZE; i++) {
        invc[i]->print();
    }

	return 0;
}
