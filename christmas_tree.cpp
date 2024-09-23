// C++ Program to implement 
// Cristmas Tree Pattern  
#include <iostream> 
  
using namespace std; 
  
// Driver Class 
class PrintChristmasTree { 
public: 
    // Value 5 is permanently provided to height variable 
    static const int height = 5; 
  
    // Main Function 
    static int main() 
    { 
        // Assigning Width 
        int width = 5; 
  
        // Assigning Space 
        int space = width * 5; 
  
        int x = 1; 
  
        // Code to Print Upper Part of the Tree i.e. 
        // Pyramids. 
        for (int a = 1; a <= height; a++) { 
            for (int i = x; i <= width; i++) { 
                for (int j = space; j >= i; j--) 
                    cout << " "; 
  
                for (int k = 1; k <= i; k++) 
                    cout << "* "; 
  
                cout << endl; 
            } 
  
            x = x + 2; 
            width = width + 2; 
        } 
  
        // Printing Branch of Christmas Tree 
        for (int i = 1; i <= 4; i++) { 
  
            for (int j = space - 3; j >= 1; j--) 
                cout << " "; 
  
            for (int k = 1; k <= 4; k++) 
                cout << "* "; 
  
            cout << endl; 
        } 
        return 0; 
    } 
}; 
  
// Main function 
int main() 
{ 
    PrintChristmasTree::main(); 
    return 0; 
}