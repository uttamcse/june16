#include<iostream>
#include<string>
using namespace std;

struct student {
	
	string name;
	int age;
	int roll;
	
	void info()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Age :"<<age<<endl;
		cout<<"Roll :"<<roll<<endl;
	}
};
int main()
{
	int rollno;
	cout<<"enter roll no :";
	cin>>rollno;
	
	struct student s1= {"uttam",20,10};
	
	if(rollno==1)
	{
		s1.info();	
	}

	
	cout<<"------------------------------------------------------------------------------";
	
	struct student s2= {"utsav",20,10};
	
	if(rollno==1)
	{
		s1.info();	
	}


	
	return 0;
}
