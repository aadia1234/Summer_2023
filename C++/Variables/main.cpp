#include <iostream>
#include <climits>

using namespace std;

int main() {
    const double price_per_small_room {25.0}, price_per_large_room {35.0}, sales_tax_rate {0.06};
    double cost {0.0}, sales_tax {0.0};
    int number_of_small_rooms {0}, number_of_large_rooms {0}, estimate_expiry {30};

    cout << "Hello, welcome to Aadi's Carpet Cleaning Service" << endl << endl;

    cout << "Enter the number of small rooms you'd like cleaned: ";
    cin >> number_of_small_rooms;

    cout << "Enter the number of large room you'd like cleaned: ";
    cin >> number_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service: " << endl;
    cout << "=============================================" << endl;

    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    cost = (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms);
    sales_tax = cost * sales_tax_rate;

    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << sales_tax << endl;
    cout << "=============================================" << endl;

    cout << "Total estimate: $" << cost + sales_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
//    int room_width {412'323}, room_length {0};
//    const
//    cout << sizeof(double) << endl;
//
////    cout << "Enter the width of the room: ";
////    cin >> room_width;
////
////    cout << "Enter the length of the room: ";
////    cin >> room_length;
////
////    cout << "Your room has an area of: " << room_width * room_length << endl;
////

    return 0;
}