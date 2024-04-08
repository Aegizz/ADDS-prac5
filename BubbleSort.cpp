#include "Sort.h"
#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list){
    int n = list.size();
    int unsorted = 1;
    while (unsorted){
        unsorted = false;
        for (int i = 1; i < n; i++){
            if (list[i-1] > list[i]){
                std::swap(list[i-1], list[i]);
                unsorted = true;
            }
        }
    }
    return list;
};
