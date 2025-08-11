#include <iostream>
#include <cmath>
#include<math.h>

//Those two allows to use math functions like sqrt, pow, M_PI etc.

using namespace std;


int main() {

cout<<"Pi value: "<<M_PI<<endl;

    //NowI will raise the number to the power of 2 and 4
    
    cout<<pow(2,2)<<endl;

    cout<<pow(2,4)<<endl;

    //First number is the base and second is the exponent


    cout<<sqrt(16)<<endl;

    //This is a square root of 16

    cout<<endl;

    //Sometimes you will have number that is not whole number and you can round it
    //You can use round, ceil and floor functions

    float abc=5.7;

    cout<<"Round: "<<round(abc)<<endl; //Round will round the number to the nearest whole number
    cout<<"Ceil: "<<ceil(abc)<<endl; //Ceil will round the number UP to the nearest whole number
    cout<<"Floor: "<<floor(abc)<<endl; //Floor will round the number DOWN to the nearest whole number

 cin.ignore();
 cin.get();
return 0;
}