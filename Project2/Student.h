// Student.h


#include <iostream>
const int NC = 30;
const int NG = 20;
//BASE CLASS
class Person {
    char name[NC + 1];
public:
    void set(const char* n);
protected:
    void displayName(std::ostream&) const;
};
//DERIVED CLASS
class Student : public Person {
    int no;
    float grade[NG];
    int ng;
public:
    Student();
    Student(int);
    Student(int, const float*, int);
    void display(std::ostream&) const;
};

