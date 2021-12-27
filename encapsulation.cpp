#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Person
{
private:
    string _name;
    int _age;
    string _occupation;

public:
    Person();

    Person() : _name{ "N/A" }, _age{ 0 }, _occupation{ "N/A" }{}

    Person(string name, int age, string occupation)
        : _name{ name }, _age{ age }, _occupation{ occupation }{}

    string GetName()
    {
        return _name;
    }

    void SetName(string name)
    {
        _name = name;
    }

    int GetAge()
    {
        return _age;
    }

    void SetAge(int age)
    {
        _age = age;
    }

    string GetOccupation()
    {
        return _occupation;
    }

    void SetOccupation(string occupation)
    {
        _occupation = occupation;
    }


};


//add class definitions above this line


int main() {

    //DO NOT EDIT CODE BELOW THIS LINE

    Person p("Citra Curie", 16, "student");
    cout << p.GetName() << endl;
    p.SetName("Rowan Faraday");
    cout << p.GetAge() << endl;
    p.SetAge(18);
    cout << p.GetOccupation() << endl;
    p.SetOccupation("plumber");
    cout << p.GetName() << endl;
    cout << p.GetAge() << endl;
    cout << p.GetOccupation() << endl;

    //DO NOT EDIT CODE ABOVE THIS LINE

    return 0;

}