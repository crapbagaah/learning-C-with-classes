#include <iostream>
using namespace std;

/*
There are 3 kinds of access modifiers: public, private and protected. 
The default access modifier in a class is PRIVATE

* public 

The public keyword is used to create public members (data and functions).
The public members are accessible from any part of the program.

Notice that the public elements are accessible from main(). 
This is because public elements are accessible from all parts of the program.

* private

The private keyword is used to create private members (data and functions).

The private members can only be accessed from within the class.
However, friend classes and friend functions can access private members.

* protected

PROTECTED access modifier is similar to private access modifier in the sense that 
it can’t be accessed outside of its class unless with the help of friend class.

The difference is that the class members declared as Protected can be accessed by any 
subclass(derived class) of that class as well. 

*/

class Employee {
    private: 
        int age;
    public:
        int hours_worked;
        void display_hours_worked() {
            cout << "Hours worked by employee: " << hours_worked << endl;
        };
        void displayAge(int age_argument) {
            age = age_argument;
            cout << "Age of the employee is: " << age << endl;
        }


};
int main() {
    Employee employee_1;

    //* accessing public members of the object `employee_1`

    employee_1.hours_worked = 100;
    employee_1.display_hours_worked();

    /*
    Notice that the public elements are accessible from main(). 
    This is because public elements are accessible from all parts of the program
    */

    //* modifying and displaying a private data member using a public inline member function 

    employee_1.displayAge(29);

    /*
    In main(), we cannot directly access the class variable age.
    We can only indirectly manipulate age through the public inline member function displayAge().
    */

}