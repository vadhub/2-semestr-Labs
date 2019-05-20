#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    cout << "enter the array size:\n";
    int numArray = 0;

    int n = 0;

    double summator = 0, num= 0;
    int formul = 0;
    cin >> numArray;

    cout << "enter the n\n";

    cin >> n;

    formul = 2*n + 1;

    double **arrayA = new double *[numArray];
    double **arrayB = new double *[numArray];

    for (int i = 1; i<=numArray;i++){
        arrayA[i] = new double[numArray];
        arrayB[i] = new double[numArray];
    }

    std::cout << "enter the numbers:\n";
    for(int i = 1;i<=numArray;i++){
        for(int j = 1;j<=numArray;j++){
            std::cout << "array[" << i << "][" << j <<"]: ";
            std::cin >> arrayA[i][j];
        }
    }

    //algot

    for(int i = 1;i<=numArray;i++){
        for(int j = 1;j<=numArray;j++){
            summator = 0;
            num = 0;

            int top = i>n?i-n:1;
            int down = i<=numArray-n?i+n:numArray;

            int left = j>n?j-n:1;
            int right = j<=numArray-n?j+n:numArray;

            for(int k = top; k<=down;k++){
                for(int f = left; f<=right;f++){
                    summator += arrayA[k][f];
                }
            }

            arrayB[i][j] = summator/(formul*formul);

        }

    }

    for(int i = 1;i<=numArray;i++){
        for(int j = 1;j<=numArray;j++){
            std::cout<<setprecision(2)<<arrayB[i][j]<<"\t";
        }

        std::cout<<"\n";
    }

    for(int i = 1;i<=numArray;i++)
        delete[] arrayA[i];
    delete [] arrayA;

    for(int i = 1;i<=numArray;i++)
        delete[] arrayB[i];
    delete [] arrayB;

    cin.get();
    return 0;
}


