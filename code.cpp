#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void create();
class User {

public:
    char username[50];
    char password[50];
    int login();
    void userRegister()
    {	system("cls");
  		char a[255];   
        fstream usersFile("proj.txt",ios::in|ios::out|ios::app);
        if (    !usersFile.is_open())
        {

            usersFile.open("proj.txt");

        }
        
           
	int p=0;
	while(!usersFile.eof())
	{
		usersFile.getline(a,255);
		if(strcmp(a,username)==0)
		{
		p++;
		cout<<"\tusername already exists,register again"<<endl;
		break;
		}
	usersFile.getline(a,255);
	}
	usersFile.close();
	usersFile.open("proj.txt",ios::in|ios::out|ios::app);

	if(p==0)
	{

            usersFile << username <<"\n"<< password << endl;
            create();


	}

	usersFile.close();
	}
};







class tenth
{
	public:
		void setvalues(string,string,string,string,string,char);
		void askquestion();
		void output();
		void total1();
		void total2();
	private:
		string question;
		string answer1;
		string answer2;
		string answer3;
		string answer4;
		char correctanswer;
};
int i=0;
int j=0;
char guess;
void tenth::setvalues(string p,string q,string r,string s,string t,char ca)
{
	question=p;
	answer1=q;
	answer2=r;
	answer3=s;
	answer4=t;	
	correctanswer=ca;	
}
void tenth::askquestion()
{
	
	cout<<"\n";
	cout<<question<<"\n";
	cout<<"\t\ta. "<<answer1<<endl;
	cout<<"\t\tb. "<<answer2<<endl;
	cout<<"\t\tc. "<<answer3<<endl;
	cout<<"\t\td. "<<answer4<<endl;
	cout<<"\twhat is your answer?"<<endl;
	cin>>guess;
}
void tenth::total1()
{
	if(guess==correctanswer)
	{
		i++;
	}
}
void tenth::total2()
{
	if(guess==correctanswer)
	{
		j++;
	}
}

void create()
{
    fstream fout; 

    fout.open("reportcard.csv", ios::out | ios::app); 
		cout<<"\n\n";
		cout<<"---------------------------------------------------------PROFILE PAGE-------------------------------------------------------------------"  ;  

    cout << "\n\n\t\tEnter the details of yours:\n\n"

    

    << endl; 

  



    char name[50],cont[50],fath[50],email[50]; 

    for (int i = 0; i < 1; i++) { 

	
		cout<< "\t\tENTER YOUR NAME:\t" ;
        cin >> name;cout<<endl;
		cout<<"\t\tENTER YOUR CONTACT NO:\t";
		cin>> cont;cout<<endl;
		cout<<"\t\tENTER YOUR EMAIL ID:\t";
		cin>> email; cout<<endl;
		cout<<"\t\tENTER YOUR FATHER NAME:\t";
    	cin>>fath;cout<<endl;
  

        // Insert the data to file 

        fout << name << ", "

             << cont << ", "

             << email << ", "

             << fath

             << "\n"; 

    } 
}
class ug1
{
	public:
		void setvalues(string,string,string,string,string,char);
		void askquestion();
		void total1();
		void total2();
		void collegedisplay();
	private:
		string question;
		string answer1;
		string answer2;
		string answer3;
		string answer4;
		char correctanswer;
		
};
float i1=0;
float j1=0;
void ug1::setvalues(string p,string q,string r,string s,string t,char ca)
{
	question=p;
	answer1=q;
	answer2=r;
	answer3=s;
	answer4=t;	
	correctanswer=ca;	
}
void ug1::askquestion()
{
	
	cout<<"\n";
	cout<<question<<"\n";
	cout<<"\t\ta. "<<answer1<<endl;
	cout<<"\t\tb. "<<answer2<<endl;
	cout<<"\t\tc. "<<answer3<<endl;
	cout<<"\t\td. "<<answer4<<endl;
	cout<<"\twhat is your answer?"<<endl;
	cin>>guess;
}
void ug1::total1()
{
	if(guess==correctanswer)
	{
		i1++;
	}
}
void ug1::total2()
{
	if(guess==correctanswer)
	{
		j1++;
	}
}
void ug1::collegedisplay()
{
		cout<<"\n\n\tTop 8 M.S Colleges in THE WORLD\n\n\n";
			cout<<"\t\t1."<<"MASSACHUSETTS INSTITUTE OF TECHNOLOGY (MIT), US\n\n";
			cout<<"\t\t2."<<"STANFORD UNIVERSITY, US\n\n";
			cout<<"\t\t3."<<"HARVARD UNIVERSITY, US\n\n";
			cout<<"\t\t4."<<"UNIVERSITY OF OXFORD, UK\n\n";
			cout<<"\t\t5."<<"CALIFORNIA INSTITUTE OF TECHNOLOGY(CALTECH), US\n\n";
			cout<<"\t\t6."<<"ETH ZURICH-SWISS FEDERAL INSTITUTE OF TECHNOLOGY, SWITZERLAND\n\n";
			cout<<"\t\t7."<<"UNIVERSITY OF CAMBRIDGE, UK\n\n";
			cout<<"\t\t8."<<"UCL(UNIVERSITY COLLOGE LONDON), UK\n\n";
			int bi2;
			cout<<"\tFOR MORE COLLEGE DETAILS ENTER RESPECTIVE NUMBER:\n ";
			cin>>bi2;
			switch(bi2)
			{
				case 1:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME            : MASSACHUSETTS INSTITUTE OF TECHNOLOGY (MIT), US\n\n";
						cout<<"\t\tWORLD RANKING               : 1\n\n";
						cout<<"\t\tESTABLISHED                 : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum)  : 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)     : 1lakh\n\n";
						break;
				case 2:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME            : STANFORD UNIVERSITY, US\n\n";
						cout<<"\t\tWORLD RANKING               : 2\n\n";
						cout<<"\t\tESTABLISHED                 : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum)  : 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)     : 1lakh\n\n";
						break;
				case 3:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME            : HARVARD UNIVERSITY, US\n\n";
						cout<<"\t\tWORLD RANKING               : 3\n\n";
						cout<<"\t\tESTABLISHED                 : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum)  : 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)     : 1lakh\n\n";
						break;
				case 4:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME            : UNIVERSITY OF OXFORD, UK\n\n";
						cout<<"\t\tWORLD RANKING               : 4\n\n";
						cout<<"\t\tESTABLISHED                 : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum)  : 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)     : 1lakh\n\n";
						break;
				case 5:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME            : CALIFORNIA INSTITUTE OF TECHNOLOGY(CALTECH), US\n\n";
						cout<<"\t\tWORLD RANKING               : 5\n\n";
						cout<<"\t\tESTABLISHED                 : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum)  : 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)     : 1lakh\n\n";
						break;
				case 6:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME            : ETH ZURICH-SWISS FEDERAL INSTITUTE OF TECHNOLOGY, SWITZERLAND\n\n";
						cout<<"\t\tWORLD RANKING               : 6\n\n";
						cout<<"\t\tESTABLISHED                 : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum)  : 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)     : 1lakh\n\n";
						break;
				case 7:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME            : UNIVERSITY OF CAMBRIDGE, UK\n\n";
						cout<<"\t\tWORLD RANKING               : 7\n\n";
						cout<<"\t\tESTABLISHED                 : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum)  : 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)     : 1lakh\n\n";
						break;
				case 8:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME            : UCL(UNIVERSITY COLLOGE LONDON), UK\n\n";
						cout<<"\t\tWORLD RANKING               : 8\n\n";
						cout<<"\t\tESTABLISHED                 : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum)  : 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)     : 1lakh\n\n";
						break;
						
				default:cout<<"\n\t\tinvalid choice\n";
			}
	
	
}
class ug2
{
	public:
		void setvalues(string,string,string,string,string,char);
		void askquestion();
		void total1();
		void total2();
		void total3();
		void total4();
		void total5();
		void total6();
		void collegedisplay();
			
		
	private:
		string question;
		string answer1;
		string answer2;
		string answer3;
		string answer4;
		char correctanswer;
		
};
int i2=0;
int j2=0;
int k2=0;
int l2=0;
int m2=0;
int n2=0;
void ug2::setvalues(string p,string q,string r,string s,string t,char ca)
{
	question=p;
	answer1=q;
	answer2=r;
	answer3=s;
	answer4=t;	
	correctanswer=ca;	
}
void ug2::askquestion()
{
	
	cout<<"\n";
	cout<<question<<"\n";
	cout<<"\t\ta. "<<answer1<<endl;
	cout<<"\t\tb. "<<answer2<<endl;
	cout<<"\t\tc. "<<answer3<<endl;
	cout<<"\t\td. "<<answer4<<endl;
	cout<<"\twhat is your answer?"<<endl;
	cin>>guess;
}
void ug2::total1()
{
	if(guess==correctanswer)
	{
		i2=i2+4;
	}
}
void ug2::total2()
{
	if(guess==correctanswer)
	{
		j2=j2+4;
	}
}
void ug2::total3()
{
	if(guess==correctanswer)
	{
		k2=k2+4;
	}
}
void ug2::total4()
{
	if(guess==correctanswer)
	{
		l2=l2+4;
	}
}
void ug2::total5()
{
	if(guess==correctanswer)
	{
		m2=m2+4;
	}
}
void ug2::total6()
{
	if(guess==correctanswer)
	{
		n2=n2+4;
	}
}
void ug2::collegedisplay()
{
			cout<<"\n\n\tTop 8 M.TECH Colleges in india\n\n\n";
			cout<<"\t\t1."<<"IIT, MADRAS\n\n";
			cout<<"\t\t2."<<"IIT, BOMBAY\n\n";
			cout<<"\t\t3."<<"IIT, KHARAGPUR\n\n";
			cout<<"\t\t4."<<"IIT, DELHI\n\n";
			cout<<"\t\t5."<<"IIT, KANPUR\n\n";
			cout<<"\t\t6."<<"BITS, PILANI\n\n";
			cout<<"\t\t7."<<"IIT, HYDERABAD\n\n";
			cout<<"\t\t8."<<"NIT, THIRUCHI\n\n";
			int bi1;
			cout<<"\tFOR MORE COLLEGE DETAILS ENTER RESPECTIVE NUMBER:\n ";
			cin>>bi1;
			switch(bi1)
			{
				case 1:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME          : IIT MADRAS\n\n";
						cout<<"\t\tNIRF RANKING              : 1\n\n";
						cout<<"\t\tESTABLISHED               : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum): 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)   : 1lakh\n\n";
						break;
				case 2:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME          : IIT BOMBAY\n\n";
						cout<<"\t\tNIRF RANKING              : 3\n\n";
						cout<<"\t\tESTABLISHED               : 1958\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum): 16lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)   : 1.3lakhs\n\n";
						break;
				case 3:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME          : IIT KHARAGPUR\n\n";
						cout<<"\t\tNIRF RANKING              : 4\n\n";
						cout<<"\t\tESTABLISHED               : 1950\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum): 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)   : 1lakh\n\n";
						break;
				case 4:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME          : IIT DELHI\n\n";
						cout<<"\t\tNIRF RANKING              : 2\n\n";
						cout<<"\t\tESTABLISHED               : 1961\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum): 15lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)   : 1lakh\n\n";
						break;
				case 5:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME          : IIT KANPUR\n\n";
						cout<<"\t\tNIRF RANKING              : 5\n\n";
						cout<<"\t\tESTABLISHED               : 1959\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum): 16lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)   : 1lakh\n\n";
						break;
				case 6:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME          : BITS PILANI\n\n";
						cout<<"\t\tNIRF RANKING              : 25\n\n";
						cout<<"\t\tESTABLISHED               : 2008\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum): 11lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)   : 3.2lakhs\n\n";
						break;
				case 7:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME          : IIT HYDERABAD\n\n";
						cout<<"\t\tNIRF RANKING              : 8\n\n";
						cout<<"\t\tESTABLISHED               : 2008\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum): 11lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)   : 3lakhs\n\n";
						break;
				case 8:system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME          : NIT THIRUCHIRAPALLI\n\n";
						cout<<"\t\tNIRF RANKING              : 10\n\n";
						cout<<"\t\tESTABLISHED               : 1964\n\n";
						cout<<"\t\tAVERAGE PACKAGE(per annum): 7.5lakhs\n\n";
						cout<<"\t\tCOLLEGE FEES(per annum)   : 1.5lakhs\n\n";
						break;
				default:cout<<"\n\t\tinvalid choice\n";
				
			}
	
}
int main()
{   cout<<"\n\n\n\n\t\t\t\t--------------------------------------------WELCOME TO STREAM SELECTOR--------------------------------------------------"<<endl;
	cout<<"\t\t\t\t                                                                                    -Map your Talents"<<endl;
	User user1;
	
		
	while(1)
	{
    cout<<"\n\n\n\t\t1.Register"<<endl<<"\t\t2.Student Login"<<endl<<"\t\t3.Admin Login"<<endl<<"\t\t4.Ask query"<<endl<<"\t\t5.Exit"<<endl;
    int ch;int qu=0;
    cout<<"\t\tEnter Your Choice:";
    cin>>ch;	
    switch(ch)
    {
	case 2: 		system("cls");
		cout<<"\n\n\t\t------------------------------------------------"<<"Student Login Portal"<<"--------------------------------------------------"<<endl;	
		cout<<endl<<endl<<endl;
			int p;
			p=user1.login();
			if(p==10)
			goto y;
			break;
    case 1:system("cls");
    		
		cout<<"\n\n\t\t-----------------------------------------------"<<"Student Register Portal"<<"--------------------------------------------------"<<endl;	
		cout<<endl<<endl<<endl;
			cout << "\t\tWelcome!\n-------------------------------\n\nPlease register.\nEnter a new username:\n";
    		cin >> user1.username;
    		s:
    		{
				
    		cout << "\n\tPlease enter a new password:\n";
    		cin>>user1.password;
				if(strlen(user1.password)<6)
				{
					cout<<"\n\tPassword should be having minimum of 6 characters\nPlease try again\n";
					goto s;
				}
			}
    		user1.userRegister(); 
			break;
	case 5: return 0;
	case 3:system("cls");
	cout<<endl;
	cout<<"\n\n\t\t------------------------------------------------------"<<"Admin Portal"<<"--------------------------------------------------"<<endl;	
		cout<<"\tenter user id:\n";
	cin>>user1.username;
	if(strcmp(user1.username,"cbit")==0)
	{
		cout<<"\tPassword: ";
		r:
			{
				string passwd="";
				int ch1;
				while(ch1=getch())
				{
					if(ch1==13||ch1=='$')
					{
						break;
					}
					else if(ch1==8)
					{
						if(passwd.length()>0)
						{
							cout<<"\b \b";
							passwd.erase(passwd.length()-1);
						}		
					}						
					else if(ch1>=0&&ch1<=127)
					{
						cout<<"*";
						passwd+=ch1;
					}
				
			}
				char login_password1[passwd.length()+1];
				strcpy(login_password1,passwd.c_str());
				strcpy(user1.password,login_password1);
		
				if(strcmp(user1.password,"saikalyan")==0)
				{
				cout<<"\tlogin successful"<<endl;goto e;}
				else{
					cout<<"\tWrong password. "<<endl;
		
    		cout<<"\tFor Trying again press 1,else for exit press 0 :";
    		int d;
    		cin>>d;
    		switch(d)
    		{
			case 0:return 0;
    		case 1:	cout<<"\tpassword:\n";
				goto r;
    			break;
			default:cout<<"\tinvalid choice";}
				}
		}
	}
			else
			{
				cout<<"\twrong user id ,login again\n";
			}
		
	
			cout<<endl;
	
		break;
	case 4:{
		
	
			fstream quer("ques.txt",ios::in|ios::out|ios::app);
			char a[50],b[50];
			while(!quer.eof())
			{
			quer.getline(a,255);
			
			if((qu%2!=0)&&(strcmp(a,"")==0))
			{
			cout<<"\tenter your query"<<endl;
			getchar();
			cin.getline(b,50);
			quer<<b<<"\n";
			break;
			}
				if(qu==0&&quer.eof())
			{	quer.close();
			fstream quer("ques.txt",ios::in|ios::out|ios::app);
			cout<<"\tenter your query"<<endl;
			getchar();
			cin.getline(b,50);
			quer<<b<<"\n";
			break;
			}
			qu++;
			}
			quer<<"\n";
			quer.close();
			break;
		}
default:cout<<"\tinvalid choice";
	
	}}
	
	
	
e:
{
	cout<<"\n\n\t\t1.display all registers\n\t\t2.print queries\n";
	int k;
	cin>>k;
	switch(k)
	{
		
	case 1:	system("CLS");
			cout<<"\tdisplaying all usernames and passwords" <<endl;
		char stored_username[50];
		fstream pull("proj.txt",ios::in|ios::out|ios::app);
		int j=0;
		int i=0;
		while((!pull.eof()))
		{j++;
		pull.getline(stored_username,255);
		}
		pull.close();
		pull.open("proj.txt",ios::in|ios::out|ios::app);
		while(i<j-1)
		{
		
		if(i%2==0)
		{
		pull.getline(stored_username,255);
		cout<<"Username:"<<stored_username<<"\t\t\t";
		}
		else
		{
		pull.getline(stored_username,255);
		cout<<"Password:"<<stored_username<<endl;  
		} i++; }
		break;
	
	
	}
	
	
	
	return 0;
}
	
	
	
	
	
	
	
	y:
	
	{
	int l;
	system("cls");
	cout<<"\n\n\n\tEnter your Class Completed :"<<endl;
	cout<<"\n\t1 . 10th \n\t2 . 12th \n\t3 . Under Graduation\n\tEnter Your Choice:\n";
	cin>>l;
	switch(l)
	{
		case 1:
				goto z;
				break;
		case 2:
				int in;
				system("CLS");
				cout<<"\tENTER YOUR STREAM SELECTED FOR INTERMEDIATE\n\n1.MPC\n\n2.BIPC\n\n";
				cout<<"\tENTER YOUR CHOICE:\n";
				cin>>in;
				if(in==1)	
				goto mp;
				else
				goto bip;
				break;
		case 3:
				int in1,in2;
				system("cls");
				cout<<"\n\n\n\tIf you want to go for further studies after doing UG course there are two possibilities for you either go for M.TECH in India or go for M.S in Abroad\n\n\t** M.TECH\n\n\tMTech is a professional postgraduate engineering master degree programme awarded to candidates after completion of two years of\n\tstudy in the discipline of engineering. This degree is predicated in a specific branch of engineering.\n\tIn India, the ME/MTech degree is offered across various specializations. These specializations include Civil Engineering,\n\tComputer Science and Engineering, Chemical Engineering, Electrical Engineering, VLSI, Mechanical Engineering, Electronics and Communication Engineering etc.\n\tstudents get their admission in to the best M.TECH colleges in india based on GATE score\n";
				cout<<"\n\n\n\t** M.S\n\n\tA Master of Science is a master's degree in the field of science awarded by universities in many \n\tcountries or a person holding such a degree.[1] In contrast to the Master of Arts degree, the Master of Science degree \n\tis typically granted for studies in sciences, engineering and medicine and is usually for programs that are more focused on\n\tscientific and mathematical subjects; however, different universities have different conventions and may also offer the degree \n\tfor fields typically considered within the humanities and social sciences. While it ultimately depends upon the specific\n\tprogram, earning a Master of Science degree typically includes writing a thesis.\n\tstudents get their admission in to the best universities in the world based on GRE and IELTS score.\n";
				cout<<"\n\n\n\tpress any number to go to next : ";
				cin>>in2;
				if(in2>=0)
				{
					system("cls");
				   cout<<"\n\n\tCOURSES\n\n\t1. M.TECH\n\n\t2. M.S\n";
				   cout<<"\n\tchoose your most prior course for your career from above:\n";
				cin>>in1;
				if(in1==1)
				goto ug2;
				else
				goto ug1;
			    }
				break;
		default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
			
	}
}

z:
{
	tenth q1,q2,q3,q4,q5,q6,q7,q8,q9,q10;
q1.setvalues("\t1.The no of three digit numbers divisible by 6?",
"149",
"166",
"150",
"151",
'c');
q2.setvalues("\t2.If three coins are tossed simultaneously,then the probability of getting atleast two heads,is",
"1/4",
"3/8",
"1/2",
"1/8",
'c');
q3.setvalues("\t3.The first negative term in the sequence 114,109,104,.........is when",
"n=21",
"n=22",
"n=23",
"n=24",
'd');
q4.setvalues("\t4.If a line divides any two sides of a triangle in the sae ratio,then ,..........",
"it will intersect the third side",
"it divides the third side in the same ratio",
"it is parallel to the third side",
"it is not possible",
'c');
q5.setvalues("\t5.If two parallel tangents PQ and RS touch the circle C at A and B,respectively,then AB is the......of the circle.",
"radius",
"diameter",
"chord",
"secant",
'b');
q6.setvalues("\t1.what is primarily responsible for ozone depletion?",
"UV radiation",
"CFCs",
"Sun",
"CO",
'b');
q7.setvalues("\t2.The ribs move up and outwards during",
"Exhalation",
"Inhalation",
"Exercise",
"Slow breathing",
'b');
q8.setvalues("\t3.Why is DNA copying is neccessary?",
"To be exactly similar to the parent",
"To be resistant to disease",
"To bring variation",
"all of these",
'c');
q9.setvalues("\t4.which of the following is an example of exhaustible source of energy?",
"Air",
"Water",
"Coal",
"Biogas",
'c');
q10.setvalues("\t5.which of the following acid is present in vinegar",
"Citric Acid",
"Malic Acid",
"Oxalic Acid",
"Acetic Acid",
'd');
system("CLS");
cout<<"\n\t\t\t\tTAKE A SMALL QUIZ IN MATHS\n\n";
q1.askquestion();
q1.total1();
q2.askquestion();
q2.total1();
q3.askquestion();
q3.total1();
q4.askquestion();
q4.total1();
q5.askquestion();
q5.total1();
system("CLS");
cout<<"\n\t\t\t\tTAKE A SMALL QUIZ IN BIOLOGY\n\n";
q6.askquestion();
q6.total2();
q7.askquestion();
q7.total2();
q8.askquestion();
q8.total2();
q9.askquestion();
q9.total2();
q10.askquestion();
q10.total2();
if(i>j)
{
	cout<<"\n\n\n\t\t* MPC stream maps to tour talent *\n";
}
else if(i<j)
{
	cout<<"\n\n\n\t\t* BIPC stream maps to your talent *\n";
}
else
{
	char ch;
cout<<"\n\tyou have the same level of knowledge in both Maths and Biology\n";
cout<<"\n\tso...please enter your favourite subject?\n";
cout<<"\ta.Maths"<<endl<<"\tb.Biology"<<endl<<"\tc.Physics"<<endl<<"\td.chemistry"<<endl;
cout<<"\tenter your choice:";
cin>>ch;
if(ch=='a')
{
	cout<<"\n\n\n\t\t* MPC stream maps to your talent *\n";
}
else if(ch=='b')
{
	cout<<"\n\n\n\t\t* BIPC stream maps to your talent *\n";
}
else if((ch=='c')||(ch=='d'))
{
	int x;
	cout<<"\n\n\t\tChoose your interested subject from the following:"<<endl;
	cout<<"\t1.Maths"<<endl<<"\t2.Biology"<<endl<<"\t3.Both";
	cin>>x;
	switch(x)
	{
		case 1:cout<<"\n\n\n\t\t* MPC stream maps to your talent *\n";
				break;
		case 2:cout<<"\n\n\n\t\t* BIPC stream maps to your talent *\n";
				break;
		case 3:cout<<"\n\n\n\t\t* MBIPC stream maps to your talent *\n";
				break;
		default:cout<<"\n\t\tInvalid choice\n";
	}
}
}
return 0;
}











mp:	
{
system("CLS"); 
char c1;
cout<<"\n\t\t\t\t\t\t\t\tLIST OF ENTRANCES IN MPC\n";
cout<<"\n\t\t* JEEMAINS\n\t\tThis is one of the most popular engineering entrance exam in India. From 2020, the exam is getting held twice a year in January"<<endl;
cout<<"\t\tand in April by NTA (National Testing Agency).The exam scores are used for admissions to BTech programmes offered by NIT's and IIIT's. "<<endl;
cout<<"\n\t\t* JEEADVANCED\n\t\tThis is the second stage of the JEE system, JEE Advanced is conducted once a year by the seven zonal IITs with guidance from the "<<endl;
cout<<"\t\tJoint Admission Board (JAB). The exam scores are used for admissions to BTech programmes offered by 24 IITs in India. Remember, only the top 2.4 lakh"<<endl;
cout<<"\t\trank holders of JEE Main will be eligible to appear for JEE Advanced."<<endl;
cout<<"\n\t\t* BITSAT\n\t\tIt isConducted by Birla Institute of Technology and Science (BITS) Pilani, BITSAT is a computer based test (CBT) conducted annually for admission"<<endl;
cout<<"\t\tto Integrated First degree programmes like BE, Pharma and MSc programmes offered by BITS campuses located at Pilani, Goa and Hyderabad."<<endl;
cout<<"\n\t\t* VITEEE\n\t\tIt isOne of the most popular institute level BTech exam, VITEEE is conducted by the Vellore Institute of Technology (VIT) for admissions to its BTech programmes."<<endl;
cout<<"\n\t\t* TS EAMCET\n\t\tIt is an entrance examination required for admission to some Engineering colleges in the state of Telangana."<<endl;
cout<<"\n\n\t\ta.JEEMAINS\n\t\tb.JEEADVANCED\n\t\tc.TSEAMCET\n\t\td.OTHER PRIVATE ENGINEERING COLLEGES\n";
cout<<"\n\n\t\tenter your choice to know the details of Best ENGINEERING colleges in INDIA\n";
cin>>c1;
switch(c1)
{
	case 'a':
		{
			system("CLS");
			cout<<"\n\tenter your interested branch from the following"<<endl;
			cout<<"\ta.Civil"<<endl<<"\tb.Computer Science"<<endl<<"\tc.Electronics"<<endl<<"\td.Mechanical"<<endl;
			cout<<"\tenter your choice:"<<endl;
			char br1;
			cin>>br1;
		cout<<"\n\tDetails Of best ENGINEERING Colleges that you can choose PRIORITY WISE for selected Branch\n\n";
			int ar1[20];
			switch(br1)
				{
					case 'a':
							ar1[0]=5 ;ar1[1]=1 ;ar1[2]=4 ;ar1[3]=3 ;ar1[4]=8 ;ar1[5]=10 ;ar1[6]=2 ;ar1[7]=9 ;ar1[8]=7 ;ar1[9]=6 ;
			 				break;
					case 'b':
							ar1[0]=2 ;ar1[1]=1 ;ar1[2]=3 ;ar1[3]=4 ;ar1[4]=5 ;ar1[5]=10 ;ar1[6]=6 ;ar1[7]=9 ;ar1[8]=7 ;ar1[9]=8 ;
			 				break;
					case 'c':
							ar1[0]=2 ;ar1[1]=4 ;ar1[2]=1 ;ar1[3]=5 ;ar1[4]=6 ;ar1[5]=9 ;ar1[6]=3 ;ar1[7]=8 ;ar1[8]=10 ;ar1[9]=7 ;
			 				break;
					case 'd':ar1[0]=1 ;ar1[1]=10 ;ar1[2]=4 ;ar1[3]=5 ;ar1[4]=3 ;ar1[5]=9 ;ar1[6]=2 ;ar1[7]=8 ;ar1[8]=6 ;ar1[9]=7 ;
			 				break;		
			 		default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
				}
			int i1=0;
			while(i1<10)
			{

					switch(ar1[i1])
				{
				
					case 1:cout<<"\t\t* NIT THIRUCHIRAPALLI"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 10\n";
						cout<<"\t\t\tESTABLISHED               : 1964\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 7.5lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.5lakhs\n\n";
						break;
					case 2:cout<<"\t\t* IIIT HYDERABAD"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 39\n";
						cout<<"\t\t\tESTABLISHED               : 1998\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 18lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 3lakhs\n\n";
						break;
					case 3:cout<<"\t\t* IIIT ALLAHABAD"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 82\n";
						cout<<"\t\t\tESTABLISHED               : 1999\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 15lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 2.5lakhs\n\n";
						break;
					case 4:cout<<"\t\t* NIT SURATHKAL"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 21\n";
						cout<<"\t\t\tESTABLISHED               : 1958\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 7.1lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.3lakhs\n\n";
						break;
					case 5:cout<<"\t\t* NIT WARANGAL"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 26\n";
						cout<<"\t\t\tESTABLISHED               : 1958\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 8.4lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 65000\n\n";
						break;
					case 6:cout<<"\t\t* IIIT BANGLORE"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 65\n";
						cout<<"\t\t\tESTABLISHED               : 1999\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 13lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 2lakhs\n\n";
						break;
					case 7:cout<<"\t\t* IIIT DELHI"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 55\n";
						cout<<"\t\t\tESTABLISHED               : 2008\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 12lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 2lakhs\n\n";
						break;
					case 8:cout<<"\t\t* NIT ROURKELA"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 16\n";
						cout<<"\t\t\tESTABLISHED               : 1961\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 6lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 50000\n\n";
						break;
					case 9:cout<<"\t\t* NIT SURAT"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 38\n";
						cout<<"\t\t\tESTABLISHED               : 1961\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 6.8lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.2lakhs\n\n";
						break;
					case 10:cout<<"\t\t* VNIT NAGPUR"<<endl;
						cout<<"\t\t\tNIRF RANKING              : 31\n";
						cout<<"\t\t\tESTABLISHED               : 1960\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 6lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.3lakhs\n\n";
						break;		
					default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
				}
					i1++;
			}
			}
	break;
  	case 'b':
  		{
			system("CLS");
  			cout<<"\n\tenter your interested branch from the following"<<endl;
			cout<<"\ta.Civil"<<endl<<"\tb.Computer Science"<<endl<<"\tc.Electronics"<<endl<<"\td.Mechanical"<<endl;
			cout<<"\tenter your choice:"<<endl;
			char br2;
			cin>>br2;
			cout<<"\n\tDetails Of best ENGINEERING Colleges that you can choose PRIORITY WISE for selected Branch\n\n";
			int ar2[20];
			switch(br2)
			{
				case 'a':ar2[0]=5 ;ar2[1]=4 ;ar2[2]=3 ;ar2[3]=1 ;ar2[4]=2 ;ar2[5]=6 ;
			 	break;
				case 'b':ar2[0]=3 ;ar2[1]=2 ;ar2[2]=4 ;ar2[3]=5 ;ar2[4]=1 ;ar2[5]=6 ;
			 	break;
				case 'c':ar2[0]=4 ;ar2[1]=1 ;ar2[2]=2 ;ar2[3]=5 ;ar2[4]=3 ;ar2[5]=6 ;
			 	break;
				case 'd':ar2[0]=3 ;ar2[1]=2 ;ar2[2]=5 ;ar2[3]=4 ;ar2[4]=1 ;ar2[5]=6 ;
			 	break;
				 default:
							cout<<"\t\t\t\tINVALID CHOICE\n";				
			}
			int i2=0;
			while(i2<6)
			{
				switch(ar2[i2])
				{
				
					case 1:cout<<"\t\t* IIT MADRAS\n";
						cout<<"\t\t\tNIRF RANKING              : 1\n";
						cout<<"\t\t\tESTABLISHED               : 1959\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 15lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1lakh\n\n";
						break;
					case 2:cout<<"\t\t* IIT DELHI\n";
						cout<<"\t\t\tNIRF RANKING              : 2\n";
						cout<<"\t\t\tESTABLISHED               : 1961\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 15lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1lakh\n\n";
						break;
					case 3:cout<<"\t\t* IIT BOMBAY\n";
						cout<<"\t\t\tNIRF RANKING              : 3\n";
						cout<<"\t\t\tESTABLISHED               : 1958\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 16lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.3lakhs\n\n";
						break;
					case 4:cout<<"\t\t* IIT KHARAGPUR\n";
						cout<<"\t\t\tNIRF RANKING              : 4\n";
						cout<<"\t\t\tESTABLISHED               : 1950\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 15lakhs\n\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1lakh\n";
						break;
					case 5:cout<<"\t\t* IIT KANPUR\n";
						cout<<"\t\t\tNIRF RANKING              : 5\n";
						cout<<"\t\t\tESTABLISHED               : 1959\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 16lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1lakh\n\n";
						break;
					case 6:cout<<"\t\t* IIT ROORKEE\n";
						cout<<"\t\t\tNIRF RANKING              : 6\n";
						cout<<"\t\t\tESTABLISHED               : 1847\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 12lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 80000\n\n";
						break;
					default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
				}
				i2++;
			}
		}
		break;
		case 'c':
			{
			system("CLS");
			cout<<"\n\tenter your interested branch from the following"<<endl;
			cout<<"\ta.Civil"<<endl<<"\tb.Computer Science"<<endl<<"\tc.Electronics"<<endl<<"\td.Mechanical"<<endl;
			cout<<"\tenter your choice:"<<endl;
			char br3;
			cin>>br3;
			cout<<"\n\tDetails Of best ENGINEERING Colleges that you can choose PRIORITY WISE for selected Branch\n\n";
			int ar3[20];
			switch(br3)
			{
				case 'a':ar3[0]=1 ;ar3[1]=7 ;ar3[2]=4 ;ar3[3]=9 ;ar3[4]=5 ;ar3[5]=2 ;ar3[6]=3 ;ar3[7]=6 ;ar3[8]=10 ;ar3[9]=8 ;
					 break;
				case 'b':ar3[0]=1 ;ar3[1]=3 ;ar3[2]=7 ;ar3[3]=4 ;ar3[4]=9 ;ar3[5]=5 ;ar3[6]=8 ;ar3[7]=2 ;ar3[8]=6 ;ar3[9]=10 ;
					 break;
				case 'c':ar3[0]=1 ;ar3[1]=7 ;ar3[2]=4 ;ar3[3]=5 ;ar3[4]=1 ;ar3[5]=9 ;ar3[6]=2 ;ar3[7]=8 ;ar3[8]=10 ;ar3[9]=6 ;
					 break;
				case 'd':ar3[0]=3 ;ar3[1]=5 ;ar3[2]=7 ;ar3[3]=4 ;ar3[4]=9 ;ar3[5]=8 ;ar3[6]=2 ;ar3[7]=6 ;ar3[8]=1 ;ar3[9]=10 ;
					 break;		
				default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
		
			}
			int i3=0;
			while(i3<10)
			{
				switch(ar3[i3])
				{
				
					case 1:cout<<"\t\t* JNTU HYDERABAD\n";
						cout<<"\t\t\tNIRF RANKING              : 45\n";
						cout<<"\t\t\tESTABLISHED               : 1972\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 5lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 15000\n\n";
						break;
					case 2:cout<<"\t\t* OSMANIA UNIVERSITY\n";
						cout<<"\t\t\tNIRF RANKING              : 46\n";
						cout<<"\t\t\tESTABLISHED               : 1918\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 5lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 20000\n\n";
						break;
					case 3:cout<<"\t\t* CHAITANYA BHARATHI INSTITUTE OF TECHNOLOGY\n";
						cout<<"\t\t\tNIRF RANKING              : 100\n";
						cout<<"\t\t\tESTABLISHED               : 1979\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 4.5lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 2lakhs\n\n";
						break;
					case 4:cout<<"\t\t* VASAVI COLLEGE OF ENGINEERING\n";
						cout<<"\t\t\tNIRF RANKING              : 169\n";
						cout<<"\t\t\tESTABLISHED               : 1981\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 4.5lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.6lakhs\n\n";
						break;
					case 5:cout<<"\t\t* VNR VJIET\n";
						cout<<"\t\t\tNIRF RANKING              : 109\n";
						cout<<"\t\t\tESTABLISHED               : 1995\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 4lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.2lakhs\n\n";
						break;
					case 6:cout<<"\t\t* SREENIDHI INSTITUTE OF TECHNOLOGY\n";
						cout<<"\t\t\tNIRF RANKING              : 125\n";
						cout<<"\t\t\tESTABLISHED               : 1998\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 4lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.3lakhs\n\n";
						break;
					case 7:cout<<"\t\t* CVR COLLEGE OF ENGINEERING\n";
						cout<<"\t\t\tNIRF RANKING              : 132\n";
						cout<<"\t\t\tESTABLISHED               : 2000\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 4lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 90000\n\n";
						break;
					case 8:cout<<"\t\t* GOKARAJU RANGARAJU INSTITUTE OF TECHNOLOGY\n";
						cout<<"\t\t\tNIRF RANKING              : 178\n";
						cout<<"\t\t\tESTABLISHED               : 1997\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 4lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 95000\n\n";
						break;
					case 9:cout<<"\t\t* MAHATMA GANDHI INSTITUTE OF TECHNOLOGY\n";
						cout<<"\t\t\tNIRF RANKING              : 140\n";
						cout<<"\t\t\tESTABLISHED               : 1997\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 3.8lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.6lakh\n\n";
						break;
					case 10:cout<<"\t\t* B.V.RAJU INSTITUTE OF TECHNOLOGY\n";
						cout<<"\t\t\tNIRF RANKING              : 146\n";
						cout<<"\t\t\tESTABLISHED               : 2012\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 3.8lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 95000\n\n";
						break;
				default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
				}	
				i3++;	
			}
		}
		break;
		case 'd':
			{
			system("CLS");
			cout<<"\n\tenter your interested branch from the following"<<endl;
			cout<<"\ta.Civil"<<endl<<"\tb.Computer Science"<<endl<<"\tc.Electronics"<<endl<<"\td.Mechanical"<<endl;
			cout<<"\tenter your choice:"<<endl;
			char br4;
			cin>>br4;
			cout<<"\n\tDetails Of best ENGINEERING Colleges that you can choose PRIORITY WISE for selected Branch\n\n";
			int ar4[20];
			switch(br4)
			{
				case 'a':ar4[0]=1 ;ar4[1]=4 ;ar4[2]=7 ;ar4[3]=6 ;ar4[4]=3 ;ar4[5]=8 ;ar4[6]=2 ;ar4[7]=5 ;
					 break;
				case 'b':ar4[0]=1;ar4[1]=2 ;ar4[2]=3 ;ar4[3]=4 ;ar4[4]=5 ;ar4[5]=6 ;ar4[6]=7 ;ar4[7]=8 ;
					 break;
				case 'c':ar4[0]=1 ;ar4[1]=4 ;ar4[2]=5 ;ar4[3]=7 ;ar4[4]=2 ;ar4[5]=3 ;ar4[6]=6 ;ar4[7]=8 ;
					 break;
				case 'd':ar4[0]=1 ;ar4[1]=3 ;ar4[2]=5 ;ar4[3]=7 ;ar4[4]=2 ;ar4[5]=4 ;ar4[6]=6 ;ar4[7]=8 ;
					 break;		
				default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
		
			}
			int i4=0;
			while(i4<8)
			{
				switch(ar4[i4])
				{
					
					case 1:cout<<"\t\t* BITS PILANI\n";
						cout<<"\t\t\tNIRF RANKING              : 25\n";
						cout<<"\t\t\tESTABLISHED               : 2008\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 11lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 3.2lakhs\n\n";
						break;
					case 2:cout<<"\t\t* MANIPAL INSTITUTE OF TECHNOLOGY\n";
						cout<<"\t\t\tNIRF RANKING              : 80\n";
						cout<<"\t\t\tESTABLISHED               : 1957\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 5.5lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 3.5lakhs\n\n";
						break;	
					case 3:cout<<"\t\t* VELLORE INSTITUTE OF TECHNOLOGY\n";
						cout<<"\t\t\tNIRF RANKING              : 18\n";
						cout<<"\t\t\tESTABLISHED               : 1984\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 5.2lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 3lakhs\n\n";
						break;
					case 4:cout<<"\t\t* THAPAR UNIVERSITY *\n";
						cout<<"\t\t\tNIRF RANKING              : 23\n";
						cout<<"\t\t\tESTABLISHED               : 1956\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 6.2lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 2.4lakhs\n\n";
						break;
					case 5:cout<<"\t\t* BIT MESRA\n";
						cout<<"\t\t\tNIRF RANKING              : 35\n";
						cout<<"\t\t\tESTABLISHED               : 1955\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 6.6lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 2.5lakhs\n\n";
						break;
					case 6:cout<<"\t\t* AMRITA COLLEGE OF ENGINEERING\n";
						cout<<"\t\t\tNIRF RANKING              : 33\n";
						cout<<"\t\t\tESTABLISHED               : 1994\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 4.2lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 3lakhs\n\n";
						break;
					case 7:cout<<"\t\t* SASTRA UNIVERSITY\n";
						cout<<"\t\t\tNIRF RANKING              : 84\n";
						cout<<"\t\t\tESTABLISHED               : 1984\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 3.5lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 1.3lakhs\n\n";
						break;
					case 8:cout<<"\t\t* GITAM UNIVERSITY\n";
						cout<<"\t\t\tNIRF RANKING              : 184\n";
						cout<<"\t\t\tESTABLISHED               : 2008\n";
						cout<<"\t\t\tAVERAGE PACKAGE(per annum): 3.2lakhs\n";
						cout<<"\t\t\tCOLLEGE FEES(per annum)   : 2.5lakhs\n\n";
						break;
				default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
				}
				i4++;
			}
		}	
		break;
}
int s1;
cout<<"\t\tPress any number For Checking College Details Again ,Press 0 for exit\n";
	cin>>s1;
	if(s1==0)
	{
		return 0;
	}
	else
	{
		goto mp;
	}
	return 0;
}




bip:
	{
		
	system("cls");
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t\t\tLIST OF ENTRANCES IN BIPC"<<endl<<endl<<endl<<endl;
	cout<<"\t\t1."<<"\t"<<"* EAMCET"<<"\n";
	cout<<"\t\t2."<<"\t"<<"* NEET"<<"\n";
	cout<<"\t\t3."<<"\t"<<"* JIPMER"<<"\n";
	cout<<"\t\t4."<<"\t"<<"* AIIMS"<<"\n";
	cout<<"\t\t5."<<"\t"<<"* FOREIGN MEDICAL GRADUATES EXAMINATION"<<"\n";
	cout<<"\t\t6."<<"\t"<<"* WBJEE MEDICAL"<<"\n";
	cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\tBRANCHES AVAILABLE AFTER 12TH IN BIPC:"<<endl<<endl<<endl<<endl;
	cout<<"\t\t1."<<"\t"<<"* ALLOPATHIC"<<"\n";
	cout<<"\t\t2."<<"\t"<<"* AYURVEDHA"<<"\n";
	cout<<"\t\t3."<<"\t"<<"* B.PHARMA"<<"\n";
	cout<<"\t\t4."<<"\t"<<"* DENTAL"<<"\n";
	cout<<"\t\t5."<<"\t"<<"* HOMEOPATHY"<<"\n";
	cout<<"\t\t6."<<"\t"<<"* PHYSIOTHERAPY"<<"\n";
	cout<<"\t\t7."<<"\t"<<"* UNANI"<<"\n";
	cout<<"\t\t8."<<"\t"<<"* VETERNARY"<<"\n";
	cout<<endl<<endl;
	cout<<"\t\tPress 1 for Displaying Prioritywise College Lists,Press 0 for Exit\n";
	int bi,s;
	cin>>s;
	if(s==0)
	return 0;
	else{system("cls");
		cout<<endl<<endl;
		cout<<"\t\tSELECT THE ENTRANCE TO SEE PRIORITYWISE COLLEGE LIST\n\n";
		cout<<"1.EAMCET\n\n2.NEET\n\n3.AIIMS\n\n\n";
		cout<<"ENTER YOUR CHOICE:";
		cin>>s;
	
	switch(s)
	{
	
		case 1: system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\n\n\t\t\tChoose any Branch from the below Branches to Display TOP 5 COLLEGES THROUGH EAMCET ENTRANCE EXAMINATION :\n\n\n";
				cout<<"\t\t1.DENTAL\n\n";
				cout<<"\t\t2.HOMEOPATHY\n\n";
				cout<<"\t\t3.PHSIOTHERAPY\n\n";
				cout<<"\t\t4.VETERINARY\n\n";
				cout<<endl<<"Enter Your Choice:\n";
			cin>>bi;
			switch(bi)
			{	
				case 1:
						system("cls");
					cout<<"\n\n\t\tTOP 5 COLLEGES FOR DENTAL THROUGH EAMCET\n\n\n";
					cout<<"\t"<<"COLLEGE NAME"<<"\t\t\t\t\t"<<"LOCATION"<<"\n\n";
					cout<<"\t1."<<"ARMY COLLEGE OF DENTAL SCIENCES"<<"\t\t"<<"SECUNDERABAD\n\n";
					cout<<"\t2."<<"MAMAMTA DENTAL COLLLEGE"<<"\t\t\t"<<"HYDERABAD\n\n";
					cout<<"\t3."<<"PANINEEYA INSTITUTE OF DENTAL SCIENCES"<<"\t"<<"SECUNDERABAD\n\n";
					cout<<"\t4."<<"KAMINENI INSTITUTE OF DENTAL SCIENCES"<<"\t\t"<<"NALGONDA\n\n";
					cout<<"\t5."<<"SVS SCHOOL OF DENTAL SCIENCES"<<"\t\t\t"<<"MAHABUBNAGAR\n\n";
					break;
				case 2:
					system("cls");
					cout<<"\n\n\t\tTOP 5 COLLEGES FOR HOMEOPATHY THROUGH EAMCET\n\n\n";
					cout<<"\t"<<"COLLEGE NAME"<<"\t\t\t\t\t"<<"LOCATION"<<"\n\n";	
					cout<<"\t1."<<"Dr.ALLURAMALINGAIAH GOVT COLLEGE"<<"\t\t"<<"EASTGODAVARI\n\n";
					cout<<"\t2."<<"Dr.GURURAJ MEDICAL COLLEGE"<<"\t\t\t"<<"KRISHNA\n\n";
					cout<<"\t3."<<"GOVT HOMEOPATHIC MEDICAL COLLEGE"<<"\t\t"<<"CUDDAPAH\n\n";
					cout<<"\t4."<<"J.S.P.S GOVT MEDICAL COLLEGE"<<"\t\t\t"<<"HYDERABAD\n\n";
					cout<<"\t5."<<"MAHARAJ'S INSTITUTE OF HOMEOPATHIC SCIENCES"<<"\t"<<"VIJAYANAGARAM\n\n";
					break;
				case 3:
					system("cls");
					cout<<"\n\n\t\tTOP 5 COLLEGES FOR PHSIOTHERAPY THROUGH EAMCET\n\n\n";
					cout<<"\t"<<"COLLEGE NAME"<<"\t\t\t\t\t"<<"LOCATION"<<"\n\n";
					cout<<"\t1."<<"AVM COLLEGE OF PHYSIOTHERAPY"<<"\t\t\t"<<"CUDDAPAH\n\n";
					cout<<"\t2."<<"APOLLO COLLEGE OF PHYSIOTHERAPY"<<"\t\t"<<"BANJARA HILLS,HYD\n\n";
					cout<<"\t3."<<"CARE INSTITUTE OF MEDICAL SCIENCES"<<"\t\t"<<"JUBILEE HILLS,HYD\n\n";
					cout<<"\t4."<<"DCMS COLLEGE OF PHYSIOTHERAPY"<<"\t\t\t"<<"KANCHANBAGH,HYD\n\n";
					cout<<"\t5."<<"DURGABAI DESHMUKH RESEARCH CENTRE"<<"\t\t"<<"VIDYANAGAR,HYD\n\n";		
					break;
				case 4:
					system("cls");
					cout<<"\n\n\t\t\t\tTOP 5 COLLEGES FOR VETERINARY THROUGH EAMCET\n\n\n";
					cout<<"\t\t\t"<<"COLLEGE NAME"<<"\t\t\t\t\t"<<"LOCATION"<<"\n\n\n";
					cout<<"\t\t\t1."<<"SRI VENKATESHWARA VETERINARY UNIVERSITY"<<"\t"<<"TIRUPATHI\n\n";
					cout<<"\t\t\t2."<<"COLLEGE OF VETERINARY SCIENCES"<<"\t\t"<<"TIRUPATHI\n\n";
					cout<<"\t\t\t3."<<"NTR COLLEGE OF VETERINARY SCIENCES"<<"\t\t"<<"GANGAVARAM\n\n";
					cout<<"\t\t\t4."<<"COLLEGE OF VETERINARY SCIENCES"<<"\t\t"<<"CUDAPPAH\n\n";
					break;
				default:
					cout<<"\t\tINVALID CHOICE\n";		
			}
	
				break;	
	
		case 2:
				system("cls");
				cout<<endl<<endl;
				cout<<"\n\n\t\t\t\tChoose any Branch from the below Branches to Display TOP 5 COLLEGES THROUGH NEET ENTRANCE EXAMINATION :\n\n\n";
				cout<<"\t\t\t1.DENTAL\n\n";
				cout<<"\t\t\t2.HOMEOPATHY\n\n";
				cout<<"\t\t\t3.PHSIOTHERAPY\n\n";
				cout<<"\t\t\t4.VETERINARY\n\n";
				cout<<endl<<"\t\t\tEnter Your Choice:\n";
				cin>>bi;
				switch(bi)
				{
					case 1:
							system("cls");
							cout<<"\n\n\t\t\t\tTOP 5 COLLEGES FOR DENTAL THROUGH NEET\n\n\n";
							cout<<"\t\t\t"<<"COLLEGE NAME"<<"\t\t\t\t\t"<<"LOCATION"<<"\n\n";
							cout<<"\t\t\t1."<<"GOVT DENTAL COLLEGE"<<"\t\t\t"<<"ROHTAK,HARYANA\n\n";
							cout<<"\t\t\t2."<<"REGIONAL DENTAL COLLLEGE"<<"\t\t"<<"GUWAHATI,ASSAM\n\n";
							cout<<"\t\t\t3."<<"GOVT DENTAL COLLEGE"<<"\t\t\t"<<"AFZALGUNJ,HYDERABAD\n\n";
							cout<<"\t\t\t4."<<"MAULANA AZAD DENTAL COLLEGE"<<"\t\t"<<"NEWDELHI\n\n";
							cout<<"\t\t\t5."<<"KM SHAH DENTAL COLLEGE"<<"\t\t"<<"VADODARA,GUJARAT\n\n";
							break;
					case 2:
							system("cls");
							cout<<"\n\n\t\t\t\tTOP 5 COLLEGES FOR HOMEOPATHY THROUGH EAMCET\n\n\n";
							cout<<"\t\t\t"<<"COLLEGE NAME"<<"\t\t\t\t\t"<<"LOCATION"<<"\n\n";
							cout<<"\t\t\t1."<<"NATIONAL INSTITUTE OF HOMEOPATHY"<<"\t\t"<<"KOLKATTA\n\n";
							cout<<"\t\t\t2."<<"SHIVAJI MEDICAL UNIVERSITY"<<"\t\t\t"<<"KOLHAPUR\n\n";
							cout<<"\t\t\t3."<<"YASHWANTRAO HOMEOPATHIC MEDICAL COLLEGE"<<"\t"<<"NASHIK\n\n";
							cout<<"\t\t\t4."<<"MOTIWALA HOMEOPATHIC MEDICAL COLLEGE"<<"\t\t"<<"NASHIK\n\n";
							cout<<"\t\t\t5."<<"VIDYPEETH HOMEOPATHIC MEDICAL COLLEGE"<<"\t\t"<<"UDAIPUR\n\n";
							break;
					case 3:
							system("cls");
							cout<<"\n\n\t\t\t\tTOP 5 COLLEGES FOR PHSIOTHERAPY THROUGH EAMCET\n\n\n";
							cout<<"\t\t\t"<<"COLLEGE NAME"<<"\t\t\t\t\t"<<"LOCATION"<<"\n\n";
							cout<<"\t\t\t1."<<"RAMAIAH MEDICAL COLLEGE"<<"\t\t\t"<<"BANGLORE\n\n";
							cout<<"\t\t\t2."<<"CHRISTIAN MEDICAL COLLEGE"<<"\t\t\t"<<"VELLORE\n\n";
							cout<<"\t\t\t3."<<"RAMACHANDRA INSTITUTE OF HIGHER EDUCATION "<<"\t"<<"CHENNAI\n\n";
							cout<<"\t\t\t4."<<"HAMDARAD INSTITUTE OF MEDICAL SCIENCES "<<"\t"<<"NEWDELHI\n\n";
							cout<<"\t\t\t5."<<"SAPTHAGIRI INSTITUTE OF MEDICAL SCIENCES "<<"\t"<<"BANGLORE\n\n";		
							break;
					case 4:
							system("cls");
							cout<<"\n\n\t\t\t\tTOP 5 COLLEGES FOR VETERINARY THROUGH EAMCET\n\n\n";
							cout<<"\t\t\t"<<"COLLEGE NAME"<<"\t\t\t\t\t\t\t"<<"LOCATION"<<"\n\n";
							cout<<"\t\t\t1."<<"NATIONAL DAIRY RESEARCH INSTITUTE"<<"\t\t\t"<<"KARNAL,HARYANA\n\n";
							cout<<"\t\t\t2."<<"CHAUDARY SARWAN KUMAR KRISHI VISHWAVIDYALA"<<"\t\t"<<"PALAMPUR,HIMACHAL PRADESH\n\n";
							cout<<"\t\t\t3."<<"NAGPUR VETERINARY COLLEGE"<<"\t\t\t\t"<<"NAGPUR,MAHARASTRA\n\n";
							cout<<"\t\t\t4."<<"NTR COLLEGE OF VETERINARY SCIENCES"<<"\t\t\t"<<"GANGAVARAM,ANDHRAPRADESH\n\n";
							break;
					default:
							cout<<"\t\t\t\tINVALID CHOICE\n";		
				  }
				  break;
	case 3:		
			system("cls");
			cout<<"\n\n\t\tTOP 5 AIIMS COLLEGES:\n\n";
			cout<<"\t\t1."<<"AIIMS,NEWDELHI\n\n";
			cout<<"\t\t2."<<"AIIMS,BHOPAL\n\n";
			cout<<"\t\t3."<<"AIIMS,BHUBANESHWAR\n\n";
			cout<<"\t\t4."<<"AIIMS,JODHPUR\n\n";
			cout<<"\t\t5."<<"AIIMS,PATNA\n\n";
			cout<<"FOR MORE COLLEGE DETAILS ENTER RESPECTIVE NUMBER:\n ";
			cin>>bi;
			switch(bi)
			{
				case 1:
						system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME:\tAIIMS, NEW DELHI\n\n";
						cout<"\t\tCOLLEGE LOCATION:\tNEW DELHI\n\n";
						cout<<"\t\tCOLLEGE FEE:RS 5,85,600\n\n";
						cout<<"\t\tINTAKE:\t72\n\n";
						cout<<"\t\tFOR MORE DETAILS VISIT: www.aiimsnewdelhi.edu.in\n\n";
						break;
				
				case 2:
						system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME:\tAIIMS, BHOPAL\n\n";
						cout<"\t\tCOLLEGE LOCATION:\tBHOPAL\n\n";
						cout<<"\t\tCOLLEGE FEE:RS 5,85,600\n\n";
						cout<<"\t\tINTAKE:\t99\n\n";
						cout<<"\t\tFOR MORE DETAILS VISIT: www.aiimsbhopal.edu.in\n\n";
						break;
				
				case 3:
						system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME:\tAIIMS, BHUBANESHWAR\n\n";
						cout<"\t\tCOLLEGE LOCATION:\tBHUBANESHWAR\n\n";
						cout<<"\t\tCOLLEGE FEE:RS 5,85,600\n\n";
						cout<<"\t\tINTAKE:\t99\n\n";
						cout<<"\t\tFOR MORE DETAILS VISIT: www.aiimsbhubaneshwar.edu.in\n\n";
						break;
					
				
				case 4:
						system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME:\tAIIMS, JODHPUR\n\n";
						cout<"\t\tCOLLEGE LOCATION:\tJODHPUR\n\n";
						cout<<"\t\tCOLLEGE FEE:RS 5,85,600\n\n";
						cout<<"\t\tINTAKE:\t72\n\n";
						cout<<"\t\tFOR MORE DETAILS VISIT: www.aiimsjodhpur.edu.in\n\n";
						break;
				
				case 5:
						system("cls");
						cout<<"\n\n\t\tCOLLEGE NAME:\tAIIMS, PATNA\n\n";
						cout<"\t\tCOLLEGE LOCATION:\tPATNA\n\n";
						cout<<"\t\tCOLLEGE FEE:RS 5,85,600\n\n";
						cout<<"\t\tINTAKE:\t99\n\n";
						cout<<"\t\tFOR MORE DETAILS VISIT: www.aiimspatna.edu.in\n\n";
						break;
			default:cout<<"\t\tINVALID CHOICE\n\n";
			}
		
		
		
		
		
		
		
				break;		
		
		
		
		
		
		
		
		
	}
	cout<<"\tPress any number For Checking College Details Again ,Press 0 for exit\n";
	cin>>s;
	if(s==0)
	{
		return 0;
	}
	else
	{
		goto bip;
	}
}
}
ug1:
	{
		ug1 d1,qu1,qu2,qu3,qu4,qu5,qu6,qu7,qu8,qu9,qu10,qu11,qu12;
	qu1.setvalues("\t1.People of intelligence and achievement can nonetheless be so ----- and lacking in ----- that they gamble their reputations by breaking the law to further their own ends.",
	"devious , propensity",
	"culpable , prosperity",
	"obsequious , deference",
	"truculent , independence",
	'c');
	qu2.setvalues("\t2.CENSUS : POPULATION :: ",
	"interrogation : guilt",
	"survey : price",
	"interview : personality",
	"questionnaire : explaination",
	'a');
	qu3.setvalues("\t3.The probabilities that each of two independent experiments will have a successful outcome are 8/15 and 2/3,respectively.What is theprobability that both experiments will have sucessfull outcomes?",
	"4/5",
	"6/5",
	"2/15",
	"16/45",
	'b');
	qu4.setvalues("\t4.If x is 1,2,or 3 and y is either 2,or 4,then the product xy can have how many different possible values",
	"three",
	"four",
	"five",
	"six",
	'c');
	qu5.setvalues("\t5.Which of the following sets of number is has the greatest standard deviation?",
	"2,3,4",
	"2.5,3,3.5",
	"1,1.25,1.5",
	"-2,0,2",
	'b');
	qu6.setvalues("\t6.AUTHENTICITY : FRAUDULENT ::",
	"morality : utopian",
	"intensity : vigorous",
	"sincerity : hypocritical",
	"particularity : unique",
	'd');
	qu7.setvalues("\tA volunteer who sends packages to hospital patients is preparing three packages containing exactly five items\n\teach from a supply of eighteen available items-four games,six jigsaw pjzzles,and eight novels.The packages\n\tmust conform to the following conditions:\n\t\tThe three packages contain all the novels.Each package contains atleast one jigsaw puzzle.\n\t\tNo package contains more games than novels.\n\n\t1.Which of the following can be a complete and accurate list of contents of one of the packages?",
	"Five jigsaw puzzles",
	"one game,four novels",
	"one jigsaw puzzle,four novels",
	"Two games,two jigsaw puzzles,two novels",
	'c');
	qu8.setvalues("\t2.If the first two packages contain exactly two games each, then the third package must contain exactly",
	"one jigsaw puzzle and four novels",
    "two jigsaw puzzles and three novels",
    "four jigsaw puzzles and one novel",
    "one game, one jigsaw puzzle, and three novels",
     'a');
	qu9.setvalues("\t3.If one of the packages contains exactly three jigsaw puzzles and none of the packages contains more than three\n\tnovels, which of the following must be true",
	"The package that contains three jigsaw puzzles also contains exactly one game.",
	" One of the two packages that do not contain three jigsaw puzzles contains exactly two games",
	" One of the two packages that do not contain three jigsaw puzzles contains exactly two jigsaw puzzles.",
	"Each of the two packages that do not contain three jigsaw puzzles contains exactly one game.",
	'b');
	qu10.setvalues("\t4.If the first two packages contain exactly two jigsaw puzzles each, which of the following can be a complete and \n\taccurate list of the contents of the third package?",
	"One game, four novels",
    "Two games, three novels",
    "Two jigsaw puzzles, three novels",
    "One game, three jigsaw puzzles, one novelTwo games, two jigsaw puzzles, one novel",
	'd');
	qu11.setvalues("\t5.If each of the packages contains at least one game,then it must be true that one of the package contains exactly",
    "two games",
    "two jigsaw puzzles",
    "one novel",
    "two novels",
    'b');
	qu12.setvalues("\t6. If each of the packages contains a different number of novels from the others, which of the following can be true?",
	"There are exactly three games among the items in one of the packages.",
	"There are exactly two jigsaw puzzles among the items in one of the pac kages.",
	"There are exactly four games among the items in the three packages together",
	"There are exactly four jigsaw puzzles among the items in the three packages together.",
	'c');
	system("CLS");
	cout<<"\n\n\n\t\t\t\tTAKE A SMALL TEST\n\n\tSECTION-A \n";
	qu1.askquestion();
	qu1.total1();
	qu2.askquestion();
	qu2.total1();
	qu3.askquestion();
	qu3.total1();
	system("cls");
	qu4.askquestion();
	qu4.total1();
	qu5.askquestion();
	qu5.total1();
	qu6.askquestion();
	qu6.total1();
	system("CLS");
	cout<<"\n\t\t\t\tSECTION-B \n\n";
	qu7.askquestion();
	qu7.total2();
	qu8.askquestion();
	qu8.total2();
	qu9.askquestion();
	qu9.total2();
	qu10.askquestion();
	qu10.total2();
	system("cls");
	qu11.askquestion();
	qu11.total2();
	qu12.askquestion();
	qu12.total2();
	system("cls");
		int f7;
			cout<<"\n\tpress any number to display the results:";
			cin>>f7;
			if(f7>=0)
			{
				system("cls");
				cout<<"\tRESULT\n\n";
				int u1,u2;
				u1=(i1/6)*100;
				u2=(j1/6)*100;
				cout<<"\n\tIN SECTION-A  :  you scored  "<<u1<<" %\n";
				cout<<"\n\tIN SECTION-B  :  you scored  "<<u2<<" %\n";
				cout<<"\n\n\n\tpress 1 to see the top M.S colleges in World:";
			int h1;
			cin>>h1;
			if(h1==1)
			{
				system("cls");
				d1.collegedisplay();
			}
			else
			{
				return 0;
			}
				
			}
	return 0;
	}
ug2:
	{
			ug2 d2,qu1,qu2,qu3,qu4,qu5,qu6,qu7,qu8,qu9,qu10,qu11,qu12,qu13,qu14,qu15,qu16,qu17,qu18,qu19,qu20,qu21,qu22,qu23,qu24,qu25,qu26,qu27,qu28,qu29,qu30;
	qu1.setvalues("\t1.From where are they bringing their books? ___ bringing ____ books from ___.The words that best fill the blanks in the above\n\tsentence are",
	"Their, they’re, there",
	"They’re, their, there",
	"There, their, they’re",
	"They’re, there, there",
	'b');
	qu2.setvalues("\t2. A ___ investigation can sometimes yield new facts, but typically organized ones are more successful.\n\tThe word that best fills the blank in the above sentence is ",
	"meandering",
	"timely",
	"consistent ",
	"systematic",
	'a');
	qu3.setvalues("\t3.What would be the smallest natural number which when divided either by 20 or by 42 or by 76 leaves a remainder of 7 in each case? ",
	"3047",
	"6047",
	"7987",
	"63847",
	'c');
	qu4.setvalues("\t4.What is the missing number in the following sequence? \n\t12,  60,  240,  720,  1440,  ___,  0 ",
	"2880",
	"1440",
	"720",
	"0",
	'b');
	qu5.setvalues("\t5.In a party, 60% of the invited guests are male and 40% are female. If 80% of the invited guests attended the party \n\tand if all the invited female guests attended, what would be the ratio of males to females among the attendees in the party? ",
	"2:3",
	"1:1",
	"3:2",
	"2:1",
	'b');
	qu6.setvalues("\t1.Let N be an NFA with n states. Let k be the number of states of a minimal DFA which is equivalent to N. Which one of the following is necessarily true? ",
	"k>=2n",
	"k>=n",
	"k<=n*n",
	"k<=2n",
	'd');
	qu7.setvalues("\t2.	The set of all recursively enumerable languages is ",
	"closed under complementation.",
	"closed under intersection.",
	"a subset of the set of all recursive languages.",
	"an uncountable set.",
	'b');
	qu8.setvalues("\t3.	Which one of the following statements is FALSE?",
	"Context-free grammar can be used to specify both lexical and syntax rules.",
	"Type checking is done before parsing.",
	"High-level language programs can be translated to different Intermediate Representations. ",
	"Arguments to a function can be passed using the program stack.",
	'b');
	qu9.setvalues("\t4.Match the following: \n\tField         	Length in bits \n\tP.	UDP Header’s Port Number  	I.   48  \n\tQ.	Ethernet MAC Address  	II.    8 \n\tR.	IPv6 Next Header 	III. 32 \n\tS.	TCP Header’s Sequence Number       	IV. 16  ",
	"P-III,  Q-IV,   R-II,    S-I",
	"P-II,   Q-I,    R-IV,    S-III ",
	"P-IV,   Q-I,    R-II,    S-III ",
	"P-IV,   Q-I,    R-III,   S-II",
	'c');
	qu10.setvalues("\t5. Consider the following statements regarding the slow start phase of the TCP congestion control algorithm.  Note that cwnd stands \n\tfor the TCP congestion window and MSS denotes the Maximum Segment Size.",
	"The cwnd increases by 2 MSS on every successful acknowledgment.",
	"The cwnd approximately doubles on every successful acknowledgement.",
	"The cwnd increases by 1 MSS every round trip time. ",
	"The cwnd approximately doubles every round trip time.",
	'c');
	qu11.setvalues("\t1.A good transimpedance amplifier has",
	"low input impedance and high output impedance.",
	"high input impedance and high output impedance.",
	"high input impedance and low output impedance.",
	"low input impedance and low output impedance.",
	'd');
	qu12.setvalues("\t2.In a p-n junction diode at equilibrium, which one of the following statements is NOT TRUE?",
	"The hole and electron diffusion current components are in the same direction.",
	"The hole and electron drift current components are in the same direction",
	"On an average, holes and electrons drift in opposite direction.",
	" On an average, electrons drift and diffuse in the same direction.",
	'd');
	qu13.setvalues("\t3.Consider a white Gaussian noise process with two-sided power spectral density ?\n\tSN(f) = 0.5 W/Hz as input to a filter with impulse response 0.5e-t (where t is in seconds) resulting in output. The power in watts is",
	"0.11",
	"0.22",
	"0.33",
	"0.44",
	'b');
	qu14.setvalues("\t4.The distance (in meters) a wave has to propagate in a medium having a skin depth of 0.1 m  so that the amplitude of the wave attenuates by 20 dB, is",
	"0.12",
	"0.23",
	"0.46",
	"2.3",
	'b');
	qu15.setvalues("\t5.Red (R), Green (G) and Blue (B) Light Emitting Diodes (LEDs) were fabricated using p-n junctions of three different inorganic semiconductors \n\thaving different band-gaps. The built-in voltages of red, green and blue diodes are VR, VG and VB, respectively. Assume donor and acceptor doping \n\tto be the same (NA and ND, respectively) in the p and n sides of all the three diodes.\n\tWhich one of the following relationships about the built-in voltages is TRUE?",
	" VR > VG > VB",
	" VR < VG < VB",
	" VR = VG = VB",
	" VR > VG < VB",
	'b');
	qu16.setvalues("\t1.The graph of a network has 8 nodes and 5 independent loops. The number of branches of the graph is",
	"11",
	"12",
	"13",
	"14",
	'b');
	qu17.setvalues("\t2.Two wattmeter method is used for measurement of power in a balanced three-phase load supplied from a balanced three-phase system. \n\tIf one of the wattmeters reads half of the other (both positive), then the power factor of the load is",
	"0.532",
	"0.632",
	"0.707",
	"0.866",
	'd');
	qu18.setvalues("\t3.A single-phase 100 kVA, 1000 V / 100 V, 50 Hz transformer has a voltage drop of 5% across its series impedance at full load. Of this, 3% is \n\tdue to resistance. The percentage regulation of the transformer at full load with 0.8 lagging power factor is",
	"4.8",
	"6.8",
	"8.8",
	"10.8",
	'a');
	qu19.setvalues("\t4.In a salient pole synchronous motor, the developed reluctance torque attains the maximum value when the load angle in electrical degrees is",
	"0",
	"45",
	"60",
	"90",
	'b');
	qu20.setvalues("\t5.A 0-1 Ampere moving iron ammeter has an internal resistance of 50 m? and inductance of 0.1 mH. A shunt coil is connected to extend its range \n\tto 0-10 Ampere for all operating frequencies. The time constant in milliseconds and resistance in m? of the shunt coil respectively are",
	"2 , 5.55",
	"2 , 1",
	"2.18 , 0.55",
	"11.1 , 2",
	'a');
	qu21.setvalues("\t1.A column of height h with a rectangular cross-section of size a×2a has a buckling load of P. If the cross-section is changed to 0.5a × 3a and \n\tits height changed to 1.5h, the buckling load of the redesigned column will be",
	"p/12",
	"p/4",
	"p/2",
	"3p/4",
	'a');
	qu22.setvalues("\t2.A steel column of ISHB 350 @72.4 kg/m is subjected to a factored axial compressive load of 2000 kN. The load is transferred to a concrete pedestal of \n\tgrade M20 through a square base plate. Consider bearing strength of concrete as 0.45fck, where fck is the characteristic strength of concete. \n\tUsing limit state method and neglecting the self weight of base plate and steel column, the length of a side of the base plate to be provided is",
	"39",
	"42",
	"45",
	"48",
	'd');
	qu23.setvalues("\t3.The Le Chatelier apparatus is used to determine",
	"compressive strength of cement",
	"fineness of cement ",
	"setting time of cement",
	"soundness of cement",
	'd');
	qu24.setvalues("\t4.The deformation in concrete due to sustained loading is",
	"creep",
	"hydration",
	"segregation",
	"shrinkage",
	'a');
	qu25.setvalues("\t5.The percent reduction in the bearing capacity of a strip footing resting on sand under flooding condition (water level at the base of the footing) \n\twhen compared to the situation where the water level is at a depth much greater than the width of footing, is approximately ",
	"0",
	"25",
	"50",
	"100",
	'c');
	qu26.setvalues("\t1.For an Oldham coupling used between two shafts, which among the following statements correct?\n\tI. Torsional load is transferred along shaft axis.\n\tII. A velocity ratio of 1:2 between shafts is obtained without using gears.\n\tIII. Bending load is transferred transverse to shaft axis.\n\tIV. Rotation is transferred along shaft axis.",
	"I and III ",
	"I and IV ",
	"II and III",
	"II and IV",
	'b');
	qu27.setvalues("\t2.In a linearly hardening plastic material, the true stress beyond initial yielding",
	"increases linearly with the true strain",
	"decreases linearly with the true strain",
	"first increases linearly and then decreases linearly with the true strain",
	"remains constant",
	'a');
	qu28.setvalues("\t3.Which one of the following statements is correct for a superheated vapour?",
	"Its pressure is less than the saturation pressure at a given temperature.",
	"Its temperature is less than the saturation temperature at a given pressure.",
	"Its volume is less than the volume of the saturated vapour at a given temperature.",
	"Its enthalpy is less than the enthalpy of the saturated vapour at a given pressure.",
	'a');
	qu29.setvalues("\t4.A grinding ratio of 200 implies that the",
	"grinding wheel wears 200 times the volume of the material removed",
	"grinding wheel wears 0.005 times the volume of the material removed",
	"aspect ratio of abrasive particles used in the grinding wheel is 200 ",
	"ratio of volume of abrasive particle to that of grinding wheel is 200",
	'b');
	qu30.setvalues("\t5.Interpolator in a CNC machine",
	"controls spindle speed",
	"coordinates axes movements",
	"operates tool changer",
	"commands canned cycle",
	'b');
	cout<<"\n\tenter the branch you have taken in under graduation course:\n";
	cout<<"\n\t1.CSE/IT\n\t2.ECE\n\t3.EEE\n\t4.CIVIL\n\t5.MECHANICAL\n";
	int ch2;
	cout<<"\tenter your choice:";
	cin>>ch2;
	switch(ch2)
	{
		case 1:
		{	
			system("cls");
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-A (APTITUDE)\n";
			qu1.askquestion();
			qu1.total1();
			qu2.askquestion();
			qu2.total1();
			qu3.askquestion();
			qu3.total1();
			qu4.askquestion();
			qu4.total1();
			qu5.askquestion();
			qu5.total1();
			system("cls");
			cout<<"\n\t\t  CSE/IT\n";
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-B (TECHNICAL)\n";
			qu6.askquestion();
			qu6.total2();
			qu7.askquestion();
			qu7.total2();
			qu8.askquestion();
			qu8.total2();
			qu9.askquestion();
			qu9.total2();
			qu10.askquestion();
			qu10.total2();
			system ("cls");
			int f1;
			cout<<"\n\tpress any number to display the results:";
			cin>>f1;
			if(f1>=0)
			{
				system("cls");
			cout<<"\n\tYOUR PERFORMANCE IN THE TEST\n";
			cout<<"\n\n\n\tIN APTITUDE : you scored "<<i2<<" out of 20\n\n\tIN TECHNICAL : you scored "<<j2<<" out of 20\n";
			cout<<"\n\n\n\tpress 1 to see the top M.tech colleges in india:";
			int g1;
			cin>>g1;
			if(g1==1)
			{
				system("cls");
				d2.collegedisplay();
			}
			else
			{
				return 0;
			}
			break;
		    }
		case 2:
		{		
			system("cls");
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-A (APTITUDE)\n";
			qu1.askquestion();
			qu1.total1();
			qu2.askquestion();
			qu2.total1();
			qu3.askquestion();
			qu3.total1();
			qu4.askquestion();
			qu4.total1();
			qu5.askquestion();
			qu5.total1();
			system("cls");
			cout<<"\n\t\t  ECE\n";
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-B (TECHNICAL)\n";
			qu11.askquestion();
			qu11.total3();
			qu12.askquestion();
			qu12.total3();
			qu13.askquestion();
			qu13.total3();
			qu14.askquestion();
			qu14.total3();
			qu15.askquestion();
			qu15.total3();
			system ("cls");
				int f2;
			cout<<"\n\tpress any number to display the result:";
			cin>>f2;
			if(f2>=0)
			{
				system("cls");
			cout<<"\n\tYOUR PERFORMANCE IN THE TEST\n";
			cout<<"\n\n\tIN APTITUDE : you scored "<<i2<<" out of 20\n\n\tIN TECHNICAL : you scored "<<k2<<" out of 20\n";
			cout<<"\n\n\n\tpress 1 to see the top M.tech colleges in india:";
			int g2;
			cin>>g2;
			if(g2==1)
			{
				system("cls");
				d2.collegedisplay();
			}
			else
			{
				return 0;
			}
			}	
			break;
		}
		case 3:
		{
			system("cls");
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-A (APTITUDE)\n";
			qu1.askquestion();
			qu1.total1();
			qu2.askquestion();
			qu2.total1();
			qu3.askquestion();
			qu3.total1();
			qu4.askquestion();
			qu4.total1();
			qu5.askquestion();
			qu5.total1();
			system("cls");
			cout<<"\n\t\t  EEE\n";
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-B (TECHNICAL)\n";
			qu16.askquestion();
			qu16.total4();
			qu17.askquestion();
			qu17.total4();
			qu18.askquestion();
			qu18.total4();
			qu19.askquestion();
			qu19.total4();
			qu20.askquestion();
			qu20.total4();
			system ("cls");
				int f3;
			cout<<"\n\tpress any number to display the results:";
			cin>>f3;
			if(f3>=0)
			{
				system("cls");
			cout<<"\n\tYOUR PERFORMANCE IN THE TEST\n";
			cout<<"\n\n\tIN APTITUDE : you scored "<<i2<<" out of 20\n\n\tIN TECHNICAL : you scored "<<l2<<" out of 20\n";
			cout<<"\n\n\n\tpress 1 to see the top M.tech colleges in india:";
			int g3;
			cin>>g3;
			if(g3==1)
			{
				system("cls");
				d2.collegedisplay();
			}
			else
			{
				return 0;
			}
			}
			break;
		}
		case 4:
		{
			system("cls");
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-A (APTITUDE)\n";
			qu1.askquestion();
			qu1.total1();
			qu2.askquestion();
			qu2.total1();
			qu3.askquestion();
			qu3.total1();
			qu4.askquestion();
			qu4.total1();
			qu5.askquestion();
			qu5.total1();
			system("cls");
			cout<<"\n\t\t  CIVIL\n";
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-B (TECHNICAL)\n";
			qu21.askquestion();
			qu21.total5();
			qu22.askquestion();
			qu22.total5();
			qu23.askquestion();
			qu23.total5();
			qu24.askquestion();
			qu24.total5();
			qu25.askquestion();
			qu25.total5();
			system ("cls");
				int f4;
			cout<<"\n\tpress any number to go display thye results:";
			cin>>f4;
			if(f4>=0)
			{
				system("cls");
			cout<<"\n\tYOUR PERFORMANCE IN THE TEST\n";
			cout<<"\n\n\tIN APTITUDE : you scored "<<i2<<" out of 20\n\n\tIN TECHNICAL : you scored "<<m2<<" out of 20\n";
			cout<<"\n\n\n\tpress 1 to see the top M.tech colleges in india:";
			int g4;
			cin>>g4;
			if(g4==1)
			{
				system("cls");
				d2.collegedisplay();
			}
			else
			{
				return 0;
			}
			}
			break;
		}
		case 5:
		{
			system("cls");
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-A (APTITUDE)\n";
			qu1.askquestion();
			qu1.total1();
			qu2.askquestion();
			qu2.total1();
			qu3.askquestion();
			qu3.total1();
			qu4.askquestion();
			qu4.total1();
			qu5.askquestion();
			qu5.total1();
			system("cls");
			cout<<"\n\t\t  MECHANICAL\n";
			cout<<"\n\t\tTAKE A TEST\n\n\tSECTION-B (TECHNICAL)\n";
			qu26.askquestion();
			qu26.total6();
			qu27.askquestion();
			qu27.total6();
			qu28.askquestion();
			qu28.total6();
			qu29.askquestion();
			qu29.total6();
			qu30.askquestion();
			qu30.total6();
			system ("cls");
				int f5;
			cout<<"\n\tpress any number to display the results:";
			cin>>f5;
			if(f5>=0)
			{
				system("cls");
			cout<<"\n\tYOUR PERFORMANCE IN THE TEST\n";
			cout<<"\n\n\tIN APTITUDE : you scored "<<i2<<" out of 20\n\n\tIN TECHNICAL : you scored "<<n2<<" out of 20\n";
			cout<<"\n\n\n\tpress 1 to see the top M.tech colleges in india:";
			int g5;
			cin>>g5;
			if(g5==1)
			{
				system("cls");
				d2.collegedisplay();
			}
			else
			{
				return 0;
			}
			}
			break;
		}
	}	
	}

return 0;
}
}


int User::login()
{
  char login_password[50];
  char stored_password[50];
  char login_username[50];
  char stored_username[50];

fstream pull("proj.txt",ios::in|ios::out|ios::app);
if (!pull) {
    cout<<"\tFile not loaded!"<<endl;
    
}
     cout<<"\tUsername: ";
     cin>>login_username;
     pull.getline(stored_username,255);
while((strcmp(login_username,stored_username)!=0)&&(!pull.eof()))
{

  pull.getline(stored_username,255);
  pull.getline(stored_username,255);
  
}
  if(pull.eof())
{
	system("cls");
  cout<<"\n\tUsername does not exist. "<<endl;
return 0;
}
pull.getline(stored_password,255);
cout<<"\tPassword: ";
s:
{
				string passwd="";
				int ch1;
				while(ch1=getch())
				{
					if(ch1==13||ch1=='$')
					{
						break;
					}
					else if(ch1==8)
					{
						if(passwd.length()>0)
						{
							cout<<"\b \b";
							passwd.erase(passwd.length()-1);
						}		
					}						
					else if(ch1>=0&&ch1<=127)
					{
						cout<<"*";
						passwd+=ch1;
					}
				}
				
			char login_password1[passwd.length()+1];
			strcpy(login_password1,passwd.c_str());
			strcpy(login_password,login_password1);
			cout<<endl;
}			
while(strcmp(stored_password,login_password)!=0)
{
    cout<<"\n\t\tWrong password. "<<endl;
	
    cout<<"\tFor Trying again press 1,else for exit press 0 :";
    int ch;
    cin>>ch;
    switch(ch)
    {
	case 0:return 0;
    case 1:	cout<<"\tPassword:";
			goto s;
    		break;
	default:cout<<"\nInvalid Choice";}
}
pull.close();
cout<<"\n\n\t\tLogin Successful.\n\n"<<endl;
return 10;
}
