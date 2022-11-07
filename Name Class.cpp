//Employee.h
#include <iostream>
#include <string.h>
#ifndef Employee_h
#define Employee_h

using namespace std;

class Employee
{
private:
// variable to store name and salary
string FirstName;
string LastName;
int Salary;

public:
Employee();
void setFirstName(string name);// set the Employee name
string getFirstName();// get employee name
void setLastName(string lastname);// set the LastName
string getLastName();// get the LastName
void setSalary(int salary);// set employee salary
int getSalary();// get the Salary

};
#endif

// Employee.cpp
#include <iostream>
#include <string.h>
//#include "Employee.h"
using namespace std;

Employee::Employee()
{
FirstName = "ayush";
LastName = "verma";
Salary = 100000;
}

void Employee::setFirstName(string name)
{
FirstName=name;
}

string Employee::getFirstName()
{
return FirstName;
}

void Employee::setLastName(string lastName)
{
LastName=lastName;
}

string Employee::getLastName()
{
return LastName;
}

void Employee::setSalary(int salary)
{
if(salary < 0)
Salary = 0;
else
Salary = salary;
}

int Employee::getSalary()
{
return Salary;
}

// main.cpp
#include <iostream>
//#include "Employee.h"

using namespace std;

int main()
{

Employee emp1;
Employee emp2;

emp1.setFirstName("alex");
emp1.setLastName("hales");
emp1.setSalary(20000);

emp2.setFirstName("joe");
emp2.setLastName("burns");
emp2.setSalary(67000);

cout << "Yearly salary of " << emp1.getFirstName() << " " << emp1.getLastName() << " is " << 12*emp1.getSalary() << endl;
cout << "Yearly salary of " << emp2.getFirstName() << " " << emp2.getLastName() << " is " << 12*emp2.getSalary() << endl;

cout << "\n10% hike\n";
cout << "New Yearly salary of " << emp1.getFirstName() << " " << emp1.getLastName() << " is " << 1.1*12*emp1.getSalary() << endl;
cout << "New Yearly salary of " << emp2.getFirstName() << " " << emp2.getLastName() << " is " << 1.1*12*emp2.getSalary() << endl;

return 0;
}