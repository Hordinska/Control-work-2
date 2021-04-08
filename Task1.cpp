#include <iostream>
using namespace std;


void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";

}

void pushBinaryToBorder(int arr[], int n)

{

    int count1 = 0;


    for (int i = 0; i < n; i++)

        if (arr[i] != 1)

            arr[count1++] = arr[i];


    while (count1 < n)

        arr[count1++] = 1;

    int lastNonOne = 0;

    for (int i = n - 1; i >= 0; i--) {


        if (arr[i] == 1)

            continue;

        if (!lastNonOne) {
            lastNonOne = i;

        }

        if (arr[i] != 0)

            arr[lastNonOne--] = arr[i];

    }

    while (lastNonOne >= 0)

        arr[lastNonOne--] = 0;

}



int main(){

    int arr[] = { 1, 2, 0, 0, 0, 3, 6 };
    cout << " Посортований масив: ";

    int n = sizeof(arr) / sizeof(arr[0]);

    pushBinaryToBorder(arr, n);

    printArr(arr, n);

//Перевірка:
// Посортований масив: 0 0 0 2 3 6 1

    return 0;

}
