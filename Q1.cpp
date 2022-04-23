#include <iostream>
using namespace std;

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

class GirlChild : public Mother, public Father {
    public:
    string GirlName;
    int GirlAge;
    void girlFunction(string GirlName, int GirlAge ){
        this ->GirlName = GirlName;
        this ->GirlAge = GirlAge;
    };
};
class BoyChild : public Mother, public Father {
    public:
    string BoyChild;
    int BoyAge;
    void boyFunction(string BoyChild, int BoyAge){
        this ->BoyChild = BoyChild;
        this ->BoyAge = BoyAge;
    };
};

int main(){

    //Boy child obj output
    BoyChild ChildObjOne;
    ChildObjOne.boyFunction("James", 5);
    cout << "Boy Name: " << ChildObjOne.BoyChild << endl;
    ChildObjOne.fatherMethod("Mubin", 40000);
    ChildObjOne.motherMethod("Roza");
    cout << "Fathers Name: " << ChildObjOne.FathersName << endl;
    ChildObjOne.FatherWork();
    cout << "Father Salary: " << ChildObjOne.salary << endl;
    cout << "Mothers Name: " << ChildObjOne.MothersName << endl;
    ChildObjOne.MotherWork();
    
    //Space--
    cout << endl;

    //Girl child object outputs
    GirlChild ChildObjTwo;
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