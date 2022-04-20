

#include <iostream>
#include "Source.h"

using namespace std;

class person

{

    char name[100]; 
    int age;

public:
//answers:
    //constructor and destructor added for the base class 
    person();
    person(const char*);

    //destructor added as per the question requirement
    ~person(){}
    void inputData()

    {

        cout << "Name: ";

        cin >> (name);

        cout << "Age: ";

        cin >> age;

    }

    void display()

    {

        cout << "Name: " << name << endl;

        cout << "Age: " << age << endl;

    }

};

class student : public person

{

    char college[100];

public:
//Answers:
    //constructor and destructor are added here
    student() {

        //defualt construcor will not execute any initialization for student class
    }
    student(const char*); 
        ~student(){} //destructor added as per the question requirement
    void inputData()

    {

        person::inputData();

        cout << "Name of College: ";

        gets(college);

    }

    void display()

    {

        person::display();

        cout << "Name of College " << college << endl;

    }

};



int main()

{

    student s;

    cout << "Student" << endl;

    cout << "Enter data" << endl;

    s.inputData();

    cout << endl << "Displaying data" << endl;

    s.display();

    return 0;
}
//Answers::
//default constructor will sent to name array to null terminated 
person::person()
{
    name[0] = '\0';
    age = 0;
}
//this constructor will set the array of char
person::person(const char* km)
{
    const int KD = 21;
    strncpy(name, km, KD);
    name[KD] = '\0';
}

student::student(const char*) : person(km)
{
   const int KD = 21;
    strncpy(college, km, KD);
    college[KD] = '\0';
}
