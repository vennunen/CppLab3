#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
        cout << "Car " << brand << " from " << year << " created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car " << brand << " destroyed." << endl;
    }

    void showInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    // Creating object on the heap
    Car* myCar = new Car("Toyota", 2020);

    // Using the showInfo() method
    myCar->showInfo();

    // Deleting object (calls destructor)
    delete myCar;

    return 0;
}
