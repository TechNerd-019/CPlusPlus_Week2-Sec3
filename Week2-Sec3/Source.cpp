#include <iostream>
using namespace std;

void increment(int&); /*or void increment(int*);*/

int main(void)
{
	cout << "Start..." << endl;

	int num = 5;
	increment(num); /*or increment (&num);*/
	cout << num;
	
	return 0;
}

//void increment(int* num)
//{
//	/**num++ = *num + 1;*/  /*or*/ (*num)++;
//
//	
//}

// or 
void increment(int &num)
{
	num++;
}