//
//   sorting.cpp
//  Algo
//
//  Created by Aman arabzadeh on 2022-05-07.
//

// In this section I'm going to write some basic and easy sorting algorithms
// These algorithms are not efficient in large list, however still good to know they exist
// We will continue with more advance sorting algorithms in near future but now let's learn some basic first
// Such as Bubble sort and selection sort


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
#include <string>
using std::string;
#include <iostream>
#include <cstring>
#include <algorithm>

// function prototype
void sortArray(int[], int);

// Selection sort is a bit better solusion than bubble sort, however still bad performance compare to quick sort and othe algorithems
void selectionSort(int[], int);
void printArray(int [], int);

int main(){


    int SIZE = 40;

    int arr[SIZE] = {1,4,2,6,8,1,4,2,6,8,2,9,1,0,3,100,1,0,0,2,9,1,0,3,1,4,2,6,8,2,9,1,0,3,-111,0,1,01, -1, 99};
    selectionSort(arr, SIZE);
    printArray(arr, SIZE);


/*     sortArray(arr, SIZE);
    for(const size_t &el : arr){
        cout << el << " ";
    } */




    cout << "\nDone.......!" <<  endl;
    return 0;
}

void sortArray(int array[], int size){
    int temp{};  // for swapping the values sorted
    bool swap{};  // aflag to get out of the loop

    do
    {
        swap = false;
       for(int index{0}; index < (size -1); ++index ){
           if(array[index] > array[index +1]){
               temp = array[index];
               array[index] = array[index +1];
               array[index +1] = temp;
               swap = true;
           }
       }
    } while (swap == true);
    
}


// Selection sort
void selectionSort(int array[], int size){
    int startIndex;
    int minIndex{};
    int minValue{};
    for(startIndex = 0; startIndex < (size -1); ++startIndex){
        minIndex = startIndex;
        minValue =array[startIndex];
        for(size_t index = startIndex +1; index < size; ++index){
            if(array[index] < minValue){
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startIndex];
        array[startIndex] = minValue;
    }

}
void printArray(int array[], int size){
    for(size_t index{0}; index < size; ++index){
        cout << array[index] << " ";
    }
    cout <<  "\nSelection sort " << endl;
}
