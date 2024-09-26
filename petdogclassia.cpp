#include<iostream>
#include<string>
using namespace std;

class dog{
public:
int age;
string color;
string breed;
string name;

void displayDetails();
};

void Dog :: displayDetails(){
    cout << "Dog's pet name: " << name << endl << "Breed: "<<endl<<"Age: "<<age
}

int main ()
{
    dog dog1;
        dog1.age=5;
        dog1.color="Green";
        dog1.breed="Labra";
        dog1.name="Jack";

    
}
