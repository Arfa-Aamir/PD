#include <iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float avg);
main()
{
    string name;
    cout << "Enter student name: ";
    cin >> name;
    float engM;
    cout << "Enter marks for English: ";
    cin >> engM;
    float mathsM;
    cout << "Enter marks for Maths: ";
    cin >> mathsM;
    float chemM;
    cout << "Enter marks for Chemistry: ";
    cin >> chemM;
    float socialSciM;
    cout << "Enter marks for Social Science: ";
    cin >> socialSciM;
    float bioM;
    cout << "Enter marks for Biology: ";
    cin >> bioM;
    float avg;
    avg = calculateAverage(engM, mathsM, chemM, socialSciM, bioM);
    string result;
    result = calculateGrade(avg);
    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << avg << "%" << endl;
    cout << "Grade: " << result << endl;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float avg;
    avg = (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology) / 5;
    return avg;
}
string calculateGrade(float avg)
{
    string Grade;
    if (avg >= 90 && avg <= 100)
    {
        Grade = "A+";
    }
    if (avg >= 80 && avg < 90)
    {
        Grade = "A";
    }
    if (avg >= 70 && avg < 80)
    {
        Grade = "B+";
    }

    if (avg >= 60 && avg < 70)
    {
        Grade = "B";
    }
    if (avg >= 50 && avg < 60)
    {
        Grade = "C";
    }
    if (avg >= 40 && avg < 50)
    {
        Grade = "D";
    }
    if (avg < 40)
    {
        Grade = "F";
    }
    return Grade;
}