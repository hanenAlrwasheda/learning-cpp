#include <iostream>
using namespace std; //it can be deleted
/*
Every C++ program uses libraries, which give the ability to execute necessary functions. For example,
the most basic function called 'cout', which prints to the screen, is defined in the iostream header file.

To add the ability to run the cout command to our program, we must add following include directive to our first line of the code:

#include <iostream>
using namespace std;
*/
int main(){
    cout << "Hello World now!" << endl;
    //if using namespace std did not exist we would use:
    //std::cout << "Hello World now!" << std::endl;
    return 0;
}