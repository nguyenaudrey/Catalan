/*
* Student: Audrey Nguyen
* Professor: Robert Dimpsey
* Assignment #2: Catalan
* Description: A function for calculating catalan numbers
*/

#include <iostream>
using namespace std;

int calculateCatalan(int n);

/*
* Calculates the catalan number recursivley.
* Will return -1 in the case of an invalid parameter input
* C(n) = (2n)!/(n!(n+1)!)
*/
int calculateCatalan(int n)
{
	if (n <= 1 && n >= 0 ) {
		return 1;
	}
	else if (n > 1)
	{
		int result = 0;
		for (int i = 1; i <= n; i++) {
			result += calculateCatalan(i-1) * calculateCatalan(n - i);
		}
		return result;
	}
	else 
	{
		cerr << "Invalid input" << endl;
		return -1;
	}
}

int main(int argc, char * argv[])
{
	int num = 0;
	if (argc != 2)
	{
		cerr << "Usage Error" << endl;
		return -1;
	}

	num = atoi(argv[1]);
	cout << calculateCatalan(num) << endl;

	return 0;
}
