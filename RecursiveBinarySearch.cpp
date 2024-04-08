#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int x){

    if (list.size() == 1 && list[0] == x){
        return true;
    } else if (list.size() == 1){
        return false;
    }
    int m = (list.size() - 1)/2;
    if (list[m] > x){
        std::vector<int> sol(list.begin(), list.begin() + m);
        return search(sol, x);
    } else if (list[m] < x){
        std::vector<int> sol(list.begin()+m+1, list.end());
        return search(sol, x);
    } else {
        return true;
    }
    
}
