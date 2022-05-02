#include <iostream>
#include <time.h>
using namespace std;
void RemNeg(int* arr,int size)
{
	int* k = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = 0;
		}
	}
	for (int i = 0; i < size; i++)
	{
			 cout << i + 1 << " : ";
			 cout << arr[i] << endl;
	}
	
}
int main()
{
	srand(time(0));
	int size;
	cout << "Vvedite Size - >";
	cin >> size;
	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 25 - 10;
		cout << arr[i] << endl;
	}
	RemNeg(arr,size);


}