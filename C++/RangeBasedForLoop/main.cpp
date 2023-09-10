#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int scores[] {100, 90, 97};


    //compiler detects that score should be of type int!
    for (auto score : scores) {
        cout << score << endl;
    }


    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double average_temp {0}, total {0};

    for (auto temp : temperatures) {
        total += temp;
    }

    average_temp = temperatures.size() > 0 ? total / temperatures.size() : 0;

    cout << fixed << setprecision(1) << "Average temperature: " << average_temp << endl;

    return 0;
}