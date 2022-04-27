#include <iostream>
#include <time.h>
using namespace std;
void Fun(int* arr, int size, int* sum, long long* umno)
{
	for (size_t i = 0; i < size; i++)
	{
		*sum += arr[i];
	}
	cout << "Sum: " << *sum << endl;
	for (size_t i = 0; i < size; i++)
	{
		*umno *= arr[i];

		cout << *umno << endl;
	}
	cout << "Umnozhenie: " << *umno << endl;

}
int main()
{
	srand(time(0));
	int size;
	int sum = 0;
	long long umno = 1;
	int* p_sum = &sum;
	long long* p_umno = &umno;
	cout << "Vvedite size->";
	cin >> size;
	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
	Fun(arr, size, p_sum, p_umno);

}