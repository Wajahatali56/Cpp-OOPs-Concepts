#include<iostream>
using namespace std;
/* Passing arguments to constructor  */
class MARKS{
	int id;
	int marks;
	int product;
	public:
		MARKS(int n1,int n2)
		{
			id=n1;
			marks=n2;
		}
	void displayproduct()
	{
	product=id*marks;
	cout<<"Product of two data members ="<<product;	
	}
};

main(){
	MARKS m1(50,100);
	m1.displayproduct();
}
