
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {

    vector<int> marks = {75, 45, 90, 60, 85};

    // Sorting marks
    sort(marks.begin(), marks.end());

    cout << "Sorted Marks: ";
    for (int m : marks)
        cout << m << " ";

    // Finding marks greater than 80
    auto it = find_if(marks.begin(), marks.end(),
                      [](int m) { return m > 80; });

    if (it != marks.end())
        cout << "\nFirst mark above 80: " << *it;

    // Adding 5 grace marks
    transform(marks.begin(), marks.end(),
              marks.begin(), [](int m) { return m + 5; });

    cout << "\nUpdated Marks: ";
    for (int m : marks)
        cout << m << " ";

    // Map container
    map<string, int> studentMarks;
    studentMarks["Amit"] = 85;
    studentMarks["Riya"] = 90;
    studentMarks["John"] = 75;

    cout << "\n\nStudent Marks:\n";
    for (auto s : studentMarks)
        cout << s.first << " : " << s.second << endl;

    // Unordered Map
    unordered_map<string, int> grades;
    grades["Amit"] = 85;
    grades["Riya"] = 90;

    cout << "\nTotal students: " << grades.size();

    return 0;
}
