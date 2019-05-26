#include <iostream>
#include <set>
#include <vector>


using namespace std;

class Multiplied{

private:
        vector<int> vector_;
public:

        Multiplied(){}

        Multiplied(vector<int> vec){
            vector_ = vec;
        };

        void setVector(vector<int> vec){
            vector_ = vec;
        }

        vector<int> getVector(){
            return vector_;
        }

       Multiplied operator * (Multiplied m1){

           //избавиться от лишних полей
           set<int> set_;
            Multiplied result;
            for(int i =0;i<vector_.size(); i++){
                for(int j =0;j<m1.vector_.size(); j++){
                    set_.insert(m1.vector_[j] * vector_[i]);
                }
            };
            result.vector_.assign(set_.begin(), set_.end());
            return result;
    }
};


int main()
{
    vector<int> ser;
    vector<int> ser2;

    ser.push_back(1);
    ser.push_back(2);
    ser.push_back(3);


    ser2.push_back(4);
    ser2.push_back(5);
    ser2.push_back(6);


    Multiplied a(ser);
    Multiplied b(ser2);

    Multiplied c = a * b;

   for(int i =0; i<c.getVector().size(); i++){
        cout<<c.getVector()[i]<<' ';
   }

    cout << "Hello world!" << endl;
    return 0;
}
