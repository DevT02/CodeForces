#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
 
using namespace std;
 
int mod = 1073741824;
long arr[1231231];
int main()
{
	long sum = 0;
	for (int i = 1; i < 1231231; i++)
		for (int j = i; j < 1231231; j += i)
			arr[j]++;
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				for (int k = 1; k <= c; k++)
				{
					sum += arr[i * j * k];
 
				}
			}
		}
		if (sum > mod)
		{
			sum %= mod;
		}
		cout << sum;
	}
 
}
