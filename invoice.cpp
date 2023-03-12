#include <iostream>
#include <string>

using namespace std;

//Invoice Class
class Invoice {
  public:
    int numberId;
    string description;
    int amount;
    float price;
    //Construct
    Invoice();

    //Invoice Amount
    float getInvoiceAmount();

    //Display overview
    void displayInvoice();

};

//Construct
Invoice::Invoice() {
  cin >> numberId;
  cin.ignore();
  getline(cin, description);
  cin >> amount;
  cin >> price;

  if(amount < 0) {
    amount = 0;
  }
  if(price < 0) {
    price = 0;
  }
}
//implementing invoice total method
float Invoice::getInvoiceAmount() {
  return price*amount;
}

void Invoice::displayInvoice() {
  cout << numberId << " - " << description << " - " << amount << " - " << price << " - " << getInvoiceAmount() << endl;
}
//END Invoice Class

int main() {
  Invoice invoice1;
  Invoice invoice2;

  //Displaying the results
  invoice1.displayInvoice();

  invoice2.displayInvoice();

  return 0;
}