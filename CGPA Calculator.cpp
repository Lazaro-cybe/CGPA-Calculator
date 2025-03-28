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

cout << "Enter number of semesters: ";
    cin >> numSemesters;
    
    for (int sem = 0; sem < numSemesters; sem++) {
        cout << "\n========== Semester " << sem + 1 << " ==========\n";
        
        cout << "Enter number of courses for semester " << sem + 1 << ": ";
        cin >> numCourses;

vector<Course> semesterCourses;
        double semesterCredits = 0, semesterGradePoints = 0;

for (int i = 0; i < numCourses; i++) {
            Course course;
            cout << "\nCourse " << i + 1 << ":\n";

cout << "  Enter course name: ";
            cin.ignore();
            getline(cin, course.name);

 cout << "  Enter credit hours: ";
            cin >> course.credits;

do {
                cout << "  Enter grade (A, B, C, D, F): ";
                cin >> course.grade;
do {
                cout << "  Enter grade (A, B, C, D, F): ";
                cin >> course.grade;
                if (!isValidGrade(course.grade)) {
                    cout << "  Invalid grade! Please enter A, B, C, D, or F.\n";
                }
            } while (!isValidGrade(course.grade));

course.gradePoint = gradeToPoint(course.grade);

semesterCredits += course.credits;
            semesterGradePoints += course.credits * course.gradePoint;
            
            semesterCourses.push_back(course);
        }

double semesterGPA = semesterGradePoints / semesterCredits;
        cout << fixed << setprecision(2);
        cout << "\nSemester " << sem + 1 << " GPA: " << semesterGPA << endl;

totalCredits += semesterCredits;
        totalGradePoints += semesterGradePoints;
        
        allSemesters.push_back(semesterCourses);
    }
double cgpa = totalGradePoints / totalCredits;

cout << "\n==================== FINAL RESULTS ====================\n";
    cout << fixed << setprecision(2);
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Cumulative GPA (CGPA): " << cgpa << endl;
