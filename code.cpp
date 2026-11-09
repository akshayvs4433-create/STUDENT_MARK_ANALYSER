

#include <iostream>
using namespace std;

int findTotal(int marks[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    return total;
}

float findAverage(int total, int n)
{
    return (float)total ;
}

int findHighest(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];
    }

    return highest;
}

int findLowest(int marks[], int n)
{
    int lowest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    return lowest;
}

int countPassed(int marks[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 40)
            count++;
    }

    return count;
}

int main()
{
    int marks[100], n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Invalid number of students";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks: ";
        cin >> marks[i];
    }

    int total = findTotal(marks, n);

    cout << "\nTotal: " << total;
    cout << "\nAverage: " << findAverage(total, n);
    cout << "\nHighest: " << findHighest(marks, n);
    cout << "\nLowest: " << findLowest(marks, n);
    cout << "\nPassed: " << countPassed(marks, n);
    cout << "\nFailed: " << n - countPassed(marks, n) << endl;

    return 0;
}
