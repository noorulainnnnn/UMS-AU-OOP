#include <iostream>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
class teachers_portal
{
	private:
const int capacity;
float* performance;
float* avg;
float* lab1perf;
float* lab2perf;
float* lab3perf;
float* lab4perf;
float* lab5perf;
float* lab6perf;
float* lab7perf;
float* lab8perf;
float* lab9perf;
float* lab10perf;
float* lab11perf;
float* lab12perf;
float* lab13perf;
float* lab14perf;
float* lab15perf;
float* lab1rep;
float* lab2rep;
float* lab3rep;
float* lab4rep;
float* lab5rep;
float* lab6rep;
float* lab7rep;
float* lab8rep;
float* lab9rep;
float* lab10rep;
float* lab11rep;
float* lab12rep;
float* lab13rep;
float* lab14rep;
float* lab15rep;
float* midterm;
float* finals;
float* cae;
float* report;
char* gradelp1;
std::string* name;
int * rollnum;
float* total;
float total_average;
std::string line;
float lrw;
    float lpw;
    float mdw;
    float fw;
    float caew;

public:
	teachers_portal():capacity(0)
	{
		
	};
	 teachers_portal(int size) : capacity(size)
	  {
	  report=new  float[capacity];
      performance=new  float[capacity];
       total=new  float[capacity];
       gradelp1=new  char[capacity];
       name=new  string [capacity];
       rollnum=new  int[capacity];
       avg=new  float[capacity];
 lab1perf=new  float[capacity];
 lab2perf=new  float[capacity];
 lab3perf=new  float[capacity];
 lab4perf=new  float[capacity];
 lab5perf=new  float[capacity];
lab6perf=new  float[capacity];
 lab7perf=new  float[capacity];
 lab8perf=new  float[capacity];
 lab9perf=new  float[capacity];
 lab10perf=new  float[capacity];
 lab11perf=new  float[capacity];
 lab12perf=new  float[capacity];
 lab13perf=new  float[capacity];
 lab14perf=new  float[capacity];
 lab15perf=new  float[capacity];
 lab1rep=new  float[capacity];
 lab2rep=new  float[capacity];
 lab3rep=new  float[capacity];
 lab4rep=new  float[capacity];
 lab5rep=new  float[capacity];
 lab6rep=new  float[capacity];
lab7rep=new  float[capacity];
lab8rep=new  float[capacity];
 lab9rep=new  float[capacity];
 lab10rep=new  float[capacity];
 lab11rep=new  float[capacity];
lab12rep=new  float[capacity];
 lab13rep=new  float[capacity];
 lab14rep=new  float[capacity];
 lab15rep=new  float[capacity];
 midterm=new  float[capacity];
 finals=new  float[capacity];
 cae=new  float[capacity];
	  }

	void create();
    void get_BEBME_II_A ();
    void get_BEEP__II_A ();
    void get_MTS_II_B ();
    void get_MTS_II_A ();
	void mainmenue();
};
class Matrix0
{
	
	private:
		
	int p,n,m,go;
	int i,j;
	string p1,p2;
	int z;
	char q;
		
	public:
	string matrix0easy[3][3];
    int check_easy();
    void credits();
    void easy();
    void help();
    void menue();
    void start_easy();
    void board_easy();
};
class Aibar
{
	private:
	int bill,n,addedbill,top;
	char option,more;
    int f;	
    string code;

	public:
    int kat(char option);
    int checkTopping(char tChoice);
    void menue();	
	
};

class ums : public teachers_portal,public Matrix0,public Aibar
{
	private:
		Aibar c1;
		Matrix0 g0;
		teachers_portal t1;
	public:
		void menue();
		ums():teachers_portal(30){};
};


int main(int argc, char** argv) 
{
	ums s1;
	s1.menue();
	return 0;
}
 
//functions for student_portal
void ums::menue()
{
	int z;
	char q;
	system("color 3f");		
	do {
		cout<<endl;
		cout<<endl;
		cout<<endl;
		
		cout<<"\t\t\tWELCOME TO AU UMS"<<endl;
		cout<<"Developed by "<<endl;
		cout<<"Noor-ul-ain "<<endl;
		cout<<"Laiba "<<endl;
		cout<<"Ahsan "<<endl;
		cout<<"Copy rights reserved APS"<<endl;
		
		
		cout<<"\t\t\t      __    ___      "<<endl;
		cout<<"\t\t\t    <(. \\_/ _ /   _  "<<endl;
		cout<<"\t\t\t      \\    __/   | | "<<endl;
		cout<<"\t\t\t       //\\\(      | |"<<endl;
		cout<<"\t\t\t      //  \\\\     | |"<<endl;
		cout<<"\t\t\t     //    \\\\____/ |"<<endl;
		cout<<"\t\t\t    //      \\\______/"<<endl;
		cout<<"\t\t\t press\n \t\t\t 1 for grading system \n \t\t\t 2 for cafeteria \n \t\t\t 3 to play Matrix0";
		cin>>z;
		system("cls");
		switch(z) {																	//MENU	
			case 1:
				do {
					system("cls");
					t1.mainmenue();
					cout<<"Enter\n Y to continue on teachers portal\n N to Exit to Main Menu"<<endl;
					cin>>q;
				}
				while(q=='Y'||q=='y');
				break;
			case 2:
			
				do {
					system("cls");
				c1.menue();
					cout<<"Enter\n Y to continue on teachers portal\n N to Exit to Main Menu"<<endl;
					cin>>q;
				}
				while(q=='Y'||q=='y');
				break;
			
				break;
			case 3:
				do {
					system("cls");
				g0.menue();
					cout<<"Enter\n Y to continue on teachers portal\n N to Exit to Main Menu"<<endl;
					cin>>q;
				}
				while(q=='Y'||q=='y');	
				break;
			default:
				cout<<"Invalid Entry exiting the portal"<<endl;
				getch();
				break;
		}
		system("cls");
	} while(z!=3);
	cout<<"Thanks For visiting\nGoodBye";
	system("cls");
	cout<<"\t\t\tEvent0";
	getch();
}




//functions for Matrix0
void Matrix0 :: start_easy()
{
	cout<<endl;								//first draw board
	for(int lse=0; lse<3; lse++) {
		cout<<"\t\t";
		for(int kse=0; kse<3; kse++) {
			cout<<" "<<"[ ]";
		}
		cout<<endl;
	}
}

void Matrix0 :: board_easy() {
	system("cls");
	cout<<endl;
	for(int leb=0; leb<3; leb++)
	{
		cout<<"\t\t";
		for(int keb=0; keb<3; keb++) {
			cout<<" ["<<matrix0easy[leb][keb]<<"]"<<" ";
		}
		cout<<endl;
	}
}

void Matrix0 :: menue()
{
	
system("color 0a");	
	do {
		cout<<"\tMatrix0\n 1-Play\n 2-Help\n 3-Credits\n 4-Exit\n"<<endl;
		cin>>z;
		switch(z) {																	//MENU	
			case 1:
				do {
					system("cls");
					easy();
					cout<<"Enter\n Y to Play\n N to Exit to Menu"<<endl;
					cin>>q;
				}
				while(q=='Y'||q=='y');
				break;
			case 2:
				help();
				break;
			case 4:
				break;
			case 3:
				credits();
				break;
			default:
				cout<<"Invalid Entry\nQuiting Matrix0"<<endl;
				getch();
				break;
		}
		system("cls");
	} while(z!=4);
	cout<<"Thanks For Playing\nGoodBye";
	system("cls");
	cout<<"\t\t\tEvent0";
	getch();
	
}


void  Matrix0 :: easy()
{
	system("cls");
	cout<<"Player 1, Enter your first name:";
	cin>>p1;
	cout<<"Player 2, Enter your first name:";
	cin>>p2;
	system("cls");
	for(int s=0; s<3; s++) {										//Assigning a Blank Matrix
		for(int r=0; r<3; r++) {
			matrix0easy[s][r]=' ';
		}
	}
	start_easy();
	for(int t=1; t<10; t++) {
		p=t%2?0:1;													//Get the player turn 
		switch(p) {
			case 0:
				p1:
				cout<<" "<<p1<<", Enter the location of cell: ";
				cin>>i>>j;
					
				if(i==0&&j==0)
				{
					return;
				}
				if((i>3)||(j>3)||(i<1)||(j<1))
					{
						cout<<"\n\a  Invalid entry, Please Enter in following syntax\n Row<Space>Column such that 0<Row<=3 and 0<Column<=3\n OR Enter '0 0' to go to MENU"<<endl;
						getch();
						board_easy();
						goto p1;
					}
					else if((matrix0easy[i-1][j-1]=="0")||(matrix0easy[i-1][j-1]=="1"))
							{
								cout<<" Invalid Move\nTRY AGAIN"<<endl;
								goto p1;
							}
					else {
						matrix0easy[i-1][j-1]='0';
						board_easy();
					}
				break;
			case 1:
				p2:
				cout<<" "<<p2<<", Enter the location of cell: ";
				cin>>n>>m;
				if(n==0&&m==0)
				{
					return;
				}
				if((n>3)||(m>3)||(m<1)||(n<1))
				{
					cout<<"\n\a  Invalid entry, Please Enter in following syntax\n Row<Space>Column such that 0<Row<=3 and 0<Column<=3\n OR Enter '0 0' to go to MENU"<<endl;
					getch();
					board_easy();
					goto p2;
				}else if(matrix0easy[n-1][m-1]=="0"||matrix0easy[n-1][m-1]=="1")
							{
								cout<<" Invalid Move\nTRY AGAIN"<<endl;
								goto p2;
							}
				else {
					matrix0easy[n-1][m-1]='1';
					board_easy();
				}
				break;
		}
		go=check_easy();													//Checking win, draw or go!
		switch(go) {
			case 2:
				if(p==0&&t>=5) {
					cout<<p1<<" wins\a"<<endl;
					return;
				} else if(p==1&&t>=6) {
					cout<<p2<<" wins\a"<<endl;
					return;
				}
				break;
			case 1:
				if(t==9||t==8) {
					cout<<" \t:(\n\t Nobody wins\n\t Game Draw"<<endl;
					return;
				}
				break;
			default:
				cout<<"\aError";
				break;
		}
	}
	getch();
}

void  Matrix0 :: help() {
	system("cls");
	cout<<"Matrix0\n\tBy Event0"<<endl;
	cout<<"Matrix0 is a matrix-based Tic Tac Toe Game.It is 3-step game, after going in to play menu"<<endl;
	cout<<"1) First Step is to select the mode playing."<<endl;
	cout<<"2) Second Step is the entering first name of players (player 1 will be given the digit '0' and player 2 will be given the digit '1')."<<endl;
	cout<<"3) Third  Step is entering the location of the cell. Since this game is matrix-base, The values of cell should be enter as following syntax 'Row<space>column'."<<endl;
	cout<<"Following is the key for location of entries,"<<endl;
	cout<<"Easy-Mode"<<endl;
		for(int ln=0; ln<3; ln++) {
		cout<<"\t\t";
		for(int kn=0; kn<3; kn++) {
			cout<<" "<<"["<<ln+1<<"]"<<"["<<kn+1<<"]";
		}
			cout<<endl;
		}
	cout<<" There are fixed turns, so entering any value of cell OUT OF SCOPE or OVERRIDING the previous value will not be reterived!"<<endl;
	getch();
}
int  Matrix0 :: check_easy() {
	if((matrix0easy[0][0]==matrix0easy[0][1])&&(matrix0easy[0][1]==matrix0easy[0][2])) {
		return 2;
	} else if((matrix0easy[1][0]==matrix0easy[1][1])&&(matrix0easy[1][1]==matrix0easy[1][2])) {
		return 2;
	} else if((matrix0easy[2][0]==matrix0easy[2][1])&&(matrix0easy[2][1]==matrix0easy[2][2])) {
		return 2;
	} else if((matrix0easy[0][0]==matrix0easy[1][0])&&(matrix0easy[1][0]==matrix0easy[2][0])) {
		return 2;
	} else if((matrix0easy[0][1]==matrix0easy[1][1])&&(matrix0easy[1][1]==matrix0easy[2][1])) {
		return 2;
	} else if((matrix0easy[0][2]==matrix0easy[1][2])&&(matrix0easy[1][2]==matrix0easy[2][2])) {
		return 2;
	} else if(((matrix0easy[0][0]==matrix0easy[1][1])&&(matrix0easy[1][1]==matrix0easy[2][2]))) {
		return 2;
	} else if(((matrix0easy[2][0]==matrix0easy[1][1])&&(matrix0easy[1][1]==matrix0easy[0][2]))) {
		return 2;
	} else {
		if((matrix0easy[0][0]!=matrix0easy[0][1])&&(matrix0easy[0][1]!=matrix0easy[0][2])) {
			return 1;
		} else if((matrix0easy[1][0]!=matrix0easy[1][1])&&(matrix0easy[1][1]!=matrix0easy[1][2])) {
			return 1;
		} else if((matrix0easy[2][0]!=matrix0easy[2][1])&&(matrix0easy[2][1]!=matrix0easy[2][2])) {
			return 1;
		} else if((matrix0easy[0][0]!=matrix0easy[1][0])&&(matrix0easy[1][0]!=matrix0easy[2][0])) {
			return 1;
		} else if((matrix0easy[0][1]!=matrix0easy[1][1])&&(matrix0easy[1][1]!=matrix0easy[2][1])) {
			return 1;
		} else if((matrix0easy[0][2]!=matrix0easy[1][2])&&(matrix0easy[1][2]!=matrix0easy[2][2])) {
			return 1;
		} else if((matrix0easy[0][0]!=matrix0easy[1][1])&&(matrix0easy[1][1]!=matrix0easy[2][2])) {
			return 1;
		} else if((matrix0easy[2][0]==matrix0easy[1][1])&&(matrix0easy[1][1]==matrix0easy[0][2])) {
			return 1;
		}
	}
}
void  Matrix0 :: credits()
{
	system("cls");
	cout<<"    Credits\n"<<"   Developed By,\n Noor Ul Ain"<<endl;
	getch();
}



//functions for Aibar
void Aibar :: menue()
{
	f=0;
	more='y';
	bill=0;
	system("color 05");	
    cout<<"***Welcome to Aibar***"<<endl;
	cout<<"*****************************************"<<endl<<endl;
	cout<<"MENUE:"<<endl;
	cout<<"(1) Oreo Crumble Shake ___Rs 250 "<<endl;
	cout<<"(2) Berry Berry  Shake ___Rs 270 "<<endl;
	cout<<"(3) Cocomo Chocolate Swirl Shake ___Rs 270 "<<endl;
	cout<<"(4) Red Velvet Shake ___Rs 300 "<<endl;
	cout<<"(5) Vanilla Bean Shake ___Rs 250 "<<endl;
	cout<<"(6) Caramel Popcorn Shake ___Rs 300 "<<endl;
	cout<<"(7) Monster Brownie Shake ___Rs 550 "<<endl<<endl<<"To Order, ";
	do{
		cout<<"Please Enter Assigned Number of Shake: ";cin>>option;
		f=f+kat(option);
		cout <<"if you want to order more enter y/Y else n/N? ";cin>>more;
	}
	while (more=='y'||more=='Y');
    cout<<"Enter the special customer discount code ";
	cin>>code;
	if(code=="AA2710")
	{cout<<"Valid code you get 50% off "<<endl;
	bill=bill/2;}
	else
	cout<<"In valid code become a special cuctomer to get 50% off by getting a membership card for only Rs 7000 "<<endl;
	cout<<"Your Bill is "<<bill*1.17<<" including 17% GST"<<endl;
	cout<<"***Thank for Your Order***";
	
	
	
	
}


int Aibar ::kat(char nMenue)
{   
    char choice;
	 switch (nMenue)
    {
	case '1' :
	{cout<<"How many oreo crumble shakes would you like? ";cin>>n;
	bill=bill+n*(250);
	cout<<"Oreo crumble shake your way,enter y/Y else n/N? if you want to add extra toppings for Rs 25 ";cin>>choice;
    bill=bill+checkTopping(choice);
	break;}
	
	case '2':
	{cout<<"How many berry berry  shakes would you like? ";cin>>n;
	cout<<"Berry berry  shake your way,enter y/Y else n/N? if you want to add extra toppings for Rs 25 ";cin>>choice;
    bill=bill+n*(270);
    addedbill=bill+checkTopping(choice);
	break;}
	
    case '3':
	{cout<<"How many cocomo choclate swirl  shakes would you like? ";cin>>n;
	cout<<"Cocomo choclate swirl shake your way,enter y/Y else n/N? if you want to add extra toppings for Rs 25? ";cin>>choice;
    bill=bill+n*(270);
    bill=bill+checkTopping(choice);
	break;}
	case '4':
	{ cout<<"How many red velvet  shakes would you like? ";cin>>n;
	cout<<"Red velvet shake your way,enter y/Y else n/N? if you want to add extra toppings for Rs 25? ";cin>>choice;
    bill=bill+n*300;
    bill=bill+checkTopping(choice);
	break;}
	
	case '5':
	{cout<<"how many vanila bean  shakes would you like? ";cin>>n;
	cout<<" vanila bean shake your way,enter y/Y else n/N? if you want to add extra toppings for Rs 25? ";cin>>choice;
    bill=bill+n*250;
	cin>>choice;
    bill=bill+checkTopping(choice);
	break;}
	
	case '6':
	{cout<<"How many caramel popcorn  shakes would you like? ";cin>>n;
	cout<<"Caramel popcorn shake your way,enter y/Y else n/N? if you want to add extra toppings for Rs 25? ";cin>>choice;
    bill=bill+n*300;
    bill=bill+checkTopping(choice);
	break;}  
	  
    case '7':
	{cout<<"How many monster brownie  shakes would you like? ";cin>>n;
	cout<<"Monster brownie shake your way,enter y/Y else n/N? if you want to add extra toppings for Rs 25? ";cin>>choice;
    bill=bill+n*500;
    bill=bill+checkTopping(choice);
	break;}
    default :
    cout<<"Enter the right number.";}
    
 	return bill;
}

int Aibar ::checkTopping(char tChoice)
{
	if (tChoice == 'y'|| tChoice == 'Y')
	{
		return 25;
	}
	else
	{
		return 0;
	}
}
//funcions for teachers portal

void teachers_portal ::  mainmenue()
{
	
	char x;
	int f;
	char g;
	system("color 0c");
	cout<<"Welcome to the teachers portal : "<<endl;
	cout<<"To enter class data     press 1 : "<<endl;
	cout<<"To get student details  press 2 : "<<endl;
	cin>>f;
	system("cls");
	switch(f)
	{case 1:
				
		{
		create();
		cout<<"Press any key  "<<endl;
		getch();
		
		}
		break;
	case 2:
		{
		cout<<"To get data for CE-112L CE-115L BEBME II A        press 1 "<<endl;
		cout<<"To get data for         CE-112L BEEP  II A        press 2 "<<endl;
		cout<<"To get data for         CE-112L CE-112L MTS II A  press 3"<<endl;
		cout<<"To get data for         CE-112L CE-112L MTS II B  press 4"<<endl;
		cin>>x;
		switch(x)
		{case '1':
		{
			do{system("cls");
			get_BEBME_II_A ();
		     cout<<"Press Y or y to get more grades ";cin>>g;
		    }
		    while(g=='y'||g=='Y');
		
		}
		break;
			
		case '2':
		{
			do{system("cls");
			get_BEEP__II_A ();
		    cout<<"Press Y or y to get more grades ";cin>>g;
		    }
		    while(g=='y'||g=='Y');
		
		}
		break;
		case '3':
		{
			do{system("cls");
			get_MTS_II_A ();
		    cout<<"Press Y or y to get more grades ";cin>>g;
		    }
		    while(g=='y'||g=='Y');
		
		}
		break;
		case '4':
		{
			do{system("cls");
			get_MTS_II_B ();
		    cout<<"Press Y or y to get more grades ";cin>>g;
		    }
		    while(g=='y'||g=='Y');
			
		}
		break;
		default: 
		{
		cout<<"Wrong input back to portal menue"<<endl;
		 mainmenue();
		}
		 
	}
	
}

default:
	cout<<"wrong input "<<endl;
}


}
		

void teachers_portal :: get_MTS_II_B ()
{

int size=6;
     lpw=10;
     mdw=20;
    fw=40;
	lrw=10;
	 caew=20;
	char p;
	cout<<"Default weightages : "<<endl;
	cout<<"Lab performance               = "<<lpw<<endl;
	cout<<"Lab report                    = "<<lrw<<endl;
	cout<<"Mid Term                      = "<<mdw<<endl;
	cout<<"Complex Engineering Activity  = "<<fw<<endl;
	cout<<"Final Term                    = "<<caew<<endl;
	cout<<"To change the weightages press y oy Y press any other key to continue ";cin>>p;
	if(p=='y'||p=='Y')
	{
		cout<<"Enter lab performance weightage ";cin>>lpw;
		cout<<"Enter lab report      weightage ";cin>>lrw;
		cout<<"Enter midterm         weightage ";cin>>mdw;
		cout<<"Enter CAE             weightage ";cin>>caew;
		cout<<"Enter finals          weightage ";cin>>fw;
	}
int rollnumber,temp;
ifstream fin("MTSB.csv" , ios::in);
cout<<"Enter the roll number of the student to get details  ";cin>>rollnumber;
float report[size];
float performance[size];
float total[size];
float total_average=0;
float gradelp1[size];
string name[size];
int rollnum[size];
float avg[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
float lab14perf[size];
float lab15perf[size];
float lab1rep[size];
float lab2rep[size];
float lab3rep[size];
float lab4rep[size];
float lab5rep[size];
float lab6rep[size];
float lab7rep[size];
float lab8rep[size];
float lab9rep[size];
float lab10rep[size];
float lab11rep[size];
float lab12rep[size];
float lab13rep[size];
float lab14rep[size];
float lab15rep[size];
float midterm[size];
float finals[size];
float cae[size];
string line;
int count=0;
ifstream file3("MTSB.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];    
    getline(iss, rand, ',');
    iss >>  lab3perf[i];    
    getline(iss, rand, ',');
    iss >>  lab4perf[i];    
    getline(iss, rand, ',');
    iss >>  lab5perf[i];    
    getline(iss, rand, ',');
    iss >>  lab6perf[i];    
    getline(iss, rand, ',');
    iss >>  lab7perf[i];    
    getline(iss, rand, ',');
    iss >>  lab8perf[i];    
    getline(iss, rand, ',');
    iss >>  lab9perf[i];    
    getline(iss, rand, ',');
    iss >>  lab10perf[i];    
    getline(iss, rand, ',');
    iss >>  lab11perf[i];    
    getline(iss, rand, ',');
    iss >>  lab12perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab13perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab14perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab15perf[i];   
    getline(iss, rand, ',');
    iss >>  lab1rep[i]; 
    getline(iss, rand, ',');
    iss >>  lab2rep[i];
    getline(iss, rand, ',');
    iss >>  lab3rep[i];
    getline(iss, rand, ',');
    iss >>  lab4rep[i];
    getline(iss, rand, ',');
    iss >>  lab5rep[i];
    getline(iss, rand, ',');
    iss >>  lab6rep[i];
    getline(iss, rand, ',');
    iss >>  lab7rep[i];
    getline(iss, rand, ',');
    iss >>  lab8rep[i];
    getline(iss, rand, ',');
    iss >>  lab9rep[i];
    getline(iss, rand, ',');
    iss >>  lab10rep[i];
    getline(iss, rand, ',');
    iss >>  lab11rep[i];
    getline(iss, rand, ',');
    iss >>  lab12rep[i];
    getline(iss, rand, ',');
    iss >>  lab13rep[i];
    getline(iss, rand, ',');
    iss >>  lab14rep[i];
    getline(iss, rand, ',');
    iss >>  lab15rep[i];
    getline(iss, rand, ',');
    iss >>  midterm[i];
    getline(iss, rand, ',');
    iss >> finals[i];   
    getline(iss, rand, ',');
    iss >> cae[i];   
    i++;
    
}
float mdt[size];
float f[size];
float proj[size];


for (int i=1;i<size;i++)
{
	if (rollnumber== rollnum[i])
	{temp=i;
	count=1;
	}
	
	
	
	report[i]=((lab1rep[i]+lab2rep[i]+lab3rep[i]+lab4rep[i]+lab5rep[i]+lab6rep[i]+lab7rep[i]+lab8rep[i]+lab9rep[i]+lab10rep[i]+lab11rep[i]+lab12rep[i]+lab13rep[i]+lab14rep[i]+lab15rep[i])/(lab1rep[0]+lab2rep[0]+lab3rep[0]+lab4rep[0]+lab5rep[0]+lab6rep[0]+lab7rep[0]+lab8rep[0]+lab9rep[0]+lab10rep[0]+lab11rep[0]+lab12rep[0]+lab13rep[0]+lab14rep[0]+lab15rep[0])*lrw);
	performance[i]=((lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]+lab15perf[i])/(lab1perf[0]+lab2perf[0]+lab3perf[0]+lab4perf[0]+lab5perf[0]+lab6perf[0]+lab7perf[0]+lab8perf[0]+lab9perf[0]+lab10perf[0]+lab11perf[0]+lab12perf[0]+lab13perf[0]+lab14perf[0]+lab15perf[0]))*lpw;                             
    mdt[i]=((midterm[i]/midterm[0])*mdw);
    f[i]=((finals[i]/(finals[0]))*fw);
    proj[i]=(cae[i]/cae[0])*caew;
	total[i]=report[i]+performance[i]+mdt[i]+proj[i]+f[i];
    total_average=total_average+total[i];
	

}
total_average=total_average/(size-1);
for (int i=1;i<size;i++)
{
	if (total[i]>total_average&&total[i]<100)
	gradelp1[i]='A';
	if (total[i]==total_average && total[i]<total_average+9)
	gradelp1[i]='B';
	if (total[i]<total_average && total[i] !=0)
	gradelp1[i]='c';
	 if (total[i]==0)
	gradelp1[i]='F';
	
}
if (count==1)
{cout<<name[temp]<<setw(10)<<rollnum[temp]<<endl;
cout<<"Average score in the class :"<<total_average<<endl;
cout<<"Grade                      :";
    cout<<char(gradelp1[temp])<<endl;
char y;
cout<<"To see full marks press Y or y ";cin>>y;
if(y=='Y'||y=='y')
   {
   	cout<<"lab 1 performance: ";
        cout<<lab1perf[1]<<endl;
        cout<<"lab 2 performance: ";
        cout<<lab2perf[1]<<endl;
        cout<<"lab 3 performance: ";
        cout<<lab3perf[1]<<endl;
        cout<<"lab 4 performance: ";
        cout<<lab4perf[1]<<endl;
        cout<<"lab 5 performance: ";
        cout<<lab5perf[1]<<endl;
        cout<<"lab 6 performance: ";
        cout<<lab6perf[1]<<endl;
        cout<<"lab 7 performance: ";
        cout<<lab7perf[1]<<endl;
        cout<<"lab 8 performance: ";
        cout<<lab8perf[1]<<endl;
        cout<<"lab 9 performance: ";
        cout<<lab9perf[1]<<endl;
        cout<<"lab 10 performance: ";
        cout<<lab10perf[1]<<endl;
        cout<<"lab 11 performance: ";
        cout<<lab11perf[1]<<endl;
        cout<<"lab 12 performance: ";
        cout<<lab12perf[1]<<endl;
        cout<<"lab 13 performance: ";
        cout<<lab13perf[1]<<endl;
        cout<<"lab 14 performance: ";
        cout<<lab14perf[1]<<endl;
        cout<<"lab 15 performance: ";
        cout<<lab15perf[1]<<endl;
        cout<<"lab 1 report      : ";
        cout<<lab1rep[1]<<endl;
        cout<<"lab 2 report      : ";
        cout<<lab2rep[1]<<endl;
        cout<<"lab 3 report      : ";
        cout<<lab3rep[1]<<endl;
        cout<<"lab 4 report      : ";
        cout<<lab4rep[1]<<endl;
        cout<<"lab 5 report      : ";
        cout<<lab5rep[1]<<endl;
        cout<<"lab 6 report      : ";
        cout<<lab6rep[1]<<endl;
        cout<<"lab 7 report      : ";
        cout<<lab7rep[1]<<endl;
        cout<<"lab 8 report      : ";
        cout<<lab8rep[1]<<endl;
        cout<<"lab 9 report      : ";
        cout<<lab9rep[1]<<endl;
        cout<<"lab 10 report      : ";
        cout<<lab10rep[1]<<endl;
        cout<<"lab 11 report      : ";
        cout<<lab11rep[1]<<endl;
        cout<<"lab 12 report      : ";
        cout<<lab12rep[1]<<endl;
        cout<<"lab 13 report      : ";
        cout<<lab13rep[1]<<endl;
        cout<<"lab 14 report      : ";
        cout<<lab14rep[1]<<endl;
        cout<<"lab 15 report      : ";
        cout<<lab15rep[1]<<endl;
        cout<<"Mid term           : ";
        cout<<midterm[1]<<endl;
        cout<<"Finals             : ";
        cout<<finals[1]<<endl;                         
		cout<<"CEA                : ";
        cout<<cae[1];
		cout<<endl;
   	
   }
}
else 
cout<<"No record found "<<endl;
	}


void teachers_portal :: get_MTS_II_A ()
{

int size=6;
     lpw=10;
     mdw=20;
    fw=40;
	lrw=10;
	 caew=20;
	char p;
	cout<<"Default weightages : "<<endl;
	cout<<"Lab performance               = "<<lpw<<endl;
	cout<<"Lab report                    = "<<lrw<<endl;
	cout<<"Mid Term                      = "<<mdw<<endl;
	cout<<"Complex Engineering Activity  = "<<fw<<endl;
	cout<<"Final Term                    = "<<caew<<endl;
	cout<<"To change the weightages press y oy Y press any other key to continue ";cin>>p;
	if(p=='y'||p=='Y')
	{
		cout<<"Enter lab performance weightage ";cin>>lpw;
		cout<<"Enter lab report      weightage ";cin>>lrw;
		cout<<"Enter midterm         weightage ";cin>>mdw;
		cout<<"Enter CEA             weightage ";cin>>caew;
		cout<<"Enter finals          weightage ";cin>>fw;
	}
int rollnumber,temp;
ifstream fin("MTSA.csv" , ios::in);
cout<<"Enter the roll number of the student to get details  ";cin>>rollnumber;
float report[size];
float performance[size];
float total[size];
float total_average=0;
float gradelp1[size];
string name[size];
int rollnum[size];
float avg[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
float lab14perf[size];
float lab15perf[size];
float lab1rep[size];
float lab2rep[size];
float lab3rep[size];
float lab4rep[size];
float lab5rep[size];
float lab6rep[size];
float lab7rep[size];
float lab8rep[size];
float lab9rep[size];
float lab10rep[size];
float lab11rep[size];
float lab12rep[size];
float lab13rep[size];
float lab14rep[size];
float lab15rep[size];
float midterm[size];
float finals[size];
float cae[size];
string line;
int count=0;
ifstream file3("MTSA.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];    
    getline(iss, rand, ',');
    iss >>  lab3perf[i];    
    getline(iss, rand, ',');
    iss >>  lab4perf[i];    
    getline(iss, rand, ',');
    iss >>  lab5perf[i];    
    getline(iss, rand, ',');
    iss >>  lab6perf[i];    
    getline(iss, rand, ',');
    iss >>  lab7perf[i];    
    getline(iss, rand, ',');
    iss >>  lab8perf[i];    
    getline(iss, rand, ',');
    iss >>  lab9perf[i];    
    getline(iss, rand, ',');
    iss >>  lab10perf[i];    
    getline(iss, rand, ',');
    iss >>  lab11perf[i];    
    getline(iss, rand, ',');
    iss >>  lab12perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab13perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab14perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab15perf[i];   
    getline(iss, rand, ',');
    iss >>  lab1rep[i]; 
    getline(iss, rand, ',');
    iss >>  lab2rep[i];
    getline(iss, rand, ',');
    iss >>  lab3rep[i];
    getline(iss, rand, ',');
    iss >>  lab4rep[i];
    getline(iss, rand, ',');
    iss >>  lab5rep[i];
    getline(iss, rand, ',');
    iss >>  lab6rep[i];
    getline(iss, rand, ',');
    iss >>  lab7rep[i];
    getline(iss, rand, ',');
    iss >>  lab8rep[i];
    getline(iss, rand, ',');
    iss >>  lab9rep[i];
    getline(iss, rand, ',');
    iss >>  lab10rep[i];
    getline(iss, rand, ',');
    iss >>  lab11rep[i];
    getline(iss, rand, ',');
    iss >>  lab12rep[i];
    getline(iss, rand, ',');
    iss >>  lab13rep[i];
    getline(iss, rand, ',');
    iss >>  lab14rep[i];
    getline(iss, rand, ',');
    iss >>  lab15rep[i];
    getline(iss, rand, ',');
    iss >>  midterm[i];
    getline(iss, rand, ',');
    iss >> finals[i];   
    getline(iss, rand, ',');
    iss >> cae[i];   
    i++;
    
}
float mdt[size];
float f[size];
float proj[size];


for (int i=1;i<size;i++)
{
	if (rollnumber== rollnum[i])
	{temp=i;
	count=1;
	}
	
	
	
	report[i]=((lab1rep[i]+lab2rep[i]+lab3rep[i]+lab4rep[i]+lab5rep[i]+lab6rep[i]+lab7rep[i]+lab8rep[i]+lab9rep[i]+lab10rep[i]+lab11rep[i]+lab12rep[i]+lab13rep[i]+lab14rep[i]+lab15rep[i])/(lab1rep[0]+lab2rep[0]+lab3rep[0]+lab4rep[0]+lab5rep[0]+lab6rep[0]+lab7rep[0]+lab8rep[0]+lab9rep[0]+lab10rep[0]+lab11rep[0]+lab12rep[0]+lab13rep[0]+lab14rep[0]+lab15rep[0])*lrw);
	performance[i]=((lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]+lab15perf[i])/(lab1perf[0]+lab2perf[0]+lab3perf[0]+lab4perf[0]+lab5perf[0]+lab6perf[0]+lab7perf[0]+lab8perf[0]+lab9perf[0]+lab10perf[0]+lab11perf[0]+lab12perf[0]+lab13perf[0]+lab14perf[0]+lab15perf[0]))*lpw;                             
    mdt[i]=((midterm[i]/midterm[0])*mdw);
    f[i]=((finals[i]/(finals[0]))*fw);
    proj[i]=(cae[i]/cae[0])*caew;
	total[i]=report[i]+performance[i]+mdt[i]+proj[i]+f[i];
    total_average=total_average+total[i];
	

}
total_average=total_average/(size-1);
for (int i=1;i<size;i++)
{
	if (total[i]>total_average&&total[i]<100)
	gradelp1[i]='A';
	if (total[i]==total_average && total[i]<total_average+9)
	gradelp1[i]='B';
	if (total[i]<total_average && total[i] !=0)
	gradelp1[i]='c';
	 if (total[i]==0)
	gradelp1[i]='F';
	
}
if (count==1)
{cout<<name[temp]<<setw(10)<<rollnum[temp]<<endl;
cout<<"Average score in the class :"<<total_average<<endl;
cout<<"Grade                      :";
    cout<<char(gradelp1[temp])<<endl;
char y;
cout<<"To see full marks press Y or y ";cin>>y;
if(y=='Y'||y=='y')
   {
   	cout<<"lab 1 performance: ";
        cout<<lab1perf[1]<<endl;
        cout<<"lab 2 performance: ";
        cout<<lab2perf[1]<<endl;
        cout<<"lab 3 performance: ";
        cout<<lab3perf[1]<<endl;
        cout<<"lab 4 performance: ";
        cout<<lab4perf[1]<<endl;
        cout<<"lab 5 performance: ";
        cout<<lab5perf[1]<<endl;
        cout<<"lab 6 performance: ";
        cout<<lab6perf[1]<<endl;
        cout<<"lab 7 performance: ";
        cout<<lab7perf[1]<<endl;
        cout<<"lab 8 performance: ";
        cout<<lab8perf[1]<<endl;
        cout<<"lab 9 performance: ";
        cout<<lab9perf[1]<<endl;
        cout<<"lab 10 performance: ";
        cout<<lab10perf[1]<<endl;
        cout<<"lab 11 performance: ";
        cout<<lab11perf[1]<<endl;
        cout<<"lab 12 performance: ";
        cout<<lab12perf[1]<<endl;
        cout<<"lab 13 performance: ";
        cout<<lab13perf[1]<<endl;
        cout<<"lab 14 performance: ";
        cout<<lab14perf[1]<<endl;
        cout<<"lab 15 performance: ";
        cout<<lab15perf[1]<<endl;
        cout<<"lab 1 report      : ";
        cout<<lab1rep[1]<<endl;
        cout<<"lab 2 report      : ";
        cout<<lab2rep[1]<<endl;
        cout<<"lab 3 report      : ";
        cout<<lab3rep[1]<<endl;
        cout<<"lab 4 report      : ";
        cout<<lab4rep[1]<<endl;
        cout<<"lab 5 report      : ";
        cout<<lab5rep[1]<<endl;
        cout<<"lab 6 report      : ";
        cout<<lab6rep[1]<<endl;
        cout<<"lab 7 report      : ";
        cout<<lab7rep[1]<<endl;
        cout<<"lab 8 report      : ";
        cout<<lab8rep[1]<<endl;
        cout<<"lab 9 report      : ";
        cout<<lab9rep[1]<<endl;
        cout<<"lab 10 report      : ";
        cout<<lab10rep[1]<<endl;
        cout<<"lab 11 report      : ";
        cout<<lab11rep[1]<<endl;
        cout<<"lab 12 report      : ";
        cout<<lab12rep[1]<<endl;
        cout<<"lab 13 report      : ";
        cout<<lab13rep[1]<<endl;
        cout<<"lab 14 report      : ";
        cout<<lab14rep[1]<<endl;
        cout<<"lab 15 report      : ";
        cout<<lab15rep[1]<<endl;
        cout<<"Mid term           : ";
        cout<<midterm[1]<<endl;
        cout<<"Finals             : ";
        cout<<finals[1]<<endl;                         
		cout<<"CAE                : ";
        cout<<cae[1];
		cout<<endl;
   	
   }
}
else 
cout<<"No record found "<<endl;
	}


void  teachers_portal :: create () 
{
    fstream fout;
    fout.open("newfile.csv", ios::out);
    int size ;
    cout<<"Enter the total number of students : ";cin>>size;
    cout << "Enter the details of "<<size<<" students:"<<endl;
char gradelp1[size+1];
string name[size+1];
int rollnum[size+1];
float avg[size+1];
float lab1perf[size+1];
float lab2perf[size+1];
float lab3perf[size+1];
float lab4perf[size+1];
float lab5perf[size+1];
float lab6perf[size+1];
float lab7perf[size+1];
float lab8perf[size+1];
float lab9perf[size+1];
float lab10perf[size+1];
float lab11perf[size+1];
float lab12perf[size+1];
float lab13perf[size+1];
float lab14perf[size+1];
float lab15perf[size+1];
float lab1rep[size+1];
float lab2rep[size+1];
float lab3rep[size+1];
float lab4rep[size+1];
float lab5rep[size+1];
float lab6rep[size+1];
float lab7rep[size+1];
float lab8rep[size+1];
float lab9rep[size+1];
float lab10rep[size+1];
float lab11rep[size+1];
float lab12rep[size+1];
float lab13rep[size+1];
float lab14rep[size+1];
float lab15rep[size+1];
float midterm[size+1];
float finals[size+1];
float cae[size+1];
cout<<"Enter the total marks for "<<endl;
        cout<<"lab 1 performance: ";
        cin>>lab1perf[0];
        cout<<"lab 2 performance: ";
        cin>>lab2perf[0];
        cout<<"lab 3 performance: ";
        cin>>lab3perf[0];
        cout<<"lab 4 performance: ";
        cin>>lab4perf[0];
        cout<<"lab 5 performance: ";
        cin>>lab5perf[0];
        cout<<"lab 6 performance: ";
        cin>>lab6perf[0];
        cout<<"lab 7 performance: ";
        cin>>lab7perf[0];
        cout<<"lab 8 performance: ";
        cin>>lab8perf[0];
        cout<<"lab 9 performance: ";
        cin>>lab9perf[0];
        cout<<"lab 10 performance: ";
        cin>>lab10perf[0];
        cout<<"lab 11 performance: ";
        cin>>lab11perf[0];
        cout<<"lab 12 performance: ";
        cin>>lab12perf[0];
        cout<<"lab 13 performance: ";
        cin>>lab13perf[0];
        cout<<"lab 14 performance: ";
        cin>>lab14perf[0];
        cout<<"lab 15 performance: ";
        cin>>lab15perf[0];
        cout<<"lab 1 report      : ";
        cin>>lab1rep[0];
        cout<<"lab 2 report      : ";
        cin>>lab2rep[0];
        cout<<"lab 3 report      : ";
        cin>>lab3rep[0];
        cout<<"lab 4 report      : ";
        cin>>lab4rep[0];
        cout<<"lab 5 report      : ";
        cin>>lab5rep[0];
        cout<<"lab 6 report      : ";
        cin>>lab6rep[0];
        cout<<"lab 7 report      : ";
        cin>>lab7rep[0];
        cout<<"lab 8 report      : ";
        cin>>lab8rep[0];
        cout<<"lab 9 report      : ";
        cin>>lab9rep[0];
        cout<<"lab 10 report      : ";
        cin>>lab10rep[0];
        cout<<"lab 11 report      : ";
        cin>>lab11rep[0];
        cout<<"lab 12 report      : ";
        cin>>lab12rep[0];
        cout<<"lab 13 report      : ";
        cin>>lab13rep[0];
        cout<<"lab 14 report      : ";
        cin>>lab14rep[0];
        cout<<"lab 15 report      : ";
        cin>>lab15rep[0];
        cout<<"Mid term           : ";
        cin>>midterm[0];
        cout<<"Finals             : ";
        cin>>finals[0];
		cout<<endl;                                        
		cout<<"CAE                : ";
        cin>>cae[0];
		cout<<endl;

    // Read the input
    for (int i = 1; i < size+1; i++)
    {
    	string g;
        cout<<"Enter Student "<<i<<" data"<<endl;
        cout<<"Roll number: ";
        cin>>rollnum[i];
        cout<<"First Name: ";
        cin>>name[i];
        cout<<"lab 1 performance: ";
        cin>>lab1perf[i];
        cout<<"lab 2 performance: ";
        cin>>lab2perf[i];
        cout<<"lab 3 performance: ";
        cin>>lab3perf[i];
        cout<<"lab 4 performance: ";
        cin>>lab4perf[i];
        cout<<"lab 5 performance: ";
        cin>>lab5perf[i];
        cout<<"lab 6 performance: ";
        cin>>lab6perf[i];
        cout<<"lab 7 performance: ";
        cin>>lab7perf[i];
        cout<<"lab 8 performance: ";
        cin>>lab8perf[i];
        cout<<"lab 9 performance: ";
        cin>>lab9perf[i];
        cout<<"lab 10 performance: ";
        cin>>lab10perf[i];
        cout<<"lab 11 performance: ";
        cin>>lab11perf[i];
        cout<<"lab 12 performance: ";
        cin>>lab12perf[i];
        cout<<"lab 13 performance: ";
        cin>>lab13perf[i];
        cout<<"lab 14 performance: ";
        cin>>lab14perf[i];
        cout<<"lab 15 performance: ";
        cin>>lab15perf[i];
        cout<<"lab 1 report      : ";
        cin>>lab1rep[i];
        cout<<"lab 2 report      : ";
        cin>>lab2rep[i];
        cout<<"lab 3 report      : ";
        cin>>lab3rep[i];
        cout<<"lab 4 report      : ";
        cin>>lab4rep[i];
        cout<<"lab 5 report      : ";
        cin>>lab5rep[i];
        cout<<"lab 6 report      : ";
        cin>>lab6rep[i];
        cout<<"lab 7 report      : ";
        cin>>lab7rep[i];
        cout<<"lab 8 report      : ";
        cin>>lab8rep[i];
        cout<<"lab 9 report      : ";
        cin>>lab9rep[i];
        cout<<"lab 10 report      : ";
        cin>>lab10rep[i];
        cout<<"lab 11 report      : ";
        cin>>lab11rep[i];
        cout<<"lab 12 report      : ";
        cin>>lab12rep[i];
        cout<<"lab 13 report      : ";
        cin>>lab13rep[i];
        cout<<"lab 14 report      : ";
        cin>>lab14rep[i];
        cout<<"lab 15 report      : ";
        cin>>lab15rep[i];
        cout<<"Mid term           : ";
        cin>>midterm[i];
        cout<<"Finals             : ";
        cin>>finals[i];
		cout<<endl;                                        
		cout<<"CAE                : ";
        cin>>cae[i];
		cout<<endl;                                        
    
    }
   
    for (int i = 0; i <= size; i++)
    {    
        // Insert the data to file
        fout << rollnum[i] << ", "<< name[i] << ", "<< lab1perf[i] << ", "<< lab2perf[i] << ", "<<lab3perf[i]<< ", " <<lab4perf[i]<< ", " <<lab5perf[i]<< ", " <<lab6perf[i]<< ", " <<lab7perf[i]<< ", " <<lab8perf[i]<< ", " <<lab9perf[i]<< ", " <<lab10perf[i]<< ", " <<lab11perf[i] << ", "<<lab12perf[i] << ", "<<lab13perf[i] << ", "<<lab14perf[i] << ", "<<lab15perf[i] << ", "<<lab1rep[i]<< ", "<<lab2rep[i]<< ", "<<lab3rep[i]<< ", "<<lab4rep[i]<< ", "<<lab5rep[i]<< ", "<<lab6rep[i]<< ", "<<lab7rep[i]<< ", "<<lab8rep[i]<< ", "<<lab9rep[i]<< ", "<<lab10rep[i]<< ", "<<lab11rep[i]<< ", "<<lab12rep[i]<< ", "<<lab13rep[i]<< ", "<<lab14rep[i]<< ", "<<lab15rep[i]<< ", "<<midterm[i]<< ", "<<finals[i]<< ", "<<cae[i]  << ", "<<"\n";
    }
    
    fout.close();
}


void teachers_portal::get_BEEP__II_A()
{

int size=6;
     lpw=10;
     mdw=20;
    fw=40;
	lrw=10;
	 caew=20;
	char p;
	cout<<"Default weightages : "<<endl;
	cout<<"Lab performance               = "<<lpw<<endl;
	cout<<"Lab report                    = "<<lrw<<endl;
	cout<<"Mid Term                      = "<<mdw<<endl;
	cout<<"Complex Engineering Activity  = "<<fw<<endl;
	cout<<"Final Term                    = "<<caew<<endl;
	cout<<"To change the weightages press y oy Y press any other key to continue ";cin>>p;
	if(p=='y'||p=='Y')
	{
		cout<<"Enter lab performance weightage ";cin>>lpw;
		cout<<"Enter lab report      weightage ";cin>>lrw;
		cout<<"Enter midterm         weightage ";cin>>mdw;
		cout<<"Enter CAE             weightage ";cin>>caew;
		cout<<"Enter finals          weightage ";cin>>fw;
	}
int rollnumber,temp;
ifstream fin("BEEP.csv" , ios::in);
cout<<"Enter the roll number of the student to get details  ";cin>>rollnumber;
float report[size];
float performance[size];
float total[size];
float total_average=0;
float gradelp1[size];
string name[size];
int rollnum[size];
float avg[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
float lab14perf[size];
float lab15perf[size];
float lab1rep[size];
float lab2rep[size];
float lab3rep[size];
float lab4rep[size];
float lab5rep[size];
float lab6rep[size];
float lab7rep[size];
float lab8rep[size];
float lab9rep[size];
float lab10rep[size];
float lab11rep[size];
float lab12rep[size];
float lab13rep[size];
float lab14rep[size];
float lab15rep[size];
float midterm[size];
float finals[size];
float cae[size];
string line;
int count=0;
ifstream file3("BEEP.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];    
    getline(iss, rand, ',');
    iss >>  lab3perf[i];    
    getline(iss, rand, ',');
    iss >>  lab4perf[i];    
    getline(iss, rand, ',');
    iss >>  lab5perf[i];    
    getline(iss, rand, ',');
    iss >>  lab6perf[i];    
    getline(iss, rand, ',');
    iss >>  lab7perf[i];    
    getline(iss, rand, ',');
    iss >>  lab8perf[i];    
    getline(iss, rand, ',');
    iss >>  lab9perf[i];    
    getline(iss, rand, ',');
    iss >>  lab10perf[i];    
    getline(iss, rand, ',');
    iss >>  lab11perf[i];    
    getline(iss, rand, ',');
    iss >>  lab12perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab13perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab14perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab15perf[i];   
    getline(iss, rand, ',');
    iss >>  lab1rep[i]; 
    getline(iss, rand, ',');
    iss >>  lab2rep[i];
    getline(iss, rand, ',');
    iss >>  lab3rep[i];
    getline(iss, rand, ',');
    iss >>  lab4rep[i];
    getline(iss, rand, ',');
    iss >>  lab5rep[i];
    getline(iss, rand, ',');
    iss >>  lab6rep[i];
    getline(iss, rand, ',');
    iss >>  lab7rep[i];
    getline(iss, rand, ',');
    iss >>  lab8rep[i];
    getline(iss, rand, ',');
    iss >>  lab9rep[i];
    getline(iss, rand, ',');
    iss >>  lab10rep[i];
    getline(iss, rand, ',');
    iss >>  lab11rep[i];
    getline(iss, rand, ',');
    iss >>  lab12rep[i];
    getline(iss, rand, ',');
    iss >>  lab13rep[i];
    getline(iss, rand, ',');
    iss >>  lab14rep[i];
    getline(iss, rand, ',');
    iss >>  lab15rep[i];
    getline(iss, rand, ',');
    iss >>  midterm[i];
    getline(iss, rand, ',');
    iss >> finals[i];   
    getline(iss, rand, ',');
    iss >> cae[i];   
    i++;
    
}
float mdt[size];
float f[size];
float proj[size];


for (int i=1;i<size;i++)
{
	if (rollnumber== rollnum[i])
	{temp=i;
	count=1;
	}

	report[i]=((lab1rep[i]+lab2rep[i]+lab3rep[i]+lab4rep[i]+lab5rep[i]+lab6rep[i]+lab7rep[i]+lab8rep[i]+lab9rep[i]+lab10rep[i]+lab11rep[i]+lab12rep[i]+lab13rep[i]+lab14rep[i]+lab15rep[i])/(lab1rep[0]+lab2rep[0]+lab3rep[0]+lab4rep[0]+lab5rep[0]+lab6rep[0]+lab7rep[0]+lab8rep[0]+lab9rep[0]+lab10rep[0]+lab11rep[0]+lab12rep[0]+lab13rep[0]+lab14rep[0]+lab15rep[0])*lrw);
	performance[i]=((lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]+lab15perf[i])/(lab1perf[0]+lab2perf[0]+lab3perf[0]+lab4perf[0]+lab5perf[0]+lab6perf[0]+lab7perf[0]+lab8perf[0]+lab9perf[0]+lab10perf[0]+lab11perf[0]+lab12perf[0]+lab13perf[0]+lab14perf[0]+lab15perf[0]))*lpw;                             
    mdt[i]=((midterm[i]/midterm[0])*mdw);
    f[i]=((finals[i]/(finals[0]))*fw);
    proj[i]=(cae[i]/cae[0])*caew;
	total[i]=report[i]+performance[i]+mdt[i]+proj[i]+f[i];
    total_average=total_average+total[i];
	

}
total_average=total_average/(size-1);
for (int i=1;i<size;i++)
{
	if (total[i]>total_average&&total[i]<100)
	gradelp1[i]='A';
	if (total[i]==total_average && total[i]<total_average+9)
	gradelp1[i]='B';
	if (total[i]<total_average && total[i] !=0)
	gradelp1[i]='c';
	 if (total[i]==0)
	gradelp1[i]='F';
	
}
if (count==1)
{cout<<name[temp]<<setw(10)<<rollnum[temp]<<endl;
cout<<"Average score in the class :"<<total_average<<endl;
cout<<"Grade                      :";
    cout<<char(gradelp1[temp])<<endl;
char y;
cout<<"To see full marks press Y or y ";cin>>y;
if(y=='Y'||y=='y')
   {
   	cout<<"lab 1 performance: ";
        cout<<lab1perf[1]<<endl;
        cout<<"lab 2 performance: ";
        cout<<lab2perf[1]<<endl;
        cout<<"lab 3 performance: ";
        cout<<lab3perf[1]<<endl;
        cout<<"lab 4 performance: ";
        cout<<lab4perf[1]<<endl;
        cout<<"lab 5 performance: ";
        cout<<lab5perf[1]<<endl;
        cout<<"lab 6 performance: ";
        cout<<lab6perf[1]<<endl;
        cout<<"lab 7 performance: ";
        cout<<lab7perf[1]<<endl;
        cout<<"lab 8 performance: ";
        cout<<lab8perf[1]<<endl;
        cout<<"lab 9 performance: ";
        cout<<lab9perf[1]<<endl;
        cout<<"lab 10 performance: ";
        cout<<lab10perf[1]<<endl;
        cout<<"lab 11 performance: ";
        cout<<lab11perf[1]<<endl;
        cout<<"lab 12 performance: ";
        cout<<lab12perf[1]<<endl;
        cout<<"lab 13 performance: ";
        cout<<lab13perf[1]<<endl;
        cout<<"lab 14 performance: ";
        cout<<lab14perf[1]<<endl;
        cout<<"lab 15 performance: ";
        cout<<lab15perf[1]<<endl;
        cout<<"lab 1 report      : ";
        cout<<lab1rep[1]<<endl;
        cout<<"lab 2 report      : ";
        cout<<lab2rep[1]<<endl;
        cout<<"lab 3 report      : ";
        cout<<lab3rep[1]<<endl;
        cout<<"lab 4 report      : ";
        cout<<lab4rep[1]<<endl;
        cout<<"lab 5 report      : ";
        cout<<lab5rep[1]<<endl;
        cout<<"lab 6 report      : ";
        cout<<lab6rep[1]<<endl;
        cout<<"lab 7 report      : ";
        cout<<lab7rep[1]<<endl;
        cout<<"lab 8 report      : ";
        cout<<lab8rep[1]<<endl;
        cout<<"lab 9 report      : ";
        cout<<lab9rep[1]<<endl;
        cout<<"lab 10 report      : ";
        cout<<lab10rep[1]<<endl;
        cout<<"lab 11 report      : ";
        cout<<lab11rep[1]<<endl;
        cout<<"lab 12 report      : ";
        cout<<lab12rep[1]<<endl;
        cout<<"lab 13 report      : ";
        cout<<lab13rep[1]<<endl;
        cout<<"lab 14 report      : ";
        cout<<lab14rep[1]<<endl;
        cout<<"lab 15 report      : ";
        cout<<lab15rep[1]<<endl;
        cout<<"Mid term           : ";
        cout<<midterm[1]<<endl;
        cout<<"Finals             : ";
        cout<<finals[1]<<endl;                         
		cout<<"CAE                : ";
        cout<<cae[1];
		cout<<endl;   	
   	
   }
}
else 
cout<<"No record found "<<endl;
	}


void  teachers_portal :: get_BEBME_II_A ()
{

int size=4;
     lpw=10;
     mdw=20;
    fw=40;
	lrw=10;
	 caew=20;
	char p;
	cout<<"Default weightages : "<<endl;
	cout<<"Lab performance               = "<<lpw<<endl;
	cout<<"Lab report                    = "<<lrw<<endl;
	cout<<"Mid Term                      = "<<mdw<<endl;
	cout<<"Complex Engineering Activity  = "<<fw<<endl;
	cout<<"Final Term                    = "<<caew<<endl;
	cout<<"To change the weightages press y oy Y press any other key to continue ";cin>>p;
	if(p=='y'||p=='Y')
	{
		cout<<"Enter lab performance weightage ";cin>>lpw;
		cout<<"Enter lab report      weightage ";cin>>lrw;
		cout<<"Enter midterm         weightage ";cin>>mdw;
		cout<<"Enter CAE             weightage ";cin>>caew;
		cout<<"Enter finals          weightage ";cin>>fw;
	}
int rollnumber,temp;
ifstream fin("b.csv" , ios::in);
cout<<"Enter the roll number of the student to get details  ";cin>>rollnumber;
float report[size];
float performance[size];
float total[size];
float total_average=0;
float gradelp1[size];
string name[size];
int rollnum[size];
float avg[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size];
float lab8perf[size];
float lab9perf[size];
float lab10perf[size];
float lab11perf[size];
float lab12perf[size];
float lab13perf[size];
float lab14perf[size];
float lab15perf[size];
float lab1rep[size];
float lab2rep[size];
float lab3rep[size];
float lab4rep[size];
float lab5rep[size];
float lab6rep[size];
float lab7rep[size];
float lab8rep[size];
float lab9rep[size];
float lab10rep[size];
float lab11rep[size];
float lab12rep[size];
float lab13rep[size];
float lab14rep[size];
float lab15rep[size];
float midterm[size];
float finals[size];
float cae[size];
string line;
int count=0;
ifstream file3("b.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];    
    getline(iss, rand, ',');
    iss >>  lab3perf[i];    
    getline(iss, rand, ',');
    iss >>  lab4perf[i];    
    getline(iss, rand, ',');
    iss >>  lab5perf[i];    
    getline(iss, rand, ',');
    iss >>  lab6perf[i];    
    getline(iss, rand, ',');
    iss >>  lab7perf[i];    
    getline(iss, rand, ',');
    iss >>  lab8perf[i];    
    getline(iss, rand, ',');
    iss >>  lab9perf[i];    
    getline(iss, rand, ',');
    iss >>  lab10perf[i];    
    getline(iss, rand, ',');
    iss >>  lab11perf[i];    
    getline(iss, rand, ',');
    iss >>  lab12perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab13perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab14perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab15perf[i];   
    getline(iss, rand, ',');
    iss >>  lab1rep[i]; 
    getline(iss, rand, ',');
    iss >>  lab2rep[i];
    getline(iss, rand, ',');
    iss >>  lab3rep[i];
    getline(iss, rand, ',');
    iss >>  lab4rep[i];
    getline(iss, rand, ',');
    iss >>  lab5rep[i];
    getline(iss, rand, ',');
    iss >>  lab6rep[i];
    getline(iss, rand, ',');
    iss >>  lab7rep[i];
    getline(iss, rand, ',');
    iss >>  lab8rep[i];
    getline(iss, rand, ',');
    iss >>  lab9rep[i];
    getline(iss, rand, ',');
    iss >>  lab10rep[i];
    getline(iss, rand, ',');
    iss >>  lab11rep[i];
    getline(iss, rand, ',');
    iss >>  lab12rep[i];
    getline(iss, rand, ',');
    iss >>  lab13rep[i];
    getline(iss, rand, ',');
    iss >>  lab14rep[i];
    getline(iss, rand, ',');
    iss >>  lab15rep[i];
    getline(iss, rand, ',');
    iss >>  midterm[i];
    getline(iss, rand, ',');
    iss >> finals[i];   
    getline(iss, rand, ',');
    iss >> cae[i];   
    i++;
    
}
float mdt[size];
float f[size];
float proj[size];


for (int i=1;i<size;i++)
{
	if (rollnumber== rollnum[i])
	{temp=i;
	count=1;
	}
	
	
	
	report[i]=((lab1rep[i]+lab2rep[i]+lab3rep[i]+lab4rep[i]+lab5rep[i]+lab6rep[i]+lab7rep[i]+lab8rep[i]+lab9rep[i]+lab10rep[i]+lab11rep[i]+lab12rep[i]+lab13rep[i]+lab14rep[i]+lab15rep[i])/(lab1rep[0]+lab2rep[0]+lab3rep[0]+lab4rep[0]+lab5rep[0]+lab6rep[0]+lab7rep[0]+lab8rep[0]+lab9rep[0]+lab10rep[0]+lab11rep[0]+lab12rep[0]+lab13rep[0]+lab14rep[0]+lab15rep[0])*lrw);
	performance[i]=((lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]+lab15perf[i])/(lab1perf[0]+lab2perf[0]+lab3perf[0]+lab4perf[0]+lab5perf[0]+lab6perf[0]+lab7perf[0]+lab8perf[0]+lab9perf[0]+lab10perf[0]+lab11perf[0]+lab12perf[0]+lab13perf[0]+lab14perf[0]+lab15perf[0]))*lpw;                             
    mdt[i]=((midterm[i]/midterm[0])*mdw);
    f[i]=((finals[i]/(finals[0]))*fw);
    proj[i]=(cae[i]/cae[0])*caew;
	total[i]=report[i]+performance[i]+mdt[i]+proj[i]+f[i];
    total_average=total_average+total[i];
	

}
total_average=total_average/(size-1);
for (int i=1;i<size;i++)
{
	if (total[i]>total_average&&total[i]<100)
	gradelp1[i]='A';
	if (total[i]==total_average && total[i]<total_average+9)
	gradelp1[i]='B';
	if (total[i]<total_average && total[i] !=0)
	gradelp1[i]='c';
	 if (total[i]==0)
	gradelp1[i]='F';
	
}
if (count==1)
{cout<<name[temp]<<setw(10)<<rollnum[temp]<<endl;
cout<<"Average score in the class :"<<total_average<<endl;
cout<<"Grade                      :";
    cout<<char(gradelp1[temp])<<endl;
char y;
cout<<"To see full marks press Y or y ";cin>>y;
if(y=='Y'||y=='y')
   {
   	cout<<"lab 1 performance: ";
        cout<<lab1perf[1]<<endl;
        cout<<"lab 2 performance: ";
        cout<<lab2perf[1]<<endl;
        cout<<"lab 3 performance: ";
        cout<<lab3perf[1]<<endl;
        cout<<"lab 4 performance: ";
        cout<<lab4perf[1]<<endl;
        cout<<"lab 5 performance: ";
        cout<<lab5perf[1]<<endl;
        cout<<"lab 6 performance: ";
        cout<<lab6perf[1]<<endl;
        cout<<"lab 7 performance: ";
        cout<<lab7perf[1]<<endl;
        cout<<"lab 8 performance: ";
        cout<<lab8perf[1]<<endl;
        cout<<"lab 9 performance: ";
        cout<<lab9perf[1]<<endl;
        cout<<"lab 10 performance: ";
        cout<<lab10perf[1]<<endl;
        cout<<"lab 11 performance: ";
        cout<<lab11perf[1]<<endl;
        cout<<"lab 12 performance: ";
        cout<<lab12perf[1]<<endl;
        cout<<"lab 13 performance: ";
        cout<<lab13perf[1]<<endl;
        cout<<"lab 14 performance: ";
        cout<<lab14perf[1]<<endl;
        cout<<"lab 15 performance: ";
        cout<<lab15perf[1]<<endl;
        cout<<"lab 1 report      : ";
        cout<<lab1rep[1]<<endl;
        cout<<"lab 2 report      : ";
        cout<<lab2rep[1]<<endl;
        cout<<"lab 3 report      : ";
        cout<<lab3rep[1]<<endl;
        cout<<"lab 4 report      : ";
        cout<<lab4rep[1]<<endl;
        cout<<"lab 5 report      : ";
        cout<<lab5rep[1]<<endl;
        cout<<"lab 6 report      : ";
        cout<<lab6rep[1]<<endl;
        cout<<"lab 7 report      : ";
        cout<<lab7rep[1]<<endl;
        cout<<"lab 8 report      : ";
        cout<<lab8rep[1]<<endl;
        cout<<"lab 9 report      : ";
        cout<<lab9rep[1]<<endl;
        cout<<"lab 10 report      : ";
        cout<<lab10rep[1]<<endl;
        cout<<"lab 11 report      : ";
        cout<<lab11rep[1]<<endl;
        cout<<"lab 12 report      : ";
        cout<<lab12rep[1]<<endl;
        cout<<"lab 13 report      : ";
        cout<<lab13rep[1]<<endl;
        cout<<"lab 14 report      : ";
        cout<<lab14rep[1]<<endl;
        cout<<"lab 15 report      : ";
        cout<<lab15rep[1]<<endl;
        cout<<"Mid term           : ";
        cout<<midterm[1]<<endl;
        cout<<"Finals             : ";
        cout<<finals[1]<<endl;                         
		cout<<"CAE                : ";
        cout<<cae[1];
		cout<<endl;
   	
   }
}
else 
cout<<"No record found "<<endl;
	}
