#include <iostream>
#include <time.h>
using namespace std;
void AddArr(int* arr,int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void ShowArr(int* arr,int size)
{
    cout << "Array:" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << ' ';
        cout << arr[i] << endl;
    }

}
void ShowArr2(int* arr, int size)
{
    int k;
    int* arr1 = new int[size + 1];
    cout << "Vvedite new elem:" << endl;
    cin >> k;
    for (size_t i = 0; i < size; i++)
    {
        arr1[i] = arr[i];
    }
    delete[] arr;
    arr1[size] = k;
    for (size_t i = 0; i < size + 1; i++)
    {
        cout << ' ';
        cout << arr1[i];    
    }
    delete[] arr1;

}
int main()
{
        srand(time(0));
        int num;
        int size;
        cout << "Vvedite Size - >";
        cin >> size;
        int* arr = new int[size];  
        AddArr(arr, size);
        ShowArr(arr, size);
        ShowArr2(arr, size);
}