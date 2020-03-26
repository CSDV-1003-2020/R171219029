#include<iostream>
using namespace std;
class student{
	char name[10];
	int roll(3);
	char gender;
	public:
		void student_detail(){
			cout<<"enter student name"<<endl;
			cin>>name;
			cout<<"enter roll number"<<endl;
			cin>>roll;
			cout<<"enter gender"<<endl;
			cin>>gender;
		}
		void display_student_detail(){
			cout<<"name"<<endl;
			cout<<"roll"<<endl;
			cout<<"gender"<<endl;
		}
};
