#include <iostream>
#include <time.h>
using namespace std;
int* prov(int* A, int* B, int size1, int size2)
{
	int* u;
	int i = 0;
	for (i = 0; i < size1; i++)
	{
		int j = i, k = 0;
		while (j < size1 && k < size2 && B[k] == A[j])
		{
			j++;
			k++;
		}
		if (k == size2)
		{
			return u = A + i;
		}
	
	}
	return 0; 
}
int main()
{
	srand(time(0));
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
		cin >> arr1[i];
	}
	cout << "-----------------------------------" << endl;
	cout << "ARRAY 2" << endl;
	cout << "-----------------------------------" << endl;
	for (size_t i = 0; i < size2; i++)
	{
		cin >> arr2[i];
	}
	cout << "-----------------------------------" << endl;
	cout << "RESULT" << endl;
	cout << "-----------------------------------" << endl;
	cout << "Resultat:" << *prov(arr1, arr2, size1, size2) << endl;

}