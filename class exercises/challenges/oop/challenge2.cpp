#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Product {
    private:
        int price;
        string name;
    public:
        void SetNameAndPrice(int productPrice, string productName) {
            price = productPrice;
            name = productName;
        }
        int GetPrice() const { return price; }
        string GetName() const { return name; }
};

class Products {
    public:
        void InputProducts();
        void PrintAfterDiscount(int discountPrice);
    private:
        vector<Product> productList;
};

void Products::InputProducts() {
    Product currentProduct;
    int currentPrice;
    string currentName;

    cout << "Enter price and name of the product in one line separated by space. -1 to end the input. " << endl;
    cin >> currentPrice;
    while(currentPrice > 0) {
        cin >> currentName;
        currentProduct.SetNameAndPrice(currentPrice, currentName);
        productList.push_back(currentProduct);
        cin >> currentPrice;
    }
}

void Products::PrintAfterDiscount(int discountPrice) {
    unsigned int i;
    int currentDiscountPrice;

    for (i = 0; i < productList.size(); ++i) {
        currentDiscountPrice = productList.at(i).GetPrice() - discountPrice;
        cout << "$" << currentDiscountPrice << " " << productList.at(i).GetName() << endl;
    }
}

int main() {
    Products allProducts;

    allProducts.InputProducts();
    allProducts.PrintAfterDiscount(2);

    return 0;
};