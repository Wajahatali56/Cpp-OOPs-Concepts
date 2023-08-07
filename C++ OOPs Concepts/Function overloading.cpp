#include<iostream>
using namespace std;
/*PROBLEM:  we can not write multiple functions with same name in class....function overloading
soluton:
1) No. of arguments change 
2) sequence of arguments change
*/
class swim{
	
	public:
		void display(int n,float f)
		{
			
		cout<<"i am in class";	
		}
		void display(float f,int n)
		{
		cout<<"\ni am also in class";
		
		}
};


int main(){
	swim m;
	m.display(10,10.1);
	m.display(10.1,2);
}
