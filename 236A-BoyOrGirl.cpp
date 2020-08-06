#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
 
using namespace std;
 
 
string replaceString(string s) {
    s.erase(std::unique(s.begin(), s.end()), s.end()); // remove element with characters repeated
    return s;
}
int main()
{
    string n;
    cin >> n;
    sort(n.begin(), n.end()); // sort array so consecutive letters can get removed.
    n = replaceString(n);
    if (n.length() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
 
}
