#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;
    int age;
    string semester;
};
int main(){
    Student s1;
    s1.name="Redoyan";
    s1.rno=2301007;
    s1.gpa=3.68;
    s1.age=22;
    s1.semester="year-2,term-1";
    
    Student s2;
    s2.name="saif Ur Rahman";
    s2.rno=2001016;
    s2.gpa=3.57;
    s2.age=24;
    s2.semester="year-4,term-2";
    
    Student s3;
    s3.name="Fayaz Ali Muktadir";
    s3.rno=2101003;
    s3.gpa=3.90;
    s3.age=23;
    s3.semester="year-3,term-2";
    
    cout<<"name: "<<s1.name<<endl;
    cout<<s1.semester<<endl;
    cout<<"age: "<<s1.age<<endl;
    cout<<endl;
    
    cout<<"name: "<<s3.name<<endl;
    cout<<s3.semester<<endl;
    cout<<"age: "<<s3.age<<endl;
    cout<<endl;

    cout<<"name: "<<s2.name<<endl;
    cout<<s2.semester<<endl;
    cout<<"age: "<<s2.age<<endl;
    cout<<endl;
}
