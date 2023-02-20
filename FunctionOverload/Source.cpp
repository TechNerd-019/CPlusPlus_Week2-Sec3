#include <iostream>

using namespace std;

// In C, you may not have two functions with the exact name. In C++, this is possible, by performing a function overload.

// In function overloading, the function does not care about the return type. It only cares about function signature.
// Function signature is comprised of: The amount of data being passed, and the datatype it is dealing with.

int sum(int x, int y)
{
	cout << "sum (int x, int y) is called " << endl;
	return x + y;
}

int sum(int x, int y, int z)
{
	cout << "sum (int x, int y, int z) is called " << endl;
	return x + y + z;
}

double sum(double x, double y)
{
	cout << "sum (double x, double y) is called " << endl;
	return x + y;
}

//double sum(double x, double y, double z = 1)
//{
//	return x + y + z;
//}

// Should there be a function that takes a defined value and the same amount of variables as another function, it results in both being
// qualified and the compiler not knowing which one to choose from. To fix this, either rename the function, or use a name space.
int main(void)
{
	cout << "Start..." << endl;

	int s1 = sum(5, 4);
	int s2 = sum(2, 3, 4);
	double s3 = sum(5, 6);
	//double s4 = sum(1, 3, 4);

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;

	return 0;
}