#include <iostream>
using std::cout;
using std::endl;

class MyVector {
private:
    int _size;
    int _capacity;
    int* _pa;
    void _doubleCapacity() {
        int* temp = new int[_capacity * 2];
        for (int i = 0; i < _size; ++i) {
            temp[i] = _pa[i];
        }
        delete[] _pa;
        _capacity *= 2;
        _pa = temp;
    }

public:
    // TODO: implement required member functions here
    //Default constructor
    MyVector() : _capacity{ 3 }, _size{ 0 }, _pa{ new int[3] }{}

    void traverse() {
        for (int i = 0; i < _size; ++i) {
            std::cout << _pa[i] << std::endl;
        }
        std::cout << std::endl;
    }

    void push_back(int num)
    {
        if (_size >= _capacity)
        {
            _doubleCapacity();
        }
        _pa[_size] = num;
        _size++;
    }

    int size() {
        return _size;
    }

    int back()
    {
        return _pa[_size - 1];
    }

    void pop()
    {
        _size--;
    }

    // Implement copy constructor.
    MyVector(const MyVector& that) :_capacity{ that._capacity }, _size{ that._size }, _pa{ new int[that._size] }
    {
        for (int i = 0; i < that._size; i++)
        {
            this->_pa[i] = that._pa[i];
        }
    }


    //Implement copy assignment constructor/operator.
    MyVector& operator =(const MyVector& that)
    {
        if (this != &that)
        {
            this->_size = that._size; //We need to update our size...
            
            int* temp = new int[that._size]; // Create a new array to store values on right side of equal sign.



            for (int i = 0; i < _size; i++)
            {
                temp[i] = that._pa[i]; // Fill this array with values on RHS
            }
            delete[] this->_pa; // Delete this.array in heap. (will delete "temp" each time it is called).
            this->_pa = temp;  // The array associated with this is now the array associated with temp.
        }
        return *this;  // Return a dereferrenced Object.
    }

    //Implement the destructor.
    ~MyVector()
    {
        delete _pa;
       // cout << "Destructor was called. " << endl;
    }



};

int main() {

    // TODO: 
    // sequentially uncomment following function calls
    // use Compile & Run button to check program's output with expectation. 
    // finally, use "check it" button at the bottom of right document panel
    // to check your program's total output  

    // Step 0: uncomment following block
    // after implementing default constructor
    MyVector mv;

    // Step 1: uncomment following block    
    // after implementing push_back() function 
    for (auto i : { 10, 20, 30 }) {
        mv.push_back(i);
    }

    // Step 2: uncomment following block 
    // after implementing size() function
    // expected output (no quotation mark): "Step 2 size: 3"
    std::cout << "Step 2 size: " << mv.size() << std::endl;

    // Step 3: uncomment following block
    // after implementing back() function 
    // expected output (no quotation mark): "Step 3 output: 30"
    std::cout << "Step 3 output: " << mv.back() << std::endl;

    // Step 4: uncomment following block 
    // after implementing pop() function 
    // expected output (no quotation mark): "Step 4 size: 2"
    mv.pop();
    std::cout << "Step 4 size: " << mv.size() << std::endl;

    // Step 5:  uncomment following block
    // after implementing traverse() function 
    // expected output(no quotation mark):"10 20 101 202 303"
    for (auto i : { 101, 202, 303 }) {
        mv.push_back(i);
    }
    mv.traverse();

    // Step 6: uncomment following block
    // after copy constructor 
    // expected output(no quotation mark):"10 20 101 202 303"
    MyVector mv2(mv);
    mv2.traverse();


    // Step 7:  uncomment following block
    // expected output(no quotation mark):"10 20 101 202 303"
    mv.pop();
    mv2.traverse();

    // Step 8:  uncomment following block
    // after copy assignment operator
    // expected output(no quotation mark):"10 20 101 202"
    mv2 = mv;
    mv2.traverse();

    MyVector m3 = mv;

    return 0;
}