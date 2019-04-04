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
                summator = arrayA[i][j];
                num = 0;
                for(int k = 0;k<formul;k++){
                    for(int f = 0; f<formul; f++){

                        if(((i-n)+k)<numArray &&((i-n)+k)>0){
                            summator += arrayA[((i-n)+k)][j-n];
                            num++;
                        }else if(((j-n)+f)<numArray && ((j-n)+f)>0){
                            summator += arrayA[i-n][((j-n)+f)];
                            num++;
                        }else if((i-n)>0&&(j-n)>0){
                            summator += arrayA[i-n][j-n];
                            num++;
                        }else{
                            summator+=0;
                        }
                    }
                }

                res = summator/num;
                arrayB[i][j] = res;

        }

    }
    std::cout<<"\n";

     for(int i = 0;i<numArray;i++){
        for(int j =0;j<numArray;j++){
            std::cout<<setprecision(2)<<arrayB[i][j]<<" ";
        }

        std::cout<<"\n";
    }

    return 0;
}


