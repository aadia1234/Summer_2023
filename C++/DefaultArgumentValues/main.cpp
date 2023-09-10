#include <iostream>
#include <iomanip>
using namespace std;

double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50); // default parameters must be on the tail end
// double calc_cost(double base_cost = 100.0, double tax_rate, double shipping = 3.50); --> throws an error because tax_rate must have a default value

int main() {
    double cost {0};

    cout << fixed << setprecision(2);
    
    cost = calc_cost(100.0, 0.08, 4.25); // will use no defaults: 100 + 8 + 4.25
    cout << "Cost is: $" << cost << endl; // $112.25

    cost = calc_cost(100.0, 0.08); // will use default shipping: 100 + 8 + 3.50
    cout << "Cost is: $" << cost << endl; // $111.50

    cost = calc_cost(200.0); // will use default tax and shipping: 200 + 12 + 3.50
    cout << "Cost is: $" << cost << endl; // $215.50

    cost = calc_cost(); // will use default base cost, tax, and shipping: 100.0 + 6 + 3.50
    cout << "Cost is: $" << cost << endl; // $109.50
    cout << endl;
    return 0;

}

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}
