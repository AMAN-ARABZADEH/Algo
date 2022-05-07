//
//  ObjectSearch.cpp
//  Algo
//
//  Created by Aman arabzadeh on 2022-05-07.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
#include <string>
using std::string;

/// Now we are going to search for an array of objects
/// Linear and bineary search can also ne used for specific element in an array of objects or structure
///
/// Inventory class decleration

class Inventory{
private: // By default classes are private, I added because of  readble code and clarity
    string itemCode{};
    string description{};
    double price{};
public:
    Inventory() : itemCode{"XXXXXX"},description{" "}, price{0.00}{} // Default constructure using delegation C++ 11
    Inventory(string itemCode, string description, double price) : itemCode{itemCode},description{description}, price{price}{}
    
    
    // Add the methods setters and getters
    
    //get the functions to retrives member variables value
    string getCode(){
        return itemCode;
    }
    string getDescription(){
        return description;
    }
    double getPrice(){
        return price;
    }
    
    void setCode(string itemCode){
        this->itemCode = itemCode;
    }
    
    void setDescription(string description){
        this->description = description;
    }
    
    void setPrice(double price){
        this->price = price;
    }
};
// End of inventory class now let's implement it

/******************************************************************'
        Main
 ***************************************************'''''''''''''''''''''''''*********/

// Function prototypes

int search(Inventory[], int, string);
int main(){
    const unsigned int SIZE {4};
    
    Inventory elements[SIZE] = {
                           Inventory("BS22", "Children book", 22.22),
                           Inventory("HS12", "Bird house", 34.99),
                           Inventory("IC31", "Ice Creams", 4.99),
                           Inventory("LS11", "Programming books", 33.76),
                        };
    
    string desiredCode{};
    int pos{};
    char selection{};
    
    do {
        // get the item search for
        cout << "\nEnter the items code: ";
        cin >> desiredCode;
        
        // search for the object
        
        pos = search(elements, SIZE, desiredCode);
        
        // if pos == -1, the item is not in lists object
        if(pos == -1){
            cerr << "The item is not in the list!....." << endl;
        }else{
            // The item was found here
            cout << "\nThe item with code " << elements[pos].getItemCode() << " costs €" << elements[pos].getPrice()
            " Euros and the description of the item is: " << elements[pos].getDescription() << endl;
        }
        // Does the uses want to look up for another price
        cout << "\nLook up another item price(Y/N) ";
        cin >> selection;
    } while (selection != 'Y' && selection != 'y');
    
    
    cout << "\nDone:.....!"<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}



int search(Inventory objects[], int size, string target){
    int index{};
    int position{-1};
    bool found{false};
    
    while(index < size && !found){
        if(objects[index].getCode() == target){
            found = true;
            position = index;
        }
        ++index;
    }
    return position;
}
