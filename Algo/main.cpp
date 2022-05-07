#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
#include <string>
using std::string;



// For better practise it is consider not to use  ! using namespace std;
/// These are some basic algorithem
// Auther Aman Arabzadeh
// Please feel free to use these if you need them
// Intro to basic algorithems by Aman Arabzadeh
// Be great, Be Bold, Be brave

// Searching aaray of objects
// Intro to sorting algorithms
// sorting an array of objects
// Sorting and searching vectors


 const unsigned int SIZE = 5;
// Function Prototypes
// Linear search
int searchList(int [], int, int);   // arr, size, target
// Binary search for sorted lists

int binarySearch(int [], int, int);







int main(){
    int test[SIZE] = {23,55,12,99, 22};
    int results; // This holds the results
    // If the list returns -1 the target was not found
    results = searchList(test, SIZE, 22);
    if(results == -1){
        cout << "Target was not found.....!" << endl;
    }else{
        cout << "Target was found at " << (results) << endl;
    }

    
    
    // This program will perform a binary search on an integer
    // Array whos elements are in ascending order.
    
    // Creating arry of Id numbbers
    int biTest[11] = {11,22,33,44,55,66,172,676,1700, 7999, 17000};
    int testResults{};
    int idEmp{};
    
    // Ask for ID
    cout << "Enter the employee ID you wish to search for: ";
    cin >> idEmp;
    
    // searching for ID
    testResults = binarySearch(biTest,11, idEmp);
    if(testResults != -1){
        cout << "Target was found at position.." << testResults << endl;
    }else{
        cout << "Target was not found "  << endl;
    }

    return 0;
}


// Implementation of simple kinear search , returns index based on zero indexing
int searchList(int list [], int size, int target){
    int index{0};
    int position{-1};
    bool found{false};
    while(index < size && found != true){
        if(list[index] == target){
            found = true;
            position = index;
        }
        ++index;
    }
    return position;
}



// Implementation of binary search
int binarySearch(int arr[], int size, int target){
    int first{0};
    int last{size -1};
    int middle{};
    int position{-1};
    bool found{false};
    
    while (!found && first <= last) {
        middle = (first + last) / 2;
        if(arr[middle] == target){
            found = true;
            position = middle;
        }else if(arr[middle] < target){
            first = middle +1;
        }else{
            last = middle -1;
        }
    }
    
    return position;
}
