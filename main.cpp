#include "BubbleSort.h"
#include "QuickSort.h"
#include "Sort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>
int main(){

    Sort * algo = new QuickSort();
    if (algo){
        std::vector<int> sorted = algo->sort(std::vector<int>{2,4,9,1});
        for (int i = 0; i < sorted.size(); i++){
            std::cout << sorted[i] << " ";
        }
        return 0;
    }

}