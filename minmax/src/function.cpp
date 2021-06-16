#include "function.h"

/*!
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
#include <array>

std::pair<int,int> min_max( int V[], size_t n ){
    // Deve ser dessa forma que verifica o Empty array?
    if(!n) return std::pair<int,int>{-1, -1};

    int min = V[0], max = V[0];
    int index1 = 0, index2 = 0;

    for (int i = 0; i < n; i++){
      if(V[i] < min){
        min = V[i];
        index1 = i;
      }
      if(V[i] >= max){
        max = V[i];
        index2 = i;
      }
    }

    return std::pair<int,int>{index1, index2};
}
