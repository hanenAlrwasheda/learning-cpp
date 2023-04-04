#include <iostream>
using namespace std;

/*
    BUILT IN VARS
Boolean - boolean - either true or false
Characters - alphabets and all the symbols. Defined using char.
Integers - whole numbers which can be both positive and negative. Defined using int (4 bytes) or short int (2 bytes) or long int (8 bytes) based on the size of the numbers used.
Floating point numbers - real numbers (numbers with fractions). Defined using float and double.
Valueless using the void keyword
Wide character using the wchar_t keyword

    Type Modifiers
short
long
signed
unsigned

    User defined
struct
class

    typdefs: Typedefs allow for creating new names (think of them as aliases) for existing types
typedef int counter;
counter tick_c = 100; // tick_c is a valid integer variable

    Enumerated types
enum: 
enum enum_name { list of names } var_list;
enum colour {red, green, blue} a_colour, another_colour;
a_colour = green;  // a_colour will be assigned value of '1'
*/


int main(){
    string x = "ex";
    char xAsChar = 'e';
    cout << x << endl;
    cout << xAsChar << endl;
    return 0;
}