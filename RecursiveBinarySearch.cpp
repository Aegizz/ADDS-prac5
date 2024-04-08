#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int x){
    int r = list.size() - 1;
    int m = (r)/2;
    if (list[m] > x){
        std::vector<int> sol(list.begin(), list.begin() + m-1);
        return search(sol, x);
    } else if (list[m] < x){
        std::vector<int> sol(list.begin()+m+1, list.end());
        return search(sol, x);
    } else {
        return m;
    }
    
}
