#include <iostream>
#include <vector>
#include <iomanip>
#include <map>

using namespace std;

struct Cource {
    string name;
    int credit;
    char grade;
    double gradePoint;
};

double gradePoint(char grade) {
    switch (toupper(grade))
    {
    case 'A': return 4.0;
    case 'B': return 3.0;
    case 'C': return 2.0;
    case 'D': return 1.0;
    case 'F': return 0.0;
    default: return -1.0;
    }
}
bool isValidGrade(char grade) {
    grade = touper(grade);
    return (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F');
}

int main() {
    int numSemester, numCourses;
    double totlCredits =0, totalGradePoints =0;
    vector<vector<Course>> allSemesters;

    cout << "=========================== CPGA CALCULATOR ============================\N";
