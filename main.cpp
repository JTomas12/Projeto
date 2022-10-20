#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

void readData() {
    ifstream in1("classes.csv");
    ifstream in2("classes_per_uc.csv");
    ifstream in3("students_classes.csv");

    vector<Student> students;
    vector<UC> ucs;
    vector<Turma> turmas;
    vector<Class> classes;

    string line;
    getline(in1, line);

    while (getline(in1, line)) {
        string ClassCode, UcCode, Weekday, StartHour, Duration, Type;
        float start, d;
        istringstream iss(line);
        iss >>ClassCode  >> UcCode >> Weekday >> StartHour;
        istringstream ss (StartHour);
        ss >> start;
        getline(iss, Duration, ',');
        ss.str(Duration);
        ss >> d;

        classes.push_back(Class(ClassCode, UcCode, Weekday,start, d, Type));
    }

    string line3;
    getline(in3, line3);
    while (getline(in3, line3)) {
        string StudentCode, StudentName, UcCode,ClassCode;
        istringstream iss(line3);
        getline(iss, StudentCode, ',');
        getline(iss, StudentName, ',');

        students.push_back(Student(StudentCode,StudentName));



    }

}

int main() {
    readData();
    return 0;
}
