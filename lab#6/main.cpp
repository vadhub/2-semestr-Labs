#include <iostream>

using namespace std;

class Multiplied{
private:
        int i, sizeArray;

        float *arr = new float[syzeArray];

        void multiply(){
            for(i = 0;i<list1.size();i++){
                list_result[i] = list1[i]*list2[i];
            }
        }


public:
        Multiplied(std::list<float> listA, std::list<float> listB, std::list<float> result){
            listA = list1;
            listB = list2;
            result = list_result;
        };

        Multiplied operator* (Multiplied const& mlt) const{
        }
};

int main()
{

    cout << "Hello world!" << endl;
    return 0;
}
