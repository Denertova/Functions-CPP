#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    int studentID;
};

int main() {
    vector<Student> students = {
        {"Kasia", "Kowalska", 78797},
        {"Jacek", "Wroblewski", 67845},
        {"Bozena", "Trysuk", 79976}
    };

    return 0;
}