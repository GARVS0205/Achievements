//Defining A Method Inside And Outside The Class
// Cpp Programming
// Date-11th jan,2024

#include<iostream>
#include<string>
using namespace std;
class Employee{
        public:
        int id;
        string firstName;
        string lastName;

        string getFullName(){
            return firstName + " " + lastName;
            // When we define a method inside 
            // class, we don't need to declare it anywhere.

        }
    void displayDetails(); // Method Function Declaration 
    // (only required in Defining Method Outside  Class)

};

void Employee::displayDetails(){//Function Definition
    cout<<"ID: " <<id <<endl <<"Name: "<<getFullName() << "\n\n";

}

int main ()
{ 
    Employee emp1;
emp1.id=500120203;
emp1.firstName="Garv";
emp1.lastName="Sachdeva";


Employee emp2;
emp2.id=500123455;
emp2.firstName="Riya";
emp2.lastName="Nagpal";

 emp1.displayDetails();   
 emp2.displayDetails();

}