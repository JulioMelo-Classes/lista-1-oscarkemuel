/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;
#include <vector>

// Se desejar, crie funções aqui, antes do main().
float getPercentage(float num, float total){
  return (100 * num) / total;;
}
/*
ok, essa função aí era realmente desncessária =)
*/
int main(void){
    // TODO: Adicione aqui a sua solução.
    std::vector<int> numbers;
    int x;
    int sequence1= 0, sequence2 = 0, sequence3 = 0, sequence4 = 0, sequence5 = 0;

    while( cin >> std::ws >> x) {
      numbers.push_back(x);
    }

    for (int i = 0; i < numbers.size(); i++){
      if(numbers[i] >= 0 && numbers[i] < 25){
        sequence1++;
        continue;
      }else if(numbers[i] >= 25 && numbers[i] < 50){
        sequence2++;
        continue;
      }else if(numbers[i] >= 50 && numbers[i] < 75){
        sequence3++;
        continue;
      }else if(numbers[i] >= 75 && numbers[i] < 100){
        sequence4++;
        continue;
      }else {
        sequence5++;
      }
    }
    int total = numbers.size();

    std::cout << std::setprecision(4) << getPercentage(sequence1, total) << endl;
    std::cout << std::setprecision(4) << getPercentage(sequence2, total) << endl;
    std::cout << std::setprecision(4) << getPercentage(sequence3, total) << endl;
    std::cout << std::setprecision(4) << getPercentage(sequence4, total) << endl;
    std::cout << std::setprecision(4) << getPercentage(sequence5, total) << endl;
    return 0;
}
