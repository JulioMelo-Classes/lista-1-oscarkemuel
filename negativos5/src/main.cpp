#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void){
    // TODO: Adicione aqui seu código.
    int num = 0;
    int cont = 0;

    for (int i = 0; i < SIZE; i++){
        std::cin >> num;
        if(num < 0) cont++;
    }

    std::cout << cont;

    return 0;
}
