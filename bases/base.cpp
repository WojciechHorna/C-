// The 'iostream' library is included to allow input and output operations.
// It provides functionalities for reading from and writing to the standard input and output streams.
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

cout << "Hello World!" << endl;

cout <<a<<endl;
// 'cout' is used to output data to the standard output device (usually the screen).

int x;
cin>>x;
// 'cin' is used to take input from the user.

cout<<x<<endl;

// This will output the value of 'x' that was input by the user.

cout<<endl<<endl;
 

 cin.ignore();
 cin.get();
 // Those last two lines are used to pause the program so that the console window doesn't close immediately after displaying the output.
    return 0;
}