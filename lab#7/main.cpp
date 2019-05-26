#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

#include <iterator>


using namespace std;

template<typename T>
class Set{
    private:
        set<T> a;

    public:

        Set(){}

        Set(set<T> _a){
            a= _a;
        }

//getter setter
        const set<T> &getSet(){
            return a;
        }

        void setSet(set<T> sett){
            a = sett;
        }

//overload operator
        Set<T> operator +(Set<T> s){

            Set result;

            result.a.insert(a.begin(), a.end());
            result.a.insert(s.a.begin(), s.a.end());

            return result;
        }

        Set<T> operator -(Set<T> s){

            Set result;
            vector<T> vec1(a.begin(), a.end());
            vector<T> vec2(s.a.begin(), s.a.end());
            vector<T> v;

            sort(vec1.begin(), vec1.end());
            sort(vec2.begin(), vec2.end());

            set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(v));

            result.a.insert(v.begin(), v.end());

            return result;
        }

};

int main()
{
    set<int> s;
    set<int> s2;

    s.insert(1);
    s.insert(2);
    s.insert(3);

    s2.insert(2);
    s2.insert(3);
    s2.insert(4);

    Set<int> a(s);
    Set<int> b(s2);

    Set<int> c = a + b;
    Set<int> d = a - b;

    cout<<d.getSet().size()<<endl;

    for(set<int>::iterator it = c.getSet().begin(); it!=c.getSet().end(); ++it){
        cout<<(*it)<<endl;
    }

    cout<<endl;

    for(set<int>::iterator it = d.getSet().begin(); it!=d.getSet().end(); ++it){
        cout<<(*it)<<endl;
    }

    return 0;
}
