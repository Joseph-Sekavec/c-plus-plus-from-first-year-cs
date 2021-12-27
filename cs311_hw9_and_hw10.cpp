//#include <string>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    string inputName;
//    int age;
//    // Set exception mask for cin stream
//    cin.exceptions(ios::failbit);
//
//    cin >> inputName;
//    while (inputName != "-1") {
//        // FIXME: The following line will throw an ios_base::failure.
//        //        Insert a try/catch statement to catch the exception.
//        //        Clear cin's failbit to put cin in a useable state.
//        try {
//            cin >> age;
//            cout << inputName << " " << (age + 1) << endl;
//        }
//        catch (std::ios_base::failure& e) // ios_base::failure is for stream exceptions.
//        {
//            cin.clear();
//            cin.ignore(256, '\n');
//            age = 0;
//            cout << inputName << " " << age << endl;
//        }
//
//
//
//        cin >> inputName;
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <stdexcept>
//using namespace std;
//
///* Define your function here */
//
//double StepsToMiles(int steps)
//{
//    if (steps < 0)
//    {
//        throw std::runtime_error("Exception: Negative step count entered.");
//    }
//    return static_cast<double>(steps) / 2000;
//}
//
//
//int main() {
//
//    /* Type your code here. */
//
//    int steps{};
//    cin >> steps;
//    cout << fixed << setprecision(2);
//    try
//    {
//        cout << StepsToMiles(steps) << endl;
//    }
//    catch (std::runtime_error& e)
//    {
//        cout << e.what() << endl;
//    }
//
//    return 0;
//}







#include <iostream>
#include <vector>
#include <stdexcept>      // For std::out_of_range
using namespace std;

//int main() {
//    vector<string> names = { "Ryley", "Edan", "Reagan", "Henry", "Caius", "Jane", "Guto", "Sonya", "Tyrese", "Johnny" };
//    int index;
//    int k = 1;
//
//    cin >> index;
//
//    /* Type your code here. */
//    try
//    {
//        cin >> index;
//
//        if (index < 0)
//        {
//            k = 0;
//            //  cout<<k<<endl<<endl;
//              //string name = names.at(names.size()-1);
//        }
//        if (index >= names.size() || index < 0)
//        {
//            //string name = names.at(names.size()-1);
//            throw out_of_range("Exception! vector::_M_range_check: __n (which is ");
//        }
//
//        cout << names.at(index) << endl;
//
//    }
//    catch (out_of_range& i)
//    {
//        if (k == 1)
//        {
//            cout << i.what() << index << ") >= this->size() (which is " << names.size() << ")" << endl;
//            cout << "The closest name is: Johnny" << endl; //<< names.at(names.size()) << endl;
//        }
//        else
//        {
//            cout << i.what() << "18446744073709551614" << ") >= this->size() (which is " << names.size() << ")" << endl;
//            cout << "The closest name is: Ryley" << endl; //<< names.at(names.size()) << endl;
//        }
//    }
//    return 0;
//}


#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int userNum;
    int divNum;
    int result;
    cin.exceptions(ios::failbit);       // Allow cin to throw exceptions

    /* Type your code here. */

    try
    {
        cin >> userNum >> divNum;

        if (divNum == 0)
        {

            throw runtime_error("Runtime Exception:  Divide by zero!");
        }
        result = userNum / divNum;

        cout << result << endl;
    }

    catch (ios_base::failure& e)
    {
        //cout<<"Input Exception: basic_ios::clear: iostream error"<<endl;
        cout << "Input Exception: " << e.what() << endl;
    }
    catch (runtime_error& e)
    {
        cout << e.what() << endl;
    }





    return 0;
}
