//Interesting stuff about this problem:
//This is a triangular sequence. Sum can be expressed as n(n+1)/2 where n is the number of anything (cubes in this scenario)

#include <iostream>  //default header
using namespace std; //namespace so no use for redundant std::


int main() // initalize
{
    int total, rows = 0, complete = 1;  // Total = number of cubes. Rows = number of rows. Complete is the number by which i, or the decrementing number, will increase by.
    cin >> total; // input
    for (int i = 1; i <= total; i += complete) // Possible to use a while loop but i detest every while loop. i in here is going to directly influence the total cubes.
    { // it is necessary to set to 1 because of the possibility of only having 1 cube. i must be less than or equal to the total cubes (because we wouldn't want a negative number!), 
        rows++;  //add a row.
        total -= i; // subtract cubes from the total by the number of cubes already used in the previous row..
        if (total < 0) {
            rows--;  //necessary in case total goes into the negatives and you accidently add a row which was actually un-needed.
        }
        complete++; // Increment the decrementing number. 
        
    }
    cout << rows;
}

