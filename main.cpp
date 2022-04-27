#include <iostream>
#include <time.h>
using namespace std;
int proverca(int* arr1,int* arr2,int size1,int size2)
{
	int u = 0; 
	int i = 0;
	for (i = 0; i < size1; i++)
	{
		int j = i, k = 0;
		while (j < size1 && k < size2 && arr2[k] == arr1[j])
		{
			j++;
			k++;
		}
		if (k == size2)
		{
			u = arr1 + i;
			return u;
		}
	}
	return 0;
}
int main()
{
	int size1,size2;
	cout << "Vvedite size 1 - >";
	cin >> size1;
	cout << "Vvedite size 2 - >";
	cin >> size2;
	int* arr1 = new int[size1];
	int* arr2 = new int[size2];
	cout << "-----------------------------------" << endl;
	cout << "ARRAY 1" << endl;
	cout << "-----------------------------------" << endl;
	for (size_t i = 0; i < size1; i++)
	{
		arr1[i] = rand() % 20;
		cout << arr1[i] << endl;
	}
	cout << "-----------------------------------" << endl;
	cout << "ARRAY 2" << endl;
	cout << "-----------------------------------" << endl;
	for (size_t i = 0; i < size2; i++)
	{
		arr2[i] = rand() % 20;
		cout << arr2[i] << endl;
	}
	cout << "-----------------------------------" << endl;
	cout << "RESULT" << endl;
	cout << "-----------------------------------" << endl;
	cout << "Resultat:" << proverca(arr1, arr2, size1, size2) << endl;

}