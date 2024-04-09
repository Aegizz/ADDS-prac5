#include "QuickSort.h"



std::vector<int> QuickSort::sort(std::vector<int> list){
    int n = list.size();
    int pivot;
    if (n <= 1){
        return list;
    } else if (n >= 3){
        pivot = list[2];
    } else {
        pivot = list[0];

    }
    std::vector<int> less;
    std::vector<int> greater;
    std::vector<int> same;
    for (int i = 0; i < n; i++){
        if (list[i] < pivot){
            less.push_back(list[i]);
        } else if (list[i] > pivot) {
            greater.push_back(list[i]);
        } else {
            same.push_back(list[i]);
        }
    }
    less = sort(less);
    greater = sort(greater);

    std::vector<int> sol;
    sol.insert(sol.end(), less.begin(), less.end());
    sol.insert(sol.end(), same.begin(), same.end());
    sol.insert(sol.end(), greater.begin(), greater.end());

    return sol;

};

