#include<iostream>
using namespace std;


class MARKS{
	int id;
	int marks;
	int product;
	public:
		MARKS()
		{
			id=50;
			marks=100;
		}
	void displayproduct()
	{
	product=id*marks;
	cout<<"Product of two data members ="<<product;	
	}
};

main(){
	MARKS m1;
	m1.displayproduct();
}
