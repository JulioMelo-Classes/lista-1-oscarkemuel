/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

/*
blz
*/
int main( void ){
    // TODO: Adicione seu código aqui.
    int m, n;
    while(cin >> std::ws >> m >> std::ws >> n){
      int sum = 0;
      int aux = m;
      for (int i = 0; i < fabs(n); i++){
        sum += aux;
        n >= 0 ? aux++ : aux--; //boa ideia!
      }
      if(n == 0) sum = m;
      std::cout << sum << endl;
    }
    return 0;
}
