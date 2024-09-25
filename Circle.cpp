#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    // Constructor to initialize the radius
    Circle(double r) : radius(r) {}

    // Function to calculate the area of the circle
    double area() const {
        return M_PI * radius * radius; // Area = π * r^2
    }

    // Function to calculate the circumference of the circle
    double circumference() const {
        return 2 * M_PI * radius; // Circumference = 2 * π * r
    }

    // Function to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Function to get the radius
    double getRadius() const {
        return radius;
    }
};

int main() {
    double r;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    Circle circle(r);

    std::cout << "Area of the circle: " << circle.area() << std::endl;
    std::cout << "Circumference of the circle: " << circle.circumference() << std::endl;

    return 0;
}
