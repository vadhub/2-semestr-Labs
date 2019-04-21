#include <iostream>

using namespace std;

class Multiplied{
private:
        int i, length;

        float arr[] = float[length];

public:
        Multiplied(int length, float *arr){
            length = length;
            arr = arr;
        };

        friend Multiplied operator* (Multiplied& mlt1, Multiplied& mlt2){
            return Multiplied(mlt1.arr * mlt2.arr);
        }
};

int main()
{

    cout << "Hello world!" << endl;
    return 0;
}
