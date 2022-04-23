#include <iostream>
using namespace std;

// Declared a parent class as "Father"
class Father {
        public:
        string FathersName;
        int salary;

        void FatherWork(){
            cout << "Father Work at office" << endl;
        };

        void fatherMethod(string FathersName, int salary){
            this->FathersName = FathersName;
            this->salary = salary;
        };
    };

// Declared a parent class as "Mother"
class Mother  {
        public:
        string MothersName;
        
        void MotherWork(){
            cout << "Mother Work at home" << endl;
        };
        
        void motherMethod(string MothersName){
            this->MothersName = MothersName;
        };
    };

// First child class
class GirlChild : public Mother, public Father {
    public:
    string GirlName;
    int GirlAge;
    void girlFunction(string GirlName, int GirlAge ){
        this ->GirlName = GirlName;
        this ->GirlAge = GirlAge;
    };
};

// Second Child class
class BoyName : public Mother, public Father {
    public:
    string BoyName;
    int BoyAge;
    void boyFunction(string BoyName, int BoyAge){
        this ->BoyName = BoyName;
        this ->BoyAge = BoyAge;
    };
};

int main(){

    //Declaring Boy child object
    BoyName ChildObjOne;

    //output of boy child
    ChildObjOne.boyFunction("James", 5);
    cout << "Boy Name: " << ChildObjOne.BoyName << endl;
    ChildObjOne.fatherMethod("Mubin", 40000);
    ChildObjOne.motherMethod("Roza");
    cout << "Fathers Name: " << ChildObjOne.FathersName << endl;
    ChildObjOne.FatherWork();
    cout << "Father Salary: " << ChildObjOne.salary << endl;
    cout << "Mothers Name: " << ChildObjOne.MothersName << endl;
    ChildObjOne.MotherWork();

    //Space---
    cout << endl;

    //Declaring Girl child object
    GirlChild ChildObjTwo;

    //Output of girl child
    ChildObjTwo.girlFunction("jasmin", 4);
    cout << "Girl Name: " << ChildObjTwo.GirlName << endl;
    ChildObjTwo.fatherMethod("Ifti", 40000);
    ChildObjTwo.motherMethod("Rimjhim");
    cout << "Fathers Name: " << ChildObjTwo.FathersName << endl;
    ChildObjTwo.FatherWork();
    cout << "Father Salary: " << ChildObjTwo.salary << endl;
    cout << "Mothers Name: " << ChildObjTwo.MothersName << endl;
    ChildObjTwo.MotherWork();

    return 0;
}