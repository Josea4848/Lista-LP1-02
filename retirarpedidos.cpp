#include <iostream>

using namespace std;

//this function removes the repeated elements
void RemoveRpt(int vector[], int szvector) {
  for (int i = 0; i < szvector; i++) {
    for (int j = i + 1; j < szvector; j++) {
      if (vector[i] == 0) {
        break;
      }
      else if(vector[i] == vector[j]) {
        vector[j] = 0;
      }
    }
  }
}

int main() {
    int n = 0;

    //Get the vector size
    cin >> n;

    //Create the vector
    int vector[n];

    //Gets the elements from the vector
    for(int i = 0; i < n; i++) {
      cin >> vector[i];
    }

    //Using the function
    RemoveRpt(vector, n);

    //shows non-zero elements 
    for (int i = 0; i < n; i++) {
      if(vector[i]) {
        if (i == n - 1) {
          cout << vector[i] << endl;
        }
        else {
          cout << vector[i] << " ";
        }
      }
    }

    return 0;
}
