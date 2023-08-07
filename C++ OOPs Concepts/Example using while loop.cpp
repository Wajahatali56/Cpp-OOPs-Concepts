#include<iostream>
using namespace std;



class player{
	string pname;
	float pavg;
	string pteam;
	public:
		void input(){
			cout<<"Enter players details:"<<endl;
			cout<<"Enter name of player:"<<endl;
			getline(cin,pname);
			
			cin.ignore();
			cout<<"Enter average of player:"<<endl;
			cin>>pavg;
			cin.ignore();
			
			cout<<"Enter team of player:"<<endl;
			getline(cin,pteam);
			
		}
		
		void output(){
			cout<<"The details of players are :"<<endl;
			cout<<"Name of player is:"<<pname<<endl;
			cout<<"Average of player is:"<<pavg<<endl;
			cout<<"Team of player is:"<<pteam<<endl;
			
		}
};

main(){
	player p;
	p.input();
	p.output();
	
	
	char x;
	do{

	
	cout<<"press y to continue:"<<endl;
	cin>>x;
	p.input();
	p.output();
}while(x=='y');


}
