#include <iostream>
#include <vector>
#include "Shape.h"

using namespace std;

void screen_refresh(const vector<Shape*>& shapes);

int main() {
    // These are abstract classes so compiler will throw an error
    // Shape s;
    // Shape* p = new Shape();
    // Open_Shape os;
    // Closed_Shape cs;

    Shape* shape_ptr = new Circle();
    shape_ptr->draw();
    shape_ptr->rotate();

    Shape* s1 = new Circle();
    Shape* s2 = new Line();
    Shape* s3 = new Square();


    vector<Shape*> shapes {s1, s2, s3};

    screen_refresh(shapes);

    cout << endl;

    delete shape_ptr;
    delete s1;
    delete s2;
    delete s3;

    return 0;
}

void screen_refresh(const vector<Shape*>& shapes) {
    cout << "Refreshing" << endl;
    for (const auto p : shapes) {
        p->draw();
    }
}