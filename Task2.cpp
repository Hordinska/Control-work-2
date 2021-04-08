#include <iostream>
using namespace std;

//// множення матриць
int main()
{
  cout << "Enter row and col: ";

  int n,m;
  cin >> n;
  m=n;
  int** matrix = new int* [n];

  //Read matrix
  for (int i = 0; i < n; i++)
  {
    matrix[i] = new int[m];
    for (int j = 0; j < m; j++)
    {
      cout << "Enter matrix[" << i << "]" << "[" << j << "]" <<"=" << "\t";
      cin >> matrix[i][j];
    }
  }



  //Print matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << matrix[i][j] << '\t';
    }
    cout << endl;
  }
  cout << endl;

  //Product matrix
    int** matrix3 = new int* [n];

    for (int i = 0; i < n; i++){
        matrix3[i] = new int[m];
        for (int j = 0; j < m; j++){
            matrix3[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            for (int k = 0; k < m; k++){
                matrix3[i][j] += matrix[i][k] * matrix[k][j];
            }
        }
    }

    cout << "matrix3: " << endl;

//Print matrix3
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << matrix3[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;

//Delete matrix3
    for (int i = 0; i < n; i++){
        delete[]matrix3[i];
    }
    delete[]matrix3;


  //Delete matrix
  for (int i = 0; i < n; i++)
  {
    delete[]matrix[i];
  }
  delete[]matrix;



  system("pause");
  return 0;

}
/*Перевірка:
Enter row and col: 3
Enter matrix[0][0]=	2
Enter matrix[0][1]=	2
Enter matrix[0][2]=	2
Enter matrix[1][0]=	1
Enter matrix[1][1]=	1
Enter matrix[1][2]=	1
Enter matrix[2][0]=	3
Enter matrix[2][1]=	3
Enter matrix[2][2]=	3
2	2	2
1	1	1
3	3	3

matrix3:
12	12	12
6	6	6
18	18	18

sh: pause: command not found

        Process finished with exit code 0
*/
