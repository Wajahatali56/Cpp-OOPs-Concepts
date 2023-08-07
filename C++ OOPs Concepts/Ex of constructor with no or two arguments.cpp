#include<iostream>
using namespace std;


class doctor{
	int did;
	string dname;
	public:
		doctor(){
			did = 0;
			dname = "default";
			
			
		}
	
		doctor(int n , string f){
			
			did = n;
			dname = f;
			
		}
		
		void display(){
			cout<<"\nDetails of doctor are:"<<endl;
			cout<<"ID of doctor:"<<did<<endl;
			cout<<"Name of doctor:"<<dname<<endl;
		}
};

main(){
	doctor d1,d(0,"default");
	d1.display();
	d.display();
	int x;
	do{

	cout<<"Press 1 to continue....";
	cin>>x;
	d.display();
	d1.display();
}while(x==1);
	
}



