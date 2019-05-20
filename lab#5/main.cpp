#include <iostream>

using namespace std;

class PhysicalBody{
    private:
        double v;
        double a;
        double v0;

        //t = (v - v0)/a

    public:
        double getV(){
            return v;
        }

        void setV(double sV){
           v = sV;
        }

        double getA(){
            return a;
        }


        void setA(double sA){
            a = sA;
        }

        double getV0(){
            return v0;
        }


        void setV0(double sV0){
           v0 = sV0;
        }

        public: ~PhysicalBody(){
            cout<<"destructor";
        }

        public: PhysicalBody(const PhysicalBody &physicalBody): v(physicalBody.v), a(physicalBody.a), v0(physicalBody.v0){};

        PhysicalBody(double vs, double as, double v0s){
            v = vs;
            a = as;
            v0s = v0;
        }

        double timeAcc(){
            return v0/a;
        }

        double timeAcc(double vs){
            return (vs-v0)/a;
        }


};

int main()
{
    double v = 1.2;
    double a = 1.1;
    double v0 = 10;

    double time;

    PhysicalBody pb = PhysicalBody(v, a, v0);
    time = pb.timeAcc(v);
    std::cout<<"Time acceleration "<<time<<std::endl;
    return 0;
}
