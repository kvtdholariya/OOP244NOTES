// Protected Access
 // protected.cpp

#include <iostream>
#include "Student.h"

int main() {
    float gh[] = { 89.4f, 67.8f, 45.5f };
    Student harry(1234, gh, 3);
    harry.set("Harry");           // inherited
    harry.display(std::cout);     // not inherited
    return 0;
}