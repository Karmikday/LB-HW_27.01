#include <iostream>
#include <time.h>
using namespace std;
int null(int* arr, int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] = 0) 
		{
			counter++;
		}
	}
	return counter;
}
double otr(int* arr, int size)
{
	double count = 0;
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] < 0) 
		{
			count += 1;
		}
	}
	return count;
}
int pol(int* arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	srand(time(0));
	int size;
	cout << "Vvedite Size->";
	cin >> size;
	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 - 20;
	}
	cout << "Polozhytelnie znachenia - >" << pol(arr, size) << endl;
	cout << "Otricatelnie znachenia - >" << otr(arr, size) << endl;
	cout << "Nullevie znachenia - >" << null(arr, size) << endl;
}
