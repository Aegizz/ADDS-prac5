#include "BubbleSort.h"
#include "QuickSort.h"
#include "Sort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>
#include <sstream>

int main(){
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> arr;

    int temp;
    while(iss >> temp){
        arr.push_back(temp);
    }
    RecursiveBinarySearch * bs = new RecursiveBinarySearch();
    Sort * sorter = new QuickSort();
    std::cout << (bs->search(arr, 1) ? "true" : "false");
    arr = sorter->sort(arr);
    for (int i = 0; i < arr.size(); i++){
        std::cout << " " << arr[i];
    }
    return 0;

}