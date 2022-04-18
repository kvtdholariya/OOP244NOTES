//this code is taken from the Seneca ICT notes
//Kavita Dholariya
//010935153
//kmdholariya@myseneca.ca
#include<iostream>
using namespace std;

const int NG = 20;

struct Student {
    int no;
    float grade[NG];
    int ng;

    void display() const; // member function  
};
//member function can access the data members of its class scope
//function definition used scope resolution :: operator 
void Student::display() const {

    cout << no << ": \n";
    for (int i = 0; i < ng; i++)
        cout << grade[i] << endl;

}

int main() {

    Student harry = { 975, 78.9f, 69.4f };

    harry.display();  // <== client call to the member function 

    cout << endl;

    return 0;
}