#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float average(float num, float sum){
    return sum/num;
}

int main()
{
    cout << "enter the array size:\n";
    int numArray = 0;

    int n = 0;

    float summator = 0, num= 0, res = 0;
    int formul = 0;
    cin >> numArray;

    cout << "enter the n\n";

    cin >> n;

    formul = 2*n + 1;
    cout<<formul;
    float **arrayA = new float *[numArray];
    float **arrayB = new float *[numArray];
    float **arraySmall = new float *[formul];

    for (int i = 0; i<numArray;i++){
        arrayA[i] = new float[numArray];
        arrayB[i] = new float[numArray];
    }

    for(int i = 0; i< formul; i++){
        arraySmall[i] = new float[numArray];
    }
    std::cout << "enter the numbers:\n";
    for(int i = 0;i<numArray;i++){
        for(int j = 0;j<numArray;j++){
            std::cout << "array[" << i << "][" << j <<"]: ";
            std::cin >> arrayA[i][j];
        }
    }

    //algot

    for(int i = 0;i<numArray;i++){
        for(int j = 0;j<numArray;j++){

                for(int k = -formul;k<0;k++){
                    for(int f = -formul; f<0; f++){
                        summator += arrayA[k][f];
                        num++;
                    }
                }
                arrayB[i][j] = average(num, summator);
        }

    }

     for(int i = 0;i<numArray;i++){
        for(int j =0;j<numArray;j++){
            std::cout<< std::setprecision(5)<< arrayB[i][j];
        }

        std::cout<<"\n";
    }

    return 0;
}


