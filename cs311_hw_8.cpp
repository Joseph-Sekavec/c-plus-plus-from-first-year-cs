#include <vector>
#include <string>
#include <iostream>

using namespace std;





class Plant {
public:
    virtual ~Plant();

    void SetPlantName(string userPlantName);

    string GetPlantName() const;

    void SetPlantCost(int userPlantCost);

    int GetPlantCost() const;

    virtual void PrintInfo() const;

protected:
    string plantName;
    int plantCost;
};


Plant::~Plant() {};

void Plant::SetPlantName(string userPlantName) {
    plantName = userPlantName;
}

string Plant::GetPlantName() const {
    return plantName;
}

void Plant::SetPlantCost(int userPlantCost) {
    plantCost = userPlantCost;
}

int Plant::GetPlantCost() const {
    return plantCost;
}

void Plant::PrintInfo() const {
    cout << "Plant Information:" << endl;
    cout << "   Plant name: " << plantName << endl;
    cout << "   Cost: " << plantCost << endl;
}



////////////////////////////////////
////////////////////////////////////


class Flower : public Plant {
public:
    void SetPlantType(bool userIsAnnual);

    bool GetPlantType() const;

    void SetColorOfFlowers(string userColorOfFlowers);

    string GetColorOfFlowers() const;

    void PrintInfo() const;

private:
    bool isAnnual;
    string colorOfFlowers;
};




void Flower::SetPlantType(bool userIsAnnual) {
    isAnnual = userIsAnnual;
}

bool Flower::GetPlantType() const {
    return isAnnual;
}

void Flower::SetColorOfFlowers(string userColorOfFlowers) {
    colorOfFlowers = userColorOfFlowers;
}

string Flower::GetColorOfFlowers() const {
    return colorOfFlowers;
}

void Flower::PrintInfo() const {
    cout << "Plant Information:" << endl;
    cout << "   Plant name: " << plantName << endl;
    cout << "   Cost: " << plantCost << endl;
    cout << "   Annual: " << boolalpha << isAnnual << endl;
    cout << "   Color of flowers: " << colorOfFlowers << endl;
}








// TODO: Define a PrintVector function that prints an vector of plant (or flower) object pointers
void PrintVector(Plant &i)
{
    i.PrintInfo();
}

int main(int argc, char* argv[]) {
    // TODO: Declare a vector called myGarden that can hold object of type plant pointer
    vector<Plant*> myGarden;

    // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
    //       colorOfFlowers, isAnnual
    string input;
    string plantName;
    string flowerName;
    string colorOfFlowers;
    int plantCost;
    int flowerCost;
    string Annual;

    
    int i = 0;
    while (input != "-1") {
        // TODO: Check if input is a plant or flower
        //       Store as a plant object or flower object
        //       Add to the vector myGarden
        cout << "Input \"plant\" or \"flower\", enter \"-1\" to exit: ";
        cin >> input;



        if (input == "plant")
        {
            cout << "Enter the name of your plant: ";
            cin >> plantName;
            cout << "Enter the cost of your plant: ";
            cin >> plantCost;
            Plant *p = new Plant;
            p->SetPlantName(plantName);
            p->SetPlantCost(plantCost);
            myGarden.push_back(p);

            
        }
        else if (input == "flower")
        {
            cout << "Input name of flower: ";
            cin >> flowerName;
            cout << "Input flower cost: ";
            cin >> flowerCost;
            cout << "flowers are annual? true/false (case-sensitive): ";
            cin >> Annual;
            cout << "Input color of flowers: ";
            cin>>colorOfFlowers;
            Flower *f = new Flower;
            f->SetPlantName(flowerName);
            f->SetPlantCost(flowerCost);
            f->SetColorOfFlowers(colorOfFlowers);
            



            if (Annual == "true")
            {
                f->SetPlantType(1);
                myGarden.push_back(f);
            }
            else
            {
                f->SetPlantType(0);
                myGarden.push_back(f);
            }

        }

    }

    cout << endl << endl << endl;

    for(unsigned int i = 0; i<myGarden.size(); ++i)
    PrintVector(*myGarden[i]);

    cout << endl << endl << endl;


    for (size_t i = 0; i < myGarden.size(); ++i) {
        delete myGarden.at(i);
    }

    return 0;
}


















/*
#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints an vector of plant (or flower) object pointers

int main(int argc, char* argv[]) {
   // TODO: Declare a vector called myGarden that can hold object of type plant pointer
   vector<Plant*> myGarden;

   // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual
   string input;
   string plantName;
   string flowerName;
   string colorOfFlowers;
   double plantCost;
   double flowerCost;
 //  bool isAnnual;
   string isAnnual;

  while (input != "-1") {
        // TODO: Check if input is a plant or flower
        //       Store as a plant object or flower object
        //       Add to the vector myGarden
        //cout << "Tell me if you have a plant or flower: ";
        cin >> input;

        //cout << "You have a " << input << endl;

        if (input == "plant")
        {
            //cout << "Input the plant's name: ";
            cin >> plantName;
          //  cout << "Input the plant's cost: ";
            cin >> plantCost;
            Plant p;
            p.SetPlantName(plantName);
            p.SetPlantCost(plantCost);
            myGarden.push_back(&p);
            cout<<"Plant Information:"<<endl;
            cout <<"   Plant name: "<< p.GetPlantName() << endl;
            cout <<"   Cost: "<< p.GetPlantCost() << endl<<endl;

            //cout << endl<<endl<<p.GetPlantName() << endl << endl;
            //PrintPlant(p);
        }
        else if (input == "flower")
        {

            cin >> flowerName;

            cin >> flowerCost;




            cin>>colorOfFlowers;
            Flower f;
            f.SetPlantName(flowerName);
            f.SetPlantCost(flowerCost);
            f.SetColorOfFlowers(colorOfFlowers);
            string temp;
            temp = f.GetColorOfFlowers();
            myGarden.push_back(&f);
            cout<<"Plant Information:"<<endl;
            cout <<"   Plant name: "<< f.GetPlantName() << endl;
            cout <<"   Cost: "<< f.GetPlantCost() << endl;
            cin >> isAnnual;
            cout<< "   Annual: "<< colorOfFlowers <<endl;
            cout <<"   Color of flowers: "<< isAnnual << endl<<endl;
        }
    }



   // TODO: Call the method PrintVector to print myGarden



   //for (size_t i = 0; i < myGarden.size(); ++i) {
  //    delete myGarden.at(i);
//   }

   return 0;
}


*/