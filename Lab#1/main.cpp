#include <iostream>

using namespace std;

int main()
{
    cout << "enter the num a column and row:\n";
    int numArray = 0;

    int n = 0, i,j,kx = 0,ky = 0;

    float sum = 0, res = 0, result = 0;
    int formul = 0;
    cin >> numArray;

    cout << "enter the n\n";

    cin >> n;

    formul = 2*n + 1;
    float **arrayA = new float *[numArray];
    float **arrayB = new float *[formul];
    for (i = 1; i<=numArray;i++){
        arrayA[i] = new float[numArray];
        arrayB[i] = new float[formul];
    }
    cout << "enter the numbers:\n";
    for(i = 1;i<=numArray;i++){
        for(j = 1;j<=numArray;j++){
            cout << "array[" << i << "][" << j <<"]: ";
            cin >> arrayA[i][j];
        }
    }

    //algot

    for(i = 1;i<=numArray;i++){
        for(j = 1;j<=numArray;j++){

        }
    }
    cout <<result <<"\n";

     for(i = 1;i<=numArray;i++){
        for(j =1;j<=numArray;j++){
            cout << arrayB[i][j];

            cout << "\t";
        }
        cout << "\n";
    }

    return 0;
}


