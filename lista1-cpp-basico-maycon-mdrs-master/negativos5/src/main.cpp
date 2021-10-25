#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int numero;
    int quant = 0;

    for(int i=0; i < SIZE; i++){
      cin >> numero; 

      if(numero < 0){
        quant = quant + 1;
      }
    }

    cout << quant;
    return 0;
}
