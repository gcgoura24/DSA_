#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(Student l, Student r) {
        if (l.marks < r.marks) return true;  // higher marks first
        else if (l.marks > r.marks) return false;
        else return l.roll > r.roll; // if marks equal, smaller roll first
    }
};

int main() {
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }
    int q;
    cin >> q;
    while (q--) {
        int cmd;
        cin >> cmd;
        if (cmd == 0) { // Insert
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            if (pq.empty()) cout << "Empty" << endl;
            else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        } 
        else if (cmd == 1) { // PrintMax
            if (pq.empty()) cout << "Empty" << endl;
            else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        } 
        else if (cmd == 2) { // DeleteMax
            if (pq.empty()) cout << "Empty" << endl;
            else {
                pq.pop();
                if (pq.empty()) cout << "Empty" << endl;
                else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
    }
    return 0;
}
