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

struct student s[3];

for(int i=0;i<=2;i++)
{
cout<<"student	:"<<i+1<<endl;

cout<<"enter name :"<<endl;
cin>>s[i].name;

cout<<"enter age :"<<endl;
cin>>s[i].age;

cout<<"enter roll :"<<endl;
cin>>s[i].roll;
}
	
	for(int i=0;i<=2;i++)
	{
		cout<<"------------------------------------------------------------------------------";
		s[i].info();
		cout<<"------------------------------------------------------------------------------";
	
	}
	
	return 0;
}
