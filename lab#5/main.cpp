#include <iostream>

using namespace std;

class PhysicalBody{
    private:
        double v;
        double a;
        double v0;

        //t = (v - v0)/a

    public:
        PhysicalBody(double vs, double as, double v0s){
            vs = v;
            as = a;
            v0 = v0s;
        }

        double timeAcc(double vs, double as){
            return vs/as;
        }

        double timeAcc(double v0s, double as, double vs){
            return (vs-v0s)/as;
        }


};

int main()
{

    return 0;
}
