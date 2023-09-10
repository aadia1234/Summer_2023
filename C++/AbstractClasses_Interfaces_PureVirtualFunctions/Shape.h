#pragma once

class Shape { // Abstract base class (since everything is abstract this is also an interface)
    public:
        virtual void draw() = 0; // pure virtual function
        virtual void rotate() = 0; // pure virtual function
        virtual ~Shape();
};

class Open_Shape: public Shape { // Abstract class
    public:
        virtual ~Open_Shape();
};

class Closed_Shape: public Shape { // Abstract class
    public:
        virtual ~Closed_Shape();
};

class Line: public Open_Shape { // Concrete class
    public:
        virtual void draw() override;
        virtual void rotate() override;
        virtual ~Line();
};

class Circle: public Closed_Shape { // Concrete class
    public:
        virtual void draw() override;
        virtual void rotate() override;
        virtual ~Circle();
};

class Square: public Closed_Shape { // Concrete class
    public:
        virtual void draw() override;
        virtual void rotate() override;
        virtual ~Square();
};