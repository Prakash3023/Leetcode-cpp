 //Final Prices With a Special Discount in a Shop

#include <iostream>
#include <vector>
using namespace std;

vector<int> finalPrices(vector<int>& prices) {
    for (int i = 0; i < prices.size(); i++) {
        int x = i + 1;
        while (x < prices.size() && prices[x] > prices[i]) {
            x++;
        }
        if (x < prices.size())
            prices[i] -= prices[x];
    }
    return prices;
}

int main() {
    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> result = finalPrices(prices);

    cout << "Final prices after discounts: ";
    for (int price : result) {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}
