#include <iostream>

using namespace std;

int main()
{
    cout << "enter the num a column and row:\n";
    int numArray = 0;

    int n = 0;
    int i =0, j = 0;
    int k = 0, f = 0;

    float sum = 0, result = 0, res = 0;
    int formul = 0;
    cin >> numArray;

    cout << "enter the n\n";

    cin >> n;

    formul = 2*n + 1;
    cout<<formul;
    float **arrayA = new float *[numArray];
    float **arrayB = new float *[numArray];

    for (i = 1; i<=numArray;i++){
        arrayA[i] = new float[numArray];
        arrayB[i] = new float[numArray];
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
                for(k = 1;k<=formul;k++){
                    for(f = 1; f<=formul; f++){
                        sum += arrayA[i][j];
                        if(i>1&&i<numArray&&js){
                            sum+=arrayA[i+k][j];
                            res++;
                        }else if(j>1&&j<numArray){
                            sum+=arrayA[i][j+f];
                            res++;
                        }else if(j<numArray&&j>1){
                            sum+=arrayA[i][j-f];
                            res++;
                        }else if(i<numArray&&i>1){
                            sum+=arrayA[i-k][j];
                            res++;
                        }else{
                            sum+=0;
                        }
                    }
                }

                if(res>0){
                    arrayB[i][j] = sum /res;
                    sum = 0;
                    res = 0;
                }else {
                    arrayB[i][j] = 0;
                    sum = 0;
                }
        }
    }


     for(i = 1;i<=numArray;i++){
        for(j =1;j<=numArray;j++){
            cout << arrayB[i][j];

            cout << "\t";
        }
        cout << "\n";
    }

    return 0;
}


