#include <iostream>
#include <set>
#include <vector>


using namespace std;

class Multiplied{

private:
        vector<int> vector_;
        set<int> set_;

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

       void setSet(const set<int> &s){
            set_ = s;
       }

        set<int> getSet(){
            return set_;
        }

        Multiplied operator * (Multiplied m1){
            Multiplied result;
            for(int i =0;i<vector_.size(); i++){
                for(int j =0;j<m1.vector_.size(); j++){
                    result.set_.insert(vector_[i] * m1.vector_[j]);
                }
            };
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
    ser2.push_back(8);

    Multiplied a(ser);
    Multiplied b(ser2);

    Multiplied c = b * a;

   for(set<int>::iterator it = c.getSet().begin(); it!=c.getSet().end(); ++it){
        cout<<*it<<" ";
   }

    cout << "Hello world!" << endl;
    return 0;
}
