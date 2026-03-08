#include<iostream>
using namespace std;

class student{
	private:
	int rollno;
	string name1;
	
	public:
	void getdata(){
		cout<<"\nEnter your roll no. :";
		cin>>rollno;
		cin.ignore();
		cout<<"\nEnter your name :";
		getline(cin,name1);
	}	
	void putdata(){
		cout<<"\nYour roll no. is :"<<rollno;
		cout<<"\nyour name is :"<<name1;
	}
};



int main()
{
	student s1;
	s1.getdata();
	s1.putdata();
	
	return 0;
}
