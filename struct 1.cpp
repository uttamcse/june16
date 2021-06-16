#include<iostream>
#include<string>
using namespace std;


struct student {
	
	string name;
	int age;
	int roll;
	string address;

};
int main()
{

	struct student s1 ={"Uttam",20,19162,"Prayagraj"};
	
	cout<<"Name : "<<s1.name<<endl;
	cout<<"Age : "<<s1.age<<endl;
	cout<<"Roll : "<<s1.roll<<endl;
	cout<<"Address : "<<s1.address<<endl;
	
	return 0;
}
