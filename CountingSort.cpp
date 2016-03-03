#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int k;
    cout << "Enter the upper limit on the entries to be sorted (all elements will be between 0 and upper_limit-1, both inclusive) : ";
    cin >> k;

    int* arr = new int[k];
    for (int i = 0; i < k; i++)
    {
        arr[k] = 0;
    }
    char c = 'n';
    int input;
    do {
        cout << endl << "Enter element : ";
        cin >> input;
        arr[input]++;
        cout << endl << "Do you want to enter another element ? ";
        cin >> c;
    } while (c == 'y' || c == 'Y');

    cout << endl << endl;

    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j <= arr[i]; j++)
        {
            cout << i << endl;
        }
    }
    delete[] arr;
    _getch();
    return 0;
}