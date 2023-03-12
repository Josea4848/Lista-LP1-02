#include <iostream>
#include <string>

using namespace std;

//======== Employee class ======== 
class Funcionario {
  public:
    string name, surname;
    float salary;

    //Construct
    Funcionario();

    //Calculate the salary
    float getSalarioAnual();

    //Display Overview
    void displayEmployee();
};

//Construct
Funcionario::Funcionario() {
  
}
//getSalarioAnual
float Funcionario::getSalarioAnual() {
  return salary*12;
}

//displayEmployee
void Funcionario::displayEmployee() {
  cout << name << " " << surname << " - " << salary << " - " << getSalarioAnual() << endl;
}

//======== END Employee class ==========


int main() {
  int n = 0;

  cin >> n;

  Funcionario grupo[n];

  for(int i = 0; i < n; i++) {
    cin.ignore();
    //Name
    getline(cin, grupo[i].name);
    //Surname
    getline(cin, grupo[i].surname);
    //Salary
    cin >> grupo[i].salary;
  }

  for (int i = 0; i < n; i++) {
    grupo[i].displayEmployee();
  }
  
  return 0;
}