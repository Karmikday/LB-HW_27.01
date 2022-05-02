#include <iostream>
#include <time.h>
using namespace std;
void Show(int* arr,int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << ' ';
		cout << arr[i] << endl;
	}
}
void ADD(int* arr,int size,int num)
{
	int value;
	for (int i = 0; i < size; i++) 
	{
		if (i == num) 
		{
			size++;
			for (int j = size - 1; j > i + 1; j--) 
			{

				arr[j] = arr[j - 1];
			}
			cout << "VVedite New Element ->";
			cin >> value;
			arr[i] = value;  
			i++;
		}
	}
}
int main()
{
	system("color 6");
	srand(time(0));
	int size;
	int num;
	cout << "Vvedite size - >";
	cin >> size;
	int p = size;
	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	Show(arr, size);
	cout << "Posle kakogo chisla nado vstavit num - >";
	cin >> num;
	ADD(arr, size, num);
	Show(arr, size);
	cout << endl;	

}