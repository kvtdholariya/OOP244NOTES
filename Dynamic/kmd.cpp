// Dynamic Memory Allocation
// dynamic.cpp
//kavita dholariya
//took this example from the Seneca ICT notes for OOP244

#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int no;
    float grade[2];
};

int main() {
    int n;
    Student* student = nullptr; //created student pointer and set it to nullptr to avoid memory issues

    cout << "Enter the number of students : "; //promt for the user input 
    cin >> n; //sets user input in to the integer n
    student = new Student[n]; //allocates dynamic memory 

    for (int i = 0; i < n; i++) {
        cout << "Student Number: ";
        cin >> student[i].no;
        cout << "Student Grade 1: ";
        cin >> student[i].grade[0];
        cout << "Student Grade 2: ";
        cin >> student[i].grade[1];
    }

    for (int i = 0; i < n; i++) {
        cout << student[i].no << ": "
            << student[i].grade[0] << ", " << student[i].grade[1]
            << endl;
    }

    delete[] student;
    student = nullptr;
}
