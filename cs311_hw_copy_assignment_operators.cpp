#include <iostream>
using namespace std;

class CarCounter {
public:
    CarCounter();
    ~CarCounter();
    CarCounter& operator=(const CarCounter& objToCopy);
    void SetCarCount(const int setVal) {
        *carCount = setVal;
    }
    int GetCarCount() const {
        return *carCount;
    }
private:
    int* carCount;
};

CarCounter::CarCounter() {
    carCount = new int;
    *carCount = 0;
}

CarCounter::~CarCounter() {
    delete carCount;
}

// FIXME write copy assignment operator



//////////////////////////////////////////////////////////
/* Your solution goes here  */
CarCounter& CarCounter::operator=(const CarCounter& objToCopy)
{
    int* temp = new int;  // Create new dynamic array to copy to

    *temp = *objToCopy.carCount;  // Copy values from object to the dereferrenced array.
    delete this->carCount;        // Delete/recycle memory from the calling object

    this->carCount = temp;        // member variable(s) address equal to the dynamic array address we created.

    return *this;  // Return object.
}

////////////////////////////////////////////////////////////



int main() {
    CarCounter frontParkingLot;
    CarCounter backParkingLot;
    int count;

    cin >> count;

    frontParkingLot.SetCarCount(count);
    backParkingLot = frontParkingLot;

    cout << "Cars counted: " << backParkingLot.GetCarCount();

    return 0;
}