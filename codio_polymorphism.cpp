//#include <iostream>
//#include <vector>
//using namespace std;

//add class definitions below this line

//add class definitions below this line
//
//class Information {
//public:
//    virtual void DisplayInfo() = 0;
//    virtual void AddInfo() = 0;
//};
//
//class Contacts : public Information {
//public:
//    Contacts() {
//        view = "quit";
//        names = {};
//        titles = {};
//        workPhoneNumbers = {};
//        workEmails = {};
//        personalPhoneNumbers = {};
//        personalEmails = {};
//        choice = "";
//        index = 0;
//        length = 0;
//    }
//
//    void DisplayInfo() {
//
//    }
//
//    void AddInfo() {
//
//    }
//
//    void Display() {
//        while (true) {
//            if (view == ("list")) {
//            }
//            else if (view == ("info")) {
//                DisplayInfo();
//            }
//            else if (view == ("add")) {
//                cout << " " << endl;
//                AddInfo();
//            }
//            else if (view == ("quit")) {
//                cout << ("\nClosing the contact list...\n");
//                break;
//            }
//        }
//    }
//
//private:
//    string view;
//    vector<string> names;
//    vector<string> titles;
//    vector<string> workPhoneNumbers;
//    vector<string> workEmails;
//    vector<string> personalPhoneNumbers;
//    vector<string> personalEmails;
//    string choice;
//    int index;
//    int length;
//};
//
//add class definitions above this line
//
//add class definitions above this line
//
//int main() {
//
//    add code below this line
//    Contacts contacts;
//    contacts.Display();
//
//
//    add code above this line
//
//    return 0;
//
//}

///// Function overloading is answer to the associated question.


// Question 2:

// virtual
// ClassA
// void


// Question 3:
// Function overriding
// Function overloading
// Abstract Function

// Question 4:
// Function overloading.



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// Part 5:
/*
In the IDE to the left, the class Chef is already defined, as is the Display function. However, it does not have a constructor.
Create three constructors that take one, two, and three parameters respectively. Note that the attributes name and cuisine are 
set to "null" while michelinStars is set to 0 by default.

*/



#include <iostream>
using namespace std;

//add class definitions below this line

class Chef {
public:

    //add constructors below this line

    Chef(string n) : name{ n } {}
    Chef(string n, string c) : name { n }, cuisine{ c }{}
    Chef(string n, string c, int m) :  name { n }, cuisine{ c }, michelinStars{ m }{}


    //add constructors above this line

    string GetName() {
        return name;
    }

    string GetCuisine() {
        return cuisine;
    }

    int GetStars() {
        return michelinStars;
    }

    void Display() {
        cout << GetName() << " is known for " << GetCuisine() << " cuisine and has " << GetStars() << " Michelin stars." << endl;
    }

private:

    string name = "null";
    string cuisine = "null";
    int michelinStars = 0;
};

//add class definitions above this line


int main() {

    //DO NOT EDIT code below this line

    Chef c1("Marco Pierre White");
    Chef c2("Rene Redzepi", "Nordic");
    Chef c3("Thomas Keller", "French", 3);

    c1.Display();
    c2.Display();
    c3.Display();

    //DO NOT EDIT code above this line

    return 0;

}