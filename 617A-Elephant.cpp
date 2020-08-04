// this question is relatively simple.
#include <iostream> // header
using namespace std; // no need for redundancy
 
int main()
{
    int a;
    cin >> a;
    if (a % 5 == 0) // if divisible by 5, we can just figure out the number by dividing by 5.
        cout << a / 5;
    else  // if NOT divisible by 5, we can just figure out the number by dividing by 5 and adding 1. Remember, dividing an int by and int will result in an integer (without the decimal). So we can just add 1..
        cout << (a / 5) + 1;
}
