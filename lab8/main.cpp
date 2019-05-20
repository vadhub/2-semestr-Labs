#include <iostream>
#include <math.h>

using namespace std;


class Figure{
public:
    virtual void inscribed() = 0;
};

class triangel :public Figure{
private:
    double a, b, c;
public:
    double getA(){
        if(a<0){
            cout<<a<<"< 0";
        }else{
            return a;
        }
    }

    void setA(double a_){
        if(a<0){
            cout<<a<<"< 0";
        }else{
            a = a_;
        }
    }

    double getB(){
        if(b<0){
            cout<<b<<"< 0";
        }else{
            return b;
        }
    }

    void setB(double b_){
        if(b_<0){
            cout<<b_<<"< 0";
        }else{
            b = b_;
        }
    }

    double getC(){
        if(c<0){
            cout<<c<<"< 0";
        }else{
            return c;
        }
    }

    void setC(double c_){
        if(c_<0){
            cout<<c<<"< 0";
        }else{
            c = c_;
        }
    }
    ~triangel(){
        cout<<"destructor";

    }

    triangel(double a_, double b_, double c_){
        if(a_<0){
            cout<<a_<<"< 0";
        }else{
            a = a_;
        }

        if(b_<0){
            cout<<b_<<"< 0";
        }else{
            b = b_;
        }

        if(c_<0){
            cout<<c_<<"< 0";
        }else{
            c = c_;
        }

    }

    void inscribed() override{
        double p = (a+b+c)/2;
        double r = sqrt(((p-a)*(p-b)*(p-c))/p);

        if((((p-a)*(p-b)*(p-c))/p)<0){
            cout<<((p-a)*(p-b)*(p-c))/p<<" < 0"<<"\n";
        }else{
            cout<<r<<" triangel"<<"\n";
        }
    }
};

class rectangle:public Figure{
private:
    double a, b, c, d;
    double angles[4];
public:
    setAngle(int index, double value){
        if(index>4||index<0){
            cout<<"index can be < 5 or > 0";
        }else{
            angles[index] = value;
        }
    }

    double getAngles(int index){
        if(index>3||index<0){
            cout<<"index can be < 5 or > 0";
        }else{
            return angles[index];
        }
    }

    double getA(){
        if(a<0){
            cout<<a<<"< 0";
        }else{
            return a;
        }
    }

    void setA(double a_){
        if(a<0){
            cout<<a<<"< 0";
        }else{
            a = a_;
        }
    }

    double getB(){
        if(b<0){
            cout<<b<<"< 0";
        }else{
            return b;
        }
    }

    void setB(double b_){
        if(b_<0){
            cout<<b_<<"< 0";
        }else{
            b = b_;
        }
    }

    double getC(){
        if(c<0){
            cout<<c<<"< 0";
        }else{
            return c;
        }
    }

    void setC(double c_){
        if(c_<0){
            cout<<c<<"< 0";
        }else{
            c = c_;
        }
    }

    double getD(){
        if(d<0){
            cout<<d<<"< 0";
        }else{
            return d;
        }
    }

    void setD(double d_){
        if(d<0){
            cout<<d<<"< 0";
        }else{
            d = d_;
        }
    }
    ~rectangle(){
        cout<<"destructor";

    }

    rectangle(double a_, double b_, double c_, double d_, double angle[]){
        if((a_ == c_)&&(b_ == d_)){
            if(a_<0){
                cout<<a_<<"< 0";
            }else{
                a = a_;
            }

            if(b_<0){
                cout<<b_<<"< 0";
            }else{
                b = b_;
            }

            if(c_<0){
                cout<<c_<<"< 0";
            }else{
                c = c_;
            }

            if(d_<0){
                cout<<d_<<"< 0";
            }else{
                d = d_;
            }

        }else{
            cout<<"radius no possible\n";
        }

        for(int i =0;i<4;i++){
                if(angle[i]>0){
                    angles[i] = angle[i];
                }else{
                    cout<<"radius no possible f\n";
                    break;
                }
        }

    }

    void inscribed() override{
        if(((angles[0]+angles[2]) == (angles[1]+angles[3]))&&((a==c)&&(b==d))){
            double p = a+b;
            double r = (a*b)/p;

            cout<<r<<" rectangle"<<"\n";
        }else{
            cout<<angles[0]+angles[2]<<"___"<<angles[3]+angles[1]<<endl;
            cout<<"radius no possible computing rectangle\n";
        }
    }

};

class pentagonal :public Figure{
private:
    double a;
public:

    double getA(){
        if(a<0){
            cout<<a<<"< 0";
        }else{
            return a;
        }
    }

    void setA(double a_){
        if(a<0){
            cout<<a<<"< 0";
        }else{
            a = a_;
        }
    }


    ~pentagonal(){
        cout<<"destructor";

    }

    pentagonal(double a_){
        if(a_<0){
            cout<<a_<<"< 0";
        }else{
            a = a_;
        }
    }

    void inscribed() override{
            double r = a/(2*tan(M_PI/5));

            cout<<r<<" pentagonal"<<"\n";
    }
};

class trapezium :public Figure{
private:
    const int size_ = 3;
    double a, b, c, d;
    double angles[4];
public:

    setAngle(int index, double value){
        if(index>4||index<0){
            cout<<"index can be < 5 or > 0";
        }else{
            angles[index] = value;
        }

        if(value<0){
            cout<<"value > 0";
        }else{
            angles[index] = value;
        }
    }

    double getAngles(int index){
        if(index>3||index<0){
            cout<<"index can be < 5 or > 0";
        }else{
            return angles[index];
        }
    }

    double getA(){
        if(a<0){
            cout<<a<<"< 0";
        }else{
            return a;
        }
    }

    void setA(double a_){
        if(a<0){
            cout<<a<<"< 0";
        }else{
            a = a_;
        }
    }

    double getB(){
        if(b<0){
            cout<<b<<"< 0";
        }else{
            return b;
        }
    }

    void setB(double b_){
        if(b_<0){
            cout<<b_<<"< 0";
        }else{
            b = b_;
        }
    }

    double getC(){
        if(c<0){
            cout<<c<<"< 0";
        }else{
            return c;
        }
    }

    void setC(double c_){
        if(c_<0){
            cout<<c<<"< 0";
        }else{
            c = c_;
        }
    }

    double getD(){
        if(d<0){
            cout<<d<<"< 0";
        }else{
            return d;
        }
    }

    void setD(double d_){
        if(d<0){
            cout<<d<<"< 0";
        }else{
            d = d_;
        }
    }

    ~trapezium(){
        cout<<"destructor";

    }

    trapezium(double a_, double b_, double c_, double d_, double angle[]){
        for(int i =0;i<4;i++){
                if(angle[i]>0){
                    angles[i] = angle[i];
                }else{
                    cout<<"radius no possible computing\n";
                    break;
                }
        }

        if(a_<0){
            cout<<a_<<"< 0";
        }else{
            a = a_;
        }

        if(b_<0){
            cout<<b_<<"< 0";
        }else{
            b = b_;
        }

        if(c_<0){
            cout<<c_<<"< 0";
        }else{
            c = c_;
        }

        if(d_<0){
            cout<<d_<<"< 0";
        }else{
            d = d_;
        }

    }

    void inscribed() override{
        if(angles[1]==angles[2]||angles[0]==angles[3]){
            if(b == d){
               double r = sqrt(a*c)/2;
               cout<<r<<" trapezium"<<"\n";
            }else{
                cout<<"radius no possible computing\n";
            }
        }else{
            cout<<"radius no possible computing\n";
        }
    }
};

int main()
{
    double angle1[] = {30, 40, 40, 30};
    double angle2[] = {30, 30, 40, 40};

    trapezium tr(1, 4, 3, 4, angle1);
    triangel tre(3, 6, 5);
    rectangle rec(3, 4, 3, 4, angle2);
    pentagonal pen5(3);

    tr.inscribed();
    tre.inscribed();
    rec.inscribed();
    pen5.inscribed();

    cout << "Hello world!" << endl;
    return 0;
}

