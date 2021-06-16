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
	while(1)
	{
		
	int roll;
	cout<<"enter roll : ";
	cin>>roll;
	cout<<"------------------------------------------------------------------------------"<<endl;
	if(roll==1)
	{
	struct student s1 ={"Uttam",20,19162,"Prayagraj"};
	
	cout<<"Name : "<<s1.name<<endl;
	cout<<"Age : "<<s1.age<<endl;
	cout<<"Roll : "<<s1.roll<<endl;
	cout<<"Address : "<<s1.address<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;

}  
	
	if(roll==2)
	{
	struct student s1 ={"Utsav",20,19161,"Prayagraj"};
	
	cout<<"Name : "<<s1.name<<endl;
	cout<<"Age : "<<s1.age<<endl;
	cout<<"Roll : "<<s1.roll<<endl;
	cout<<"Address : "<<s1.address<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
}  
	if(roll==3)
	{
	struct student s1 ={"Prashant",20,19138,"Prayagraj"};
	
	cout<<"Name : "<<s1.name<<endl;
	cout<<"Age : "<<s1.age<<endl;
	cout<<"Roll : "<<s1.roll<<endl;
	cout<<"Address : "<<s1.address<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
}  

}
	return 0;
}
