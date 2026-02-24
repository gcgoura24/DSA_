#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll ,int marks) 
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp {
public:
    bool operator()(Student l, Student r) 
    {
        // if(l.marks < r.marks) return true;  // oposite of Sort array of objects // order  big to small

        if(l.marks > r.marks)      return true; // order small to big // opposite of Sort array of objects

        else if(l.marks < r.marks)  
            return false; // for max-heap based on marks and roll number

        else 
        {
                return l.roll > r.roll;
        }
    }
}; 
int main()
{
    priority_queue<Student,vector<Student>,cmp> pq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string name;
        int age, marks;
        cin >> name >> age >> marks;
        Student obj(name, age, marks);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}