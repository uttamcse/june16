#include<iostream>
#include<string>
using namespace std;


struct student{
	
	
	float tsc,tsp;
	float mdc,mdm,mdp,mdpc;
	float edc,edm,edp,edpc;
	float psc,psm,psp,pspc;
	float mm,cm,pm,pcm,wp;
	//float tcm=(tsc+mdc+edc+psc);
//	float tmm=(mdm+edm+psm);
	
	//float tpm=(tsp+mdp+edp+psp);
	//float tpcm=(mdpc+edpc+pspc);
//	float twp=(wp);
//	float total=(tmm+tcm+tpm+tpcm);*/
	
	void result()
	{
		cout<<"------------------------------------------------------------------------------";
		cout<<"Name : Uttam Yadav "<<"    Father Name : Anil Kumar Yadav"<<endl<<"Branch : Computer Science And Engineering"<<endl<<"Roll No : 19162   ";
		cout<<"    Semester : 2nd sem"<<endl;
		cout<<"------------------------------------------------------------------------------";
		cout<<" SUBJECT              	        TH SESS    MID    END    PR SESS        TOTAL ";
		cout<<"------------------------------------------------------------------------------"<<endl;
		cout<<"Chemistry                         "<<tsc<<"       "<<mdc<<"      "<<edc<<"       "<<psc<<"            "<<(tsc+mdc+edc+psc)<<endl;
		cout<<"Mathematics-II                             "<<mdm<<"      "<<edm<<"       "<<psm<<"            "<<(mdm+edm+psm)<<endl;
		cout<<"Programming                       "<<tsp<<"       "<<mdp<<"      "<<edp<<" 	    "<<psp<<"            "<<(tsp+mdp+edp+psp)<<endl;
		cout<<"Profesional communication                  "<<mdpc<<"      "<<edpc<<"       "<<psp<<"            "<<(mdpc+edpc+pspc)<<endl;
		cout<<"Workshop Practical                          	                       "<<wp+0<<"           "<<wp+0<<endl;
		cout<<"Total Marks                                  	                       "<<(mm+pcm+cm+pm+wp)<<"/750";
		cout<<"------------------------------------------------------------------------------";
	
		if((mm>30 && pm>30 && pcm>30 && cm>30 )&&(((mm+pcm+cm+pm+wp)*100)/750)>60)
		{
			cout<<"	          RESULT/DIVISION : PASSED/FIRST  "<<endl;
		}
		
		else if((mm>30 && pm>30 && pcm>30 && cm>30 )&&(((mm+pcm+cm+pm+wp)*100)/750)>=50 &&(((mm+pcm+cm+pm+wp)*100)/750)<60)
		{
			cout<<"	          RESULT/DIVISION : PASSED/SECOND  "<<endl;
		}
		
		else if((mm>30 && pm>30 && pcm>30 && cm>30 )&&(((mm+pcm+cm+pm+wp)*100)/750)>=30 &&(((mm+pcm+cm+pm+wp)*100)/750)<50)
		{
			cout<<"	          RESULT/DIVISION : PASSED/THIRD  "<<endl;
		}
		else
		{
			cout<<"                     RESULT/DIVISION : FAILED"<<endl;
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

struct student s1={38,33,30,33,36,31,42,38,41,35,43,43,40,40,47};
if(roll==1)
{
s1.result();	
}

struct student s2={78,74,73,43};
if(roll==2)
{
s2.result();	
}

struct student s3={91,98,98,98,94};
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
