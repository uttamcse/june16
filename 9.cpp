#include<iostream>
#include<string>
using namespace std;

struct student{
	
	float mm,cm,pm,pcm,wp;
	
	void result()
	{
		cout<<"------------------------------------------------------------------------------";
		cout<<"Name : Uttam Yadav "<<"    Father Name : Anil Kumar Yadav"<<endl<<"Branch : Computer Science And Engineering"<<endl<<"Roll No : 19162   ";
		cout<<"    Semester : 2nd sem"<<endl;
		cout<<"------------------------------------------------------------------------------";
		cout<<" SUBJECT              	        TH SESS    MID    END    PR SESS        TOTAL ";
		cout<<"------------------------------------------------------------------------------"<<endl;
		cout<<"Chemistry                          38      30      42       43            "<<cm<<endl;
		cout<<"Mathematics-II                             33      38       43            "<<mm<<endl;
		cout<<"Programming                        32      36      41 	    40            "<<pm<<endl;
		cout<<"Profesional communication                  31      35	    40            "<<pcm<<endl;
		cout<<"Workshop Practical                            	            47            "<<wp<<endl;
		cout<<"Total Marks                                  	                       "<<(mm+pcm+cm+pm+wp)<<"/750";
		cout<<"------------------------------------------------------------------------------";
	
		if((mm>30 && pm>30 && pcm>30 && cm>30 )&&((mm+pcm+cm+pm+wp)*100)/750>60)
		{
			cout<<"	          RESULT/DIVISION : PASSED/FIRST  "<<endl;
		}
		
		else if((mm>30 && pm>30 && pcm>30 && cm>30 )&&(((mm+pcm+cm+pm+wp)*100)/750>50 &&(mm+pcm+cm+pm+wp)*100)/750<60)
		{
			cout<<"	          RESULT/DIVISION : PASSED/SECOND  "<<endl;
		}
		
		else if((mm>30 && pm>30 && pcm>30 && cm>30 )&&(((mm+pcm+cm+pm+wp)*100)/750>50 &&(mm+pcm+cm+pm+wp)*100)/750<60)
		{
			cout<<"	          RESULT/DIVISION : PASSED/THIRD  "<<endl;
		}
		else
		{
			cout<<"                                        FAILED"<<endl;
		}	
		cout<<"------------------------------------------------------------------------------"<<endl;
	}
};
int main()
{
int roll;
while(1)
{

cout<<"enter roll no to check result :";
cin>>roll;	

struct student s1={67,88,78,77,47};
if(roll==1)
{
s1.result();	
}

struct student s2={57,78,74,73,43};
if(roll==2)
{
s2.result();	
}

struct student s3={71,58,68,78,44};
if(roll==3)
{
s3.result();	
}

struct student s4={27,88,68,85,41};
if(roll==4)
{
s4.result();	
}
}
return 0;	
}
