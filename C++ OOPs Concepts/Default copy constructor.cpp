#include<iostream>
using namespace std;

class student{
	int id;
	string name;
	public:
		void input()
		{
			cout<<"Enter details:"<<endl;
			cout<<"Enter student id:"<<endl;
			cin>>id;
			cin.ignore();
			cout<<"Enter student name :"<<endl;
			getline(cin,name);
		}
		void display()
		{
			cout<<" Student id:"<<id<<endl;
		
			cout<<"Student name :"<<name<<endl;
		
		}
};

main()
{
	student s;
	s.input();
	student s1(s);
	s.display();
	s1.display();
	
	
}
