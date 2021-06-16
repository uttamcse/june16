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
	struct student s1= {"uttam",20,10};
	s1.info();
	
	cout<<"------------------------------------------------------------------------------";
	
	struct student s2= {"utsav",20,10};
	s2.info();
	
	return 0;
}
