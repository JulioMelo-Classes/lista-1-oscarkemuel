#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n ){
    std::vector<unsigned int> numbers;
    int aux;
    int last = 1, penultimate = 0;

    for (int i = 0; (last + penultimate) < n; i++){
      if(i==0) numbers.push_back(1);
      numbers.push_back(last + penultimate);
      aux = penultimate;
      penultimate = last;
      last += aux;
    }

    return numbers;
}
