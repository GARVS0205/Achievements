#include<iostream>
#include<string>
using namespace std;
class Employee{
        public:
        int id;
        string firstName;
        string lastName;
};


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

    
    cout<<"ID: "<<emp1.id<<endl<<"NAME: "<< emp1.firstName <<" "<<emp1.lastName;
cout<<endl<<"ID: "<<emp2.id<<endl<<"NAME: "<<emp2.firstName<<" "<<emp2.lastName;
    return 0;

}
