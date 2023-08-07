#include<iostream>
using namespace std;
/*write a programe that declare a class name MARKS with 3 data members to
 store marks of three subjects.... 
 write three functions in() to input details, sum() to display sum
 ,avg() to calculate average of all marks--?*/
 
class MARKS{
	int m1,m2,m3;
	int sum;
	float avg;
	public:
		void in(){
			cout<<"Enter marks details:"<<endl;
			cout<<"Enter marks of Computer Subject:";
			cin>>m1;
			cout<<"Enter marks of Bio subject:";
			cin>>m2;
			cout<<"Enter marks of Math subject:";
			cin>>m3;
		}
		void displaysum(){

			sum=m1+m2+m3;
			cout<<"Sum of three subject marks ="<<sum<<endl;
		}
		float average(){
			return sum/3;
		}
};


main()
{
	int myavg;
	MARKS m;
	m.in();
    m.displaysum();
	m.average();
	myavg=m.average();
	cout<<"Average of three subject marks ="<<myavg;
	
}
