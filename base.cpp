#include <iostream>
using namespace std;

int a;

/* int lets us define a variable that can hold integer values.
   In this case, 'a' is defined as an integer variable.
   The 'using namespace std;' line allows us to use standard library features and we don't have to prefix them with 'std::' every time.
   You can define the variable 'a' to hold a value in the same line as int or like me in another line but remember if you are going to
   put the value in another line it has to be in body - 'int main()'.
   The value of 'a' is set to 1.
   */

int main() {
    a = 1;
//'int main()' is our body that's where we type what we can see in terminal. 

cout <<a<<endl;
// 'cout' is used to output data to the standard output device (usually the screen).



 

 cin.ignore();
 cin.get();
    return 0;
}