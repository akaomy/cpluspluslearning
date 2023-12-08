#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product {
    public:
    void SetPriceAndName(int productPrice, string productName) {
         price = productPrice;
         name = productName;
    }
    int GetPrice() const { return price; };
    string GetName() const { return name; };

    private:
      int price;
      string name;
};

int main () {
    vector<Product> productList;
    
    Product currentProduct;
    Product resultingProduct;

    int currentPrice;
    string currentName;
    unsigned int i;

    cin >> currentPrice;
    while(currentPrice > 0) {
        cin >> currentName;
        currentProduct.SetPriceAndName(currentPrice, currentName);
        productList.push_back(currentProduct);
        cin >> currentPrice;
    }

    resultingProduct = productList.at(0);
    for (i = 0; i < productList.size(); ++i) {
        if (productList.at(i).GetPrice() > resultingProduct.GetPrice()) {
            resultingProduct = productList.at(i);
        }
    }

    cout << resultingProduct.GetName() << ": " << resultingProduct.GetPrice() << endl;

};