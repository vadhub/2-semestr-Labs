#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

class Product{
       private: int countProduct;
       private: string nameProduct;
       private: double priceProduct;
       private: int countSoldProduct;

       public: Product(int c, string name, double p, int sl){
           countProduct = c;
           nameProduct = name;
           priceProduct = p;
           countSoldProduct = sl;
       };

        public: Product(int c, string name, double p){
           countProduct = c;
           nameProduct = name;
           priceProduct = p;
       };

        public: Product(int c, string name){
           countProduct = c;
           nameProduct = name;
       };

       //copy constructor
       public: Pruduct(Product & obj){

       }

       //destruct
       ~public: Pruduct(){

       }

        public: Product(string name){
           nameProduct = name;
       };

        public: Product(int c){
           countProduct = c;
       };

        public: Product(){};

        public: void buy(){
            countProduct--;
            countSoldProduct++;
        }

         public: void pay(){
            countProduct++;
            countSoldProduct--;
        }

        public: void features(){
            cout<<"* "<<nameProduct<<" * "<<priceProduct<<" * "<<countProduct;
        }

        private: int price(){
            if(priceProduct>10&&countProduct>20){
               priceProduct = priceProduct * countProduct;
            }else{
                priceProduct = (priceProduct * countProduct)/4;
            }

            if(countProduct>300&&priceProduct>100){
                priceProduct = priceProduct/2;
            }
        }


};

int main()
{

    return 0;
}
