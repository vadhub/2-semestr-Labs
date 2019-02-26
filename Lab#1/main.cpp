#include <iostream>

using namespace std;

int main()
{
    cout << "enter the num a column and row:\n";
    int numArray = 0;

    int n = 0, i,j, res = 0;

    float sum = 0, result = 0;
    float formul = 0;
    cin >> numArray;

    cout << "enter the n\n";

    cin >> n;

    formul = 2.0*n + 1.0;
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
            arrayB[i][j] = 0;
        }
    }

    //algot

    for(i = 1;i<=numArray;i++){
        for(j = 1;j<=numArray;j++){
            if(numArray == 0){
                arrayB[i][j] = 0;
            }else if(numArray==1){
                arrayB[i][j] = 1;
            }else{
                while(res<n){
                        sum = arrayA[i][j];
                    if(i>=0&&(i-res)>=0&&j>=0&&(j-res)>=0){ //left-up
                        sum += arrayA[i-res][j-res];

                    }else if(i>=0&&(i-res)>=0){ //up
                        sum += arrayA[i-res][j];

                    }else if(i>=0&&(i-res)>=0&&(j+res)<=numArray&&j<=numArray){ //right-up
                        sum += arrayA[i-res][j+res];

                    }else if(j>=0&&(j-res)>=0){ //left
                        sum += arrayA[i][j-res];

                    }else if(j<=numArray&&(j+res)<=numArray){//right
                        sum += arrayA[i][j+res];

                    }else if(i<=numArray&&(i+res)<=numArray&&j>=0&&(j-res)>=0){ //left-down
                        sum += arrayA[i+res][j-res];

                    }else if(i<=numArray&&(i+res)<=numArray){ //down
                        sum += arrayA[i+res][j];

                    }else if(i<=numArray&&(i+res)<=numArray&&j<=numArray&&(j+res)<=numArray){ //down-right
                        sum += arrayA[i+res][j+res];

                    }else {
                        arrayB[i][j] = sum;
                    }
                    res++;
                }
                arrayB[i][j] = sum / res;
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


