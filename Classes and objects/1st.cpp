#include <iostream>
#include <string>
using namespace std;

class products
{
    public:
    string product_name;
    int price;
    string desc;
    string discount; 

    void inprice()
    {
        price += 100;
    }
    void diprice()
    {
        price -= 100;
    }
};

int main()
{
    products p1;
    p1.product_name = "Toy Car";
    p1.price = 199;
    cout << p1.price <<endl;
    p1.desc = "This is a toy car of supermario theme.";
    p1.discount = "30%";
    p1.inprice();

    cout << "The name of the product is: " << p1.product_name << endl;
    cout << "The price of the product is: " << p1.price << endl;
    cout << "The name of the product is: " << p1.product_name  << endl;
    cout << "The decription of the product is: " << p1.desc << endl;
    cout << "The price is discounted by: "<< p1.discount << endl;

    return 0;
}