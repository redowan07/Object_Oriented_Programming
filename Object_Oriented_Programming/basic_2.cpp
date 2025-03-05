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
    Student s2;
    Student s3;
    
    cout<<"enter first person's name: "; //cin>>s1.name; as it can't handle spaces ,i am replacing with getline();
    getline(cin, s1.name);
    cout<<"enter semester(string): ";
    getline(cin, s1.semester);
    cout<<"enter age: ";
    cin>>s1.age;
    cin.ignore();    //ignore the buffer after  cin, so that it couldn't impact the next string
    
    cout<<"enter second person's name: ";
    getline(cin, s2.name);
    cout<<"enter semester(string): ";
    getline(cin, s2.semester);
    cout<<"enter age: ";
    cin>>s2.age;
    cin.ignore();
    
    cout<<"enter third person's name: ";
    getline(cin, s3.name);
    cout<<"enter semester(string): ";
    getline(cin, s3.semester);
    cout<<"enter age: ";
    cin>>s3.age;
    
    cout<<"name: "<<s1.name<<endl;
    cout<<s1.semester<<endl;
    cout<<"age: "<<s1.age<<endl;
    cout<<endl;
    
    cout<<"name: "<<s2.name<<endl;
    cout<<s2.semester<<endl;
    cout<<"age: "<<s2.age<<endl;
    cout<<endl;

    cout<<"name: "<<s3.name<<endl;
    cout<<s3.semester<<endl;
    cout<<"age: "<<s3.age<<endl;
    cout<<endl;
    return 0;
}
 
