#include<iostream>
using namespace std;
/*   */
class notebook{
	public:
	int bookid;
	string bookname;
	int bookprice;
	public:
		notebook()
		{
			cout<<"Enter book details please:"<<endl;
			cout<<"Enter book id :"<<endl;
			cin>>bookid;
			cin.ignore();
			
			cout<<"Enter book name :"<<endl;
			getline(cin,bookname);
		
			
			cout<<"Enter book price :"<<endl;
			cin>>bookprice;
			cin.ignore();
	}
	void displayproduct()
	{
	cout<<"ID of book ="<<bookid<<endl;
	cout<<"Name of book ="<<bookname<<endl;
	cout<<"Price of book ="<<bookprice<<endl;	
	}
};

main(){
	
	notebook nb,nb1;
	int sum=nb.bookprice+nb1.bookprice;
	cout<<"Sum of prices = "<<sum <<":"<<endl;
	if (sum%2==0)
	{
		cout<<"Sum is even , So print the details of First book:"<<endl;
		
		nb.displayproduct();
		
	}
	
	else
	{
	cout<<"Sum is odd , So print the details of second book:"<<endl;
		nb1.displayproduct();
		
	}
	
}
