#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

using namespace std;

class Product{
       private: string nameProduct;
       private: int countProduct = 10;
       private: int priceProduct;
       private: int countSoldProduct;
       private: string products[30];

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

        /*private: string convector(int intor){
                std::string s = std::to_string(intor);
                return s;
        }*/

        private: void table(){
            print("************************************");
                std::string stRpriceProduct = std::to_string(priceProduct);
                std::string stRCountProduct = std::to_string(countProduct);
            for(int i = 0;i<countProduct;i++){
                    std::string strI = std::to_string(i);
                print("* " + strI + " * "+ nameProduct + " * " + stRPriceProduct + " * "+stRCountProduct+" *");
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
