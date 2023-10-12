#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class students{

    private:
    // attributes which cannot be directly accessed
    float cgpa;

    // adding attributes to the class students that can be accessed
    public:
    int id;
    string name;


    // creating a function to to get access to private cgpa

    void addCGPA(float c){
        cgpa = c;
    }

    float getCGPA(int password){
        if(password = 1234){
            return cgpa;
        }
        cout << "Incorrect Password" << endl;
        return 0;
    }


};


int main(){

    // to access these attributes we need to create an object of the class
    students s;

    // adding value to the object's attributes
    s.name = "Pratham";
    s.id = 10016;

    // adding value to private attributes via functions
    s.addCGPA(9.15);

    // accessing the attributes and printing their values

    cout << "Size of the Object " << sizeof(s) << endl;
    cout << "Name of the Student " << s.name << endl;
    cout << "Size of Name " << sizeof(s.name) << endl;
    cout << "Student id : " << s.id << endl;
    cout << "size of Student id : " << sizeof(s.id) << endl;
    cout << "CGPA of Student : " << s.getCGPA(1234) << endl;

    cout << "Object size : 32 = string : 24 +  int : 4 +  float : 4" << endl;


    // alloting memory in the heap, dynamically
    students *b = new students;
    b->id = 185;
    b->name = "Ck";
    // instead of dot we use arrow notation

}