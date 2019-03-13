#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Product{
       private: string nameProduct;
       private: int countProduct;
       private: int priceProduct;
       private: int countSoldProduct;
       private: string products[30];
       private: int index[countProduct];

       //constructors on all happen life

        public: Product(string nameprod, int countprod, int priceprod, int countSoldProd){
            nameProduct = nameprod;
            countProduct = countprod;
            priceProduct = priceprod;
            countSoldProduct = countSoldProd;
        };

        public: Product(string nameprod, int countprod, int priceprod){
            nameProduct = nameprod;
            countProduct = countprod;
            priceProduct = priceprod;
        };

        public: Product(string nameprod, int countprod){
            nameProduct = nameprod;
            countProduct = countprod;
        };

        public: Product(string nameprod){
            nameProduct = nameprod;
        };

        public: Product(int countprod){
            countProduct = countprod;
        };

        public: int PayProduct(){
            print("You bought "+ nameProduct + ": ");
            return countSoldProduct++;
        }

        public: int summPrice(){
            return countSoldProduct*priceProduct;
        }

        public: void Bought(){
            int i = 0;
            products[i] = nameProduct;
            i++;
        }

        private: void table(){
            cout<<"************************************";
            for(int i = 0;i<countProduct;i++){
                print();
            }
        }

        private: void print(string str){
            cout << str;
        }

};

int main()
{
    return 0;
}
