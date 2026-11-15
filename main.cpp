#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // Car-olio pinomuistissa
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2020);
    myCar.printData();

    cout << endl;

    // Rectangle-olio kekomuistissa
    Rectangle* myRectangle = new Rectangle;
    myRectangle->setWidth(5.0);
    myRectangle->setHeight(3.0);

    cout << "Area: " << myRectangle->getArea() << endl;
    cout << "Circumference: " << myRectangle->getCircum() << endl;

    delete myRectangle;

    cout << endl;

    // Student-olio smart pointerilla
    unique_ptr<Student> myStudent = make_unique<Student>();

    myStudent->setName("Matti Meikalainen");
    myStudent->setStudentNumber(12345);
    myStudent->setAverage(4.5);

    cout << "Name: " << myStudent->getName() << endl;
    cout << "Student number: " << myStudent->getStudentNumber() << endl;
    cout << "Average: " << myStudent->getAverage() << endl;

    return 0;
}
