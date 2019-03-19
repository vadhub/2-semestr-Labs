#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Product{
       private: int countProduct;
       private: string nameProduct;
       private: double priceProduct;
       private: int countSoldProduct = 0;


        public: Product(int c, string name, double p){
            if(c<0){
                countProduct = 0;
            }else{
                countProduct = c;
            }
           nameProduct = name;

           if(p<0){
                priceProduct = 0;
           }else{

                priceProduct = p;
                p = price();
            }
       };

       //copy constructor
       public: Pruduct(Product & obj){
                private: int countProduct;
                private: string nameProduct;
                private: double priceProduct;
                private: int countSoldProduct = 0;
       }

       //destruct
       public: ~Product(){
            cout<<"destructor"<<endl;
       }

        public: Product(){ cout<<"constructor without parameters"<<endl;};

        public: void buy(){
            countProduct--;
            countSoldProduct++;
        }

         public: void pay(){
            countProduct++;
            countSoldProduct--;
        }

        public: void features(){
            cout<<"| "<<nameProduct<<" | "<<priceProduct<<" | "<<countProduct<< endl;
        }

        private: int price(){
            if(priceProduct>10&&countProduct>20){
               priceProduct = priceProduct * countProduct;
            }else{
                priceProduct=(priceProduct * countProduct)/4;
            }
            if(countProduct>300&&priceProduct>100&&countSoldProduct<100){
                priceProduct = priceProduct/2;
            }else{
                priceProduct = priceProduct+(priceProduct * 0.3);
            }
        }


};

int main()
{
    Product phones = Product(100, "Phones", 200);
    Product computers = Product(100, "Computers", 300);
    Product monic= Product(100, "Monitors", 400);

    for(int i = 0;i<3;i++){
        computers.buy();
    }
    //phones.pay();
    //phones.features();
    computers.features();
    //monic.features();

    return 0;
}
