
#include <iostream>
using namespace std;

void allCalc(int a, int b, int* psum, int* psub, int* pmlt, int* pdev)
{
	*psum = a + b;
	*psub = a - b;
	*pmlt = a * b;
	*pdev = a / b;
}



int main()
{
	allCalc(4, 5, &sum, &sub, &mlt, &dev);

	cout << sum << endl;
	cout << sub << endl;
	cout << mlt << endl;
	cout << dev << endl;
}
