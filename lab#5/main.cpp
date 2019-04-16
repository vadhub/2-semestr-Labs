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
            return v;
        }


        void setV(double sA){
            a = sA;
        }

        double getV0(){
            return v;
        }


        void setV(double sV0){
           v0 = sV0;
        }

        public: ~PhysicalBody(){
            cout<<"destructor"<<endl;
        }

        public: PhysicalBody(const PhysicalBody &physicalBody): v(physicalBody.v), a(physicalBody.a), v0(physicalBody.v0){};

        PhysicalBody(double vs, double as, double v0s){
            v = vs;
            a = as;
            v0a = v0;
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
