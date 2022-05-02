#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Vvdeite size - > ";
    cin >> size;
    int* arr = new int[size];
    cout << "Arr: ";
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }
    cout << endl;
 int index;
 cout << "Vvedite index ellemnta kotor nado delete - >";
 cin >> index;
    index--;
    for (int i = index; i < size - 1; ++i)
        arr[i] = arr[i + 1];
    size--; 

        cout << "After deleting: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";

}