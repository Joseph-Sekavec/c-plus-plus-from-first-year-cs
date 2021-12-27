#include <iostream>
//#include <string>

using namespace std;


#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Person {
public:
    Person(string n, string a) {
        name = n;
        address = a;
    }

    string GetName() {
        return name;
    }

    void SetName(string new_name) {
        name = new_name;
    }

    string GetAddress() {
        return address;
    }

    void SetAddress(string new_address) {
        address = new_address;
    }

    string Info() {
        return name + " lives at " + address + ".\n";
    }

private:
    string name;
    string address;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////////////////////////////////
class CardHolder : public Person 
{                         
public:                                                   //
    CardHolder(string n, string a, int an) : Person(n, a) { //
        account_number = an;                                  //
        balance = 0;                                          //
        credit_limit = 5000;                                  //
    }                                                       //
//////////////////////////////////////////////////////////////
    
    void Payment(double p)
    {
        balance = balance - p;
    }

    void Sale(int sp)
    {
        balance = balance + sp;
        
    }

    void SetBalance(double b)
    {
        balance = b;
    }

    double GetBalance()
    {
        return balance;
    }

private:
    int account_number;
    double balance;
    int credit_limit;

};





//DO NOT EDIT/////////////////////////////////////////////////////////////
class PlatinumClient : public CardHolder {                              //
public:                                                               //
    PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) { //
        cash_back = 0.02;                                                 //
        rewards = 0;                                                      //
    }                                                                   //
//////////////////////////////////////////////////////////////////////////

    void set_cash_back(double cb)
    {
        cash_back = cb;
    }

    double get_cash_back()
    {
        return cash_back;
    }

    void SetRewards(double r)
    {
        rewards = r;
    }

    double GetRewards()
    {
        return rewards;
    }

    void Sale(double price)
    {
        //cout << "cash back value is: " << get_cash_back()<<endl<<endl;
        SetBalance(GetBalance() + price);
        price = price * get_cash_back();
        rewards = GetRewards() + price;

        
        
    }

private:
    double cash_back;
    double rewards;

};





    //add class definitions above this line

int main() {

    //DO NOT EDIT code below this line
    PlatinumClient pc("Sarah", "101 Main Street", 123364);
    pc.CardHolder::Sale(100);
    cout << pc.GetRewards() << endl;
    pc.Sale(100);
    cout << pc.GetRewards() << endl;
    cout << pc.GetBalance() << endl;
    pc.Payment(50);
    cout << pc.GetBalance() << endl;
    cout << pc.Info() << endl;

    //DO NOT EDIT code above this line

    return 0;

}







//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//DO NOT EDIT code below this line

//class PiggyBank {
//public:
//    PiggyBank(int o, int f, int tn, int tw) {
//        ones = o;
//        fives = f;
//        tens = tn;
//        twenties = tw;
//    }
//
//    int GetOnes() {
//        return ones;
//    }
//
//    void SetOnes(int new_ones) {
//        ones = new_ones;
//    }
//
//    int GetFives() {
//        return fives;
//    }
//
//    void SetFives(int new_fives) {
//        fives = new_fives;
//    }
//
//    int GetTens() {
//        return tens;
//    }
//
//    void SetTens(int new_tens) {
//        tens = new_tens;
//    }
//
//    int GetTwenties() {
//        return twenties;
//    }
//
//    void SetTwenties(int new_twenties) {
//        twenties = new_twenties;
//    }
//
//private:
//    int ones;
//    int fives;
//    int tens;
//    int twenties;
//};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////
//class Cash : public PiggyBank { //
////////////////////////////////////
//public:  
//
//    Cash(int o, int f, int te, int tw) : PiggyBank(o, f, te, tw) {}
//
//    void DisplayBills()
//    {
//        cout <<"One-dollar bill: " <<GetOnes()<<endl;
//        cout <<"Five-dollar bill: " << GetFives()<<endl;
//        cout <<"Ten-dollar bill: " << GetTens()<<endl;
//        cout <<"Twenty-dollar bill: " << GetTwenties()<<endl;
//    }
//    
//    void DisplayCashTotal()
//    {
//        cout << "Total amount: " << 1 * GetOnes() + 5 * GetFives() + 10 * GetTens() + 20 * GetTwenties()<<endl;
//    }
//
//
//};



//add class definitions above this line

    //int main() {

    //    //DO NOT EDIT code below this line

    //    Cash c(1, 2, 3, 4);
    //    c.DisplayBills();
    //    c.DisplayCashTotal();
    //    Cash c2(9, 8, 7, 6);
    //    c2.DisplayBills();
    //    c2.DisplayCashTotal();

    //    //DO NOT EDIT code above this line

    //    return 0;

    //}





//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//DO NOT EDIT code below this line

//class Parent1 {
//public:
//    string Identify() {
//        return "This function is called from Parent1";
//    }
//};



//class Parent2 : public Parent1 {
//public:
//
//    
//
//    string Identify() {
//        return "This function is called from Parent2";
//    }
//};



//DO NOT EDIT code above this line

//add class definitions below this line

//class Child : public Parent2
//{
//public:
//
//    string Identify()
//    {
//        return "This function is called from Child";
//    }
//
//    string Identify2()
//    {
//        return Parent2::Identify();
//    }
//
//    string Identify3()
//    {
//        return Parent1::Identify();
//    }
//
//};

//add class definitions above this line

//int main() {
//
//    //DO NOT EDIT code below this line
//
//    Child c;
//    cout << c.Identify() << endl;
//    cout << c.Identify2() << endl;
//    cout << c.Identify3() << endl;
//
//    //DO NOT EDIT code above this line
//
//    return 0;
//
//}





//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//DO NOT EDIT code below this line

//class Book {
//public:
//    Book(string t, string a, string g) {
//        title = t;
//        author = a;
//        genre = g;
//    }
//
//    string GetTitle() {
//        return title;
//    }
//
//    void SetTitle(string new_title) {
//        title = new_title;
//    }
//
//    string GetAuthor() {
//        return author;
//    }
//
//    void SetAuthor(string new_author) {
//        author = new_author;
//    }
//
//    string GetGenre() {
//        return genre;
//    }
//
//    void SetGenre(string new_genre) {
//        genre = new_genre;
//    }
//
//private:
//    string title;
//    string author;
//    string genre;
//};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT////////////////////
//class BlogPost : public Book { //
/////////////////////////////////

//public:
//    BlogPost(string t, string a, string g, string ws, int c, int v) : Book(t, a, g), website{ ws }, word_count{ c }, page_views{ v } {}
//
//
//    //string GetTitle();
//    //string GetAuthor();
//    //string GetGenre();
//
//    string GetWebsite()
//    {
//        return website;
//    }
//
//    int GetWordCount()
//    {
//        return word_count;
//    }
//    int GetPageViews()
//    {
//        return page_views;
//    }
//
//
//private:
//    string title;
//    string author;
//    string genre;
//    string website;
//    int word_count;
//    int  page_views;
//};




//add class definitions above this line

    //int main() {

    //    //DO NOT EDIT code below this line

    //    BlogPost my_post("Hot Summer Trends", "Amy Gutierrez", "fashion", "Vogue", 2319, 2748);
    //    cout << my_post.GetTitle() << endl;
    //    cout << my_post.GetAuthor() << endl;
    //    cout << my_post.GetGenre() << endl;
    //    cout << my_post.GetWebsite() << endl;
    //    cout << my_post.GetWordCount() << endl;
    //    cout << my_post.GetPageViews() << endl;
    //    BlogPost codio("Adopting Codio", "Anh Le", "computer science", "Codio", 2500, 5678);
    //    cout << codio.GetTitle() << endl;
    //    cout << codio.GetAuthor() << endl;
    //    cout << codio.GetGenre() << endl;
    //    cout << codio.GetWebsite() << endl;
    //    cout << codio.GetWordCount() << endl;
    //    cout << codio.GetPageViews() << endl;

    //    //DO NOT EDIT code above this line

    //    return 0;

    //}







//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//DO NOT EDIT code below this line

//class CelestialBody {
//public:
//    CelestialBody(double s, double m, string c, string n) {
//        size = s;
//        mass = m;
//        atm_composition = c;
//        name = n;
//    }
//
//    double GetSize() {
//        return size;
//    }
//
//    double GetMass() {
//        return mass;
//    }
//
//    string GetComposition() {
//        return atm_composition;
//    }
//
//    string GetName() {
//        return name;
//    }
//
//private:
//    double size;
//    double mass;
//    string atm_composition;
//    string name;
//};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT//////////////////////////////
//class Satellite : public CelestialBody { //
///////////////////////////////////////////

//public:
//
//    Satellite();
//
//    Satellite(double s, double m, string c, string n, string hp) : CelestialBody(s, m, c, n), host_planet{ hp }{}
//
//
//
//    string GetHostPlanet()
//    {
//        return host_planet;
//    }
//
//
//
//private:
//    string host_planet;
//
//};



//DO NOT EDIT///////////////////////////
//class Planet : public CelestialBody { //
//////////////////////////////////////////
//
//public:
//    Planet();
//
//    Planet(double s, double m, string c, string n, string hs) : CelestialBody(s, m, c, n), host_star{ hs } {}
//
//    string GetHostStar()
//    {
//        return host_star;
//    }
//
//private:
//    string host_star;
//
//};


//add class definitions above this line

//int main() {
//
//    //DO NOT EDIT code below this line
//
//    Satellite s(2651, 3716, "helium", "Moon", "Earth");
//    Planet p(5349, 8910, "nitrogen", "Earth", "Sun");
//    Satellite s2(3199, 13452, "nitrogen", "Titan", "Saturn");
//    Planet p2(82713, 56834, "hydrogen", "Saturn", "Sun");
//    cout << "Satellite name = " << s.GetName() << ", size = " << s.GetSize();
//    cout << ", mass = " << s.GetMass() << ", atmospheric composition = " << s.GetComposition();
//    cout << ", host planet = " << s.GetHostPlanet() << endl;
//    cout << "Planet name = " << p.GetName() << ", size = " << p.GetSize();
//    cout << ", mass = " << p.GetMass() << ", atmospheric composition = " << p.GetComposition();
//    cout << ", host star = " << p.GetHostStar() << endl;
//    cout << "Satellite name = " << s2.GetName() << ", size = " << s2.GetSize();
//    cout << ", mass = " << s2.GetMass() << ", atmospheric composition = " << s2.GetComposition();
//    cout << ", host planet = " << s2.GetHostPlanet() << endl;
//    cout << "Planet name = " << p2.GetName() << ", size = " << p2.GetSize();
//    cout << ", mass = " << p2.GetMass() << ", atmospheric composition = " << p2.GetComposition();
//    cout << ", host star = " << p2.GetHostStar() << endl;
//
//    //DO NOT EDIT code above this line
//
//    return 0;
//
//}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//DO NOT EDIT code below this line

//class MP3 {
//    MP3(string t, int l, string g, string al, string ar) {
     /*   title = t;
        album = al;
        length = l;
        genre = g;
        artist = ar;
    }*/

  /*  string GetTitle() {
        return title;
    }*/

 /*   void SetTitle(string new_title) {
        title = new_title;
    }*/

   /* int GetLength() {
        return length;
    }

    void SetLength(int new_length) {
        length = new_length;
    }

    string GetGenre() {
        return genre;
    }

    void SetGenre(string new_genre) {
        genre = new_genre;
    }

    string GetAlbum() {
        return album;
    }

    void SetAlbum(string new_album) {
        album = new_album;
    }

    string GetArtist() {
        return artist;
    }

    void SetArtist(string new_artist) {
        artist = new_artist;
    }

private:
    string title;
    int length;
    string genre;
    string album;
    string artist;
};*/

//DO NOT EDIT code above this line

//add class definitions below this line










//DO NOT EDIT///////////////////
//class Podcast : public MP3 {  //
//////////////////////////////////
//public:
//    Podcast() = default;
//
//    Podcast(string tit, int min, string gen, string nam, string dat)
//        : MP3(tit, min, gen, nam, dat) {
//        title = tit;
//        length = min;
//        genre = gen;
//        name = nam;
//        date = dat;
//    }
//
//    void DisplayTitle()
//    {
//        cout << "The title is " << title << endl;
//    }
//    void DisplayLength()
//    {
//        cout << "The length is " << length << endl;
//    }
//    void DisplayGenre()
//    {
//        cout << "The genre is " << genre << endl;
//    }
//    void DisplayName()
//    {
//        cout << "The name is " << name << endl;
//    }
//    void DisplayDate()
//    {
//        cout << "The date is " << date << endl;
//    }
//
//
//private:
//    string title; // Title of episode
//    int length;   // Length of podcast in minutes
//    string genre; // Genre of podcast
//    string name;  // Name of podcast
//    string date;  // Date podcast is released to the public
//};


//add class definitions above this line 

    //int main() {

    //    //DO NOT EDIT code below this line

    //    Podcast p("Hollywood Black List", 1460, "economics", "Planet Money", "10 July 2020");
    //    p.DisplayTitle();
    //    p.DisplayLength();
    //    p.DisplayGenre();
    //    p.DisplayName();
    //    p.DisplayDate();

    //    //DO NOT EDIT code above this line

    //    return 0;

    //}




















//class ClassA {
//public:
//    void PrintA() {
//        cout << "Class A" << endl;
//    }
//};
//
//class ClassB : public ClassA {
//public:
//    void PrintB() {
//        cout << "Class B" << endl;
//    }
//};
//
//class ClassC : public ClassB {
//public:
//    void PrintC() {
//        cout << "Class C" << endl;
//    }
//};
//
//int main() {
//
//    ClassA a;
//    ClassB b;
//    ClassC c;
//
//
//        a.PrintA(); //prints:
//
//        a.PrintB(); //prints:
//   
//        a.PrintC(); 
//    
//        b.PrintA(); 
// 
//        b.PrintB(); 
//   
//        b.PrintC(); 
//  
//        c.PrintA(); 
//    
//        c.PrintB(); 
//   
//        c.PrintC(); 
//    
//
//    return 0;
//}