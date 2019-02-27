#include <iostream>

using namespace std;

int main()
{
    cout << "enter the array size:\n";
    int numArray = 0;

    int n = 0;
    int i =0, j = 0;
    int k = 0, g = 0;

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
                    for(g = 1; g<=formul; g++){
                        sum += arrayA[i][j];
                        if(i>1&&i<=numArray){
                            if(j>1&&j)
                            sum+=arrayA[i+k][j];

                        }else if(j>1&&j<=numArray){
                            sum+=arrayA[i][j+g];

                        }else if(j<=numArray&&j>1){
                            sum+=arrayA[i][j-g];

                        }else if(i<=numArray&&i>1){
                            sum+=arrayA[i-k][j];

                        }else{
                            sum += 0;
                        }
                        res++;
                    }
                }

                cout<<"a\n";

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

        cout<<"b\n";
     for(i = 1;i<=numArray;i++){
        for(j =1;j<=numArray;j++){
            cout << arrayB[i][j];

            cout << "\t";
        }
        cout << "\n";
    }

    return 0;
}


