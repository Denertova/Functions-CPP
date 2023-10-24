#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    string number;
    int computerScience;
    int mathematics;
    int biology;
    int polishLanguage;
};

void display(Student* student) {
    cout << "Student Number: " << student->number << endl;
    cout << "Student Name: " << student->name << endl;
    cout << "Computer Science Grade: " << student->computerScience << endl;
    cout << "Mathematics Grade: " << student->mathematics << endl;
    cout << "Biology Grade: " << student->biology << endl;
    cout << "Polish Language Grade: " << student->polishLanguage << endl;
}

int main() {
    struct Student listOfStudents[6];
    int i;
    for (i = 0; i < 6; i++) {
        cout << "Student number " << i + 1 << endl;
        cout << "Student Name: ";
        cin >> listOfStudents[i].name;
        cout << "Computer Science Grade: ";
        cin >> listOfStudents[i].computerScience;
        cout << "Mathematics Grade: ";
        cin >> listOfStudents[i].mathematics;
        cout << "Biology Grade: ";
        cin >> listOfStudents[i].biology;
        cout << "Polish Language Grade: ";
        cin >> listOfStudents[i].polishLanguage;
        cout << endl;
    }
}