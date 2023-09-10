#include <iostream>

using namespace std;

double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

const double pi {3.14159};


int main() {
    area_circle();
    volume_cylinder();
    return 0;
}


double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius {0.0};
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle with radius" << radius << "is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {0.0}, height {0.0};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "\nThe volume of a cylinder with radius" << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}