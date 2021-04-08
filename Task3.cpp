#include <iostream>
using namespace std;
int main(){
    int el1, el2;
    cout << "How many elements for first array?";
    cin >> el1;
    cout << "How many elements for second array?";
    cin >> el2;
    int* arr1 = new int [el1];
    int* arr2 = new int [el2];
    cout << "Enter elements for the first array:" ;
    for (int i = 0; i<el1; i++){
        cin >> arr1[i];
    }
    cout << "Enter elements for the second array:" ;
    for (int i = 0; i<el2; i++){
        cin >> arr2[i];
    }
    int check = 0;
    int indexArr[50];
    int counter = 0;
    for(int i=0; i<el1; i++){
        check = 0;
        for(int j=0; j<el2; j++){
            if(arr1[i]==arr2[j]){
                check = 1;
            }
        }
        if(!check){
            indexArr[counter]=i;
            counter++;
        }

    }

    int* newArr = new int [counter];
    for (int i=0; i<counter; i++){
        newArr[i]=arr1[indexArr[i]];
    }

    for(int i = 0; i<counter; i++){
        cout << "елемент, який не присутній в іншому масиві  " << newArr[i] << endl;


    }

}
/* Перевірка
How many elements for first array?4
How many elements for second array?5
Enter elements for the first array:1 2 3 4
Enter elements for the second array:2 4 6 7 8
елемент, який не присутній в іншому масиві  1
елемент, який не присутній в іншому масиві  3
 */
