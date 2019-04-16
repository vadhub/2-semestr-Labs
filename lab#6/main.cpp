#include <iostream>
#include <vector>

using namespace std;

class Multiplied{
private:
        int i, j;
        std::vector<float> num1;
        std::vector<float> num2;

        std::vector<float> list1;

        std::vector<float> multiply(std::vector<float> a, std::vector<float> b, std::vector<float> c){

        }


public:
        Multiplied(std::vector<float> listA, std::vector<float> listB, std::vector<float> result){};

        Multiplied operator* (Multiplied const& mlt) const{
        }
};

int main()
{

    cout << "Hello world!" << endl;
    return 0;
}
