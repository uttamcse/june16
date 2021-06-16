#include<iostream>
#include<string>
using namespace std;

struct student {
	
	int mm,cm,clm,pc;
	
	void resul()
	{
		cout<<"math marks :"<<mm<<endl;
		cout<<"chemistry marks :"<<cm<<endl;
		cout<<"c language marks :"<<clm<<endl;
		cout<<"profesnal communucation marks :"<<pc<<endl;
	}
};
int main()
{
	struct student s1={56,98,67,54};
	s1.resul();
			
	
	return 0;
}
