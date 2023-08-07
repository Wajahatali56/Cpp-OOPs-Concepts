#include<iostream>
using namespace std;
class Array{
	int arr[5];
	public:
		void input();
		void display();
		void max();
		void min();
};
void Array :: input()
{
	cout<<"Enter five numbers:"<<endl;
	for(int i=0; i<5; i++)	
	cin>>arr[i];
}
void Array :: display()
{
	cout<<"The five numbers are:"<<endl;
	for(int i=0; i<5; i++)
	cout<<arr[i]<<endl;
}
void Array :: max()
{
	int mx = arr[0];
	for(int i=0; i<5; i++){
		if (mx<arr[i]){
			mx=arr[i];
		}
	}
	cout<<"Max number = "<<mx<<endl;	
}
void Array :: min()
{
	int mn = arr[0];
	for(int i=0; i<5; i++){
		if (mn>arr[i]){
			mn=arr[i];
		}
	}
	cout<<"Max number = "<<mn<<endl;
	
}

main()
{
	Array a;
	a.input();
	a.display();
	a.max();
	a.min();
}
