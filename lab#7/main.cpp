#include <iostream>
#include <set>

using namespace std;

template<typename T>
class Set{
    private:
        set<T> a;

    public:

        Set(){}

        Set(set<T> a_){
            a= a_;
        };

//getter setter
        set<T> getSet(){
            return a;
        }

        void setSet(set<T> sett){
            a = sett;
        }

//overload operator
        Set<T> operator + (Set<T> s){

            Set result;
            result.a.insert(a.begin(), a.end());
            result.a.insert(s.a.begin(), s.a.end());

            return result;
        }

};

int main()
{
    set<int> s;
    set<int> s2;

    s.insert(1);
    s.insert(2);

    s2.insert(2);
    s2.insert(3);
    s2.insert(4);

    Set<int> a(s);
    Set<int> b(s2);

    Set<int> c = a + b;

    for(set<int>::iterator it = c.getSet().begin(); it!=c.getSet().end(); ++it){
        cout<<(*it)<<endl;
    }

    return 0;
}
