#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <stack>

std::string multiBaseOutput(int num, int base){
    // DisgitChar[digit] is the charachter represents
    //  Digit zero = digit = 15
    std::string digitChar = "0123456789ABCDEF";
    std::string numstr = "";
    // stack holds the base-b digits of num


    // Extract base b digits right to left and push on the stack
    std::stack<char> std;
    do
    {
        // Push right-most digit on the stack
        std.push(digitChar[num % base]);
        num = num / base;   //Remove right most digit from num
    } while (num != 0);  // Continue untill digit is  found


    // Flush the stack
    while(!std.empty()){
        numstr += std.top(); // ad digit on top of the stack
        std.pop(); // pop the stack
    }
    return numstr;
}


void perint(){
    int num, base;
    cout << "Entter a non-negative decimal number and base " << " (2 <= B <= 16) " << endl << "Or 0 0 to terminate the program:";
    cin >> num >> base;
    // Continue untill user enters base 0
    while (base != 0){
        cout << " " << num << " base " << base << " is " << multiBaseOutput(num, base) << endl;
        cout <<  " (2 <= B <= 16) " << endl << "Or 0 0 to terminate the program: " << endl;
        cin >> num >> base;
    }
    cout << "Goodbye" <<endl;
}


int main()
{
    perint();
return 0;
}
