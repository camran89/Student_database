 #include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include<cstring>
using namespace std;
class user
{
	char c_name[50];
	char name[50];
	char section[10];
	char id[50];
	char mobile_num[30];
	char mail_adress[50];

	char password[30];
	int t_sub;
	char subject[10][10];
public:
  char c_num[30];
	int i;
	void get_data()//student data entry from user portal
	{
		cout<<"\nEnter the name of the college"<<"\t"<<endl;
		cin>>c_name;
		cout<<"\nEnter the name of the student"<<"\t"<<endl;
		cin>>name;
		cout<<"\nEnter the section of the student"<<"\t"<<endl;
		cin>>section;
		cout<<"\nEnter the ID of the student"<<"\t"<<endl;
		cin>>id;
		cout<<"\nEnter the mobile number of the student"<<"\t"<<endl;
		cin>>mobile_num;
		cout<<"\nEnter the citizenship number"<<"\t"<<endl;
		cin>>c_num;
		cout<<"\nEnter the mail adress of the student"<<"\t"<<endl;
		cin>>mail_adress;
		cout<<"\nEnter the total no. of subjects"<<"\t"<<endl;
		cin>>t_sub;
		for(i=0;i<t_sub;i++)
		{
			cout<<"Enter the name of subject"<<"\t"<<i+1<<endl;
			cin>>subject[i];
		}
	}

int studprofile()//this function displays the student details at the student portal
{
	cout<<"\nCollege name"<<"\t"<<c_name<<"\n"<<endl;
	cout<<"Student name"<<"\t"<<name<<"\n"<<endl;
	cout<<"Student section"<<"\t"<<section<<"\n"<<endl;
	cout<<"ID of the student"<<"\t"<<id<<"\n"<<endl;
	cout<<"Mobile number of student"<<"\t"<<mobile_num<<"\n"<<endl;
	cout<<"Citizenship number"<<"\t"<<c_num<<"\n"<<endl;;
	cout<<"Mail adress"<<"\t"<<mail_adress<<"\n"<<endl;;
	return 0;
}
int get_sub()
{
	cout<<"\n Total no. of subjects :-"<<t_sub<<endl;
	for(i=0;i<t_sub;i++)
	{
		cout<<"\n\tSubject\t"<<i+1<<":-"<<subject[i]<<"\n"<<endl;
	}
	return 0;
}
void addsub()
{
	cout<<"\nEnter a new subject"<<endl;
	cin>>subject[t_sub];
	t_sub++;
	cout<<"\nNew subject added successfully"<<endl;
}
void modiyprofile()
{

	cout<<"\nThe profile details are :-\n"<<endl;

	cout<<"\n1.college name"<<"\t"<<c_name<<endl;
	cout<<"\n2.student name"<<"\t"<<name<<endl;
	cout<<"\n3.student section"<<"\t"<<section<<endl;
	cout<<"\n4.id of the student"<<"\t"<<id<<endl;
	cout<<"\n5.mobile number of student"<<"\t"<<mobile_num<<endl;
	cout<<"\n6.citizenship number"<<"\t"<<c_num<<endl;
	cout<<"\n7.mail adress is"<<"\t"<<mail_adress<<endl;
	int k=-1;
	cout<<"\nEnter the parameter u want to modify"<<"\n"<<endl;
	cin>>k;
	if(k==1)
	{
		char ename[20];
		cout<<"\nEnter the college name to be modified"<<endl;
		cin>>ename;
		strcpy(c_name,ename);
		cout<<"\nThe college name updated successfully\n"<<endl;
	}
	else if(k==2)
	{
		char mname[30];
		cout<<"\nEnter the name of the student to be modified"<<endl;
		cin>>mname;
		strcpy(name,mname);
		cout<<"\nThe name of the student updated successfully"<<endl;
	}
	else if(k==3)
	{
		char sec[5];
		cout<<"\nEnter the section to be modified"<<endl;
		cin>>sec;
		strcpy(section,sec);
		cout<<"\nThe section of the student is updated successfully"<<endl;
	}
	else if(k==4)
	{
		char id_no[20];
		cout<<"\nEnter the id number to be replaced"<<endl;
		cin>>id_no;
		strcpy(id,id_no);
		cout<<"\nThe id updated successfully"<<endl;
	}
	else if(k==5)
	{
		char m_num[30];
		cout<<"\nEnter the mobile number to be replaced"<<endl;
		cin>>m_num;
		strcpy(mobile_num,m_num);
		cout<<"\nThe mobile number  updated successfully"<<endl;
	}
	else if(k==6)
	{
		char m_adress[30];
		cout<<"\nEnter the mail adress to be replaced"<<endl;
		cin>>m_adress;
		strcpy(mail_adress,m_adress);
		cout<<"\nThe mail adress updated successfully"<<endl;
	}
	else if(k==7)
	{
		char citizenship[40];

		cout<<"\nEnter the citizenship number"<<endl;
		cin>>citizenship;
		strcpy(c_num,citizenship);
		cout<<"\nThe citizenship number is updated successful"<<endl;
	}

	else
		cout<<"!!INVALID OPERATION!!"<<endl;
}
void stdisplay()//this function displays all the relavant information to the user portal.
{
	cout<<"\nCollege name"<<"\t"<<c_name<<endl;
	cout<<"\nStudent name"<<"\t"<<name<<endl;
	cout<<"\nStudent section"<<"\t"<<section<<endl;
	cout<<"\nID of the student"<<"\t"<<id<<endl;
	cout<<"\nMobile number of student"<<"\t"<<mobile_num<<endl;
	cout<<"\nCitizenship number"<<"\t"<<c_num<<endl;
	cout<<"\nMail adress"<<"\t"<<mail_adress<<endl;
	for(i=0;i<t_sub;i++)
	{
		cout<<"\n\tSubject"<<":-"<<subject[i];

	}
	if(t_sub==0)
		cout<<"No subject specified"<<endl;
}
};
int main()
{
	user a;
	char con;
	int ch;
	char choice;
	MAIN_MENU :
do{
	cout<<"\n\t\t\t\t\tWelcome to student database portal"<<endl;
	cout<<"\n\t\t\t\t\t\tPress any key to continue"<<endl;
	getchar();
	cout<<"\n\t\t\t\t Press 1 for the user portal"<<endl;
	cout<<"\n\t\t\t\t Press 2 for the student portal"<<endl;
  cout<<"\n\t\t\t\t Press 3 to exit the portal"<<endl;
	cout<<"\n\t\t\t\t Enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
	    case 1:
            int temp;
						MENU1 :
			cout<<"\n Press 1 to add a student record"<<endl;
			cout<<"\n Press 2 to add multiple student record"<<endl;
			cout<<"\n Press 3 to view all records of student"<<endl;
			cout<<"\n Press 4 to exit to main menu"<<endl;
			cout<<"\n Enter your choice"<<endl;
			cin>>temp;
			if(temp==1)//for single student record entry
			{
				cout<<"Enter the details of a student"<<endl;
				fstream fs;
				fs.open("stinfo.dat",ios::app|ios::binary);
				a.get_data();
				fs.write(reinterpret_cast<char *>(&a),sizeof(user));
				fs.close();
				cout<<"The data entered successfully"<<endl;
				goto MENU1;
			}
			if(temp==2)//for multiple student record
			{
				char m='0';
				fstream fs;
				fs.open("stinfo.dat",ios::app|ios::binary);
				do
				{
					cout<<"Enter the details"<<endl;
					a.get_data();
					fs.write(reinterpret_cast<char *>(&a),sizeof(user));
					cout<<"Press 0 if u want to continue"<<endl;
					cin>>m;
				}while(m=='0');
				fs.close();
				cout<<"Record updated successfully"<<endl;
				goto MENU1;
			}

			if(temp==3)//view all records
			{
				fstream fs;

				fs.open("stinfo.dat",ios::binary|ios::in);

				while(fs.read(reinterpret_cast<char *>(&a),sizeof(user)))
				{

					a.stdisplay();

				}
				fs.close();
			}
			if(temp==4)
			{
				goto MAIN_MENU;
			}
			if(temp<1||temp>4)
			{
				cout<<"!!INVALID INPUT!!"<<endl;
			}
			goto MENU1;//closing of user portal

	case 2:

  char cn[20];
    char moreop;

		MENU2 :
	do{
		system("clear");
		cout<<"\n\n\t\t Welcome to the student panel";
		cout<<"\n Press 1 to view your profile";
		cout<<"\n Press 2 to view your subjects";
		cout<<"\n Press 3 to add a subject";
		cout<<"\n Press 4 to modify your profile";
		cout<<"\n Press 5 to exit to main menu"<<"\n"<<endl;
		int inchoice;
		cout<<"Enter your choice"<<"\t";
		cin>>inchoice;
		if(inchoice==1)
		{

			fstream fs;

			fs.open("stinfo.dat",ios::binary|ios::in);
      cout<<"Enter the citizenship no. of the student";
      cin>>cn;


			while(fs.read(reinterpret_cast<char *>(&a),sizeof(user)))
			{
if(strcmp(cn,a.c_num)==0)
{

				a.studprofile();

}
			}
			fs.close();
      char value;
      cout<<"Press y key to continue or n to goto Main Menu"<<endl;
      cin>>value;
      if(value=='y')
			goto MENU2;
      else if(value=='n')
      goto MAIN_MENU;
      else
      cout<<"!!INVALID INPUT!!";

		}//end of first int choice
		else if(inchoice==2)
		{

			fstream fs;
			fs.open("stinfo.dat",ios::binary|ios::in);
      cout<<"Enter the citizenship no. of the student";
      cin>>cn;

			while(fs.read(reinterpret_cast<char *>(&a),sizeof(user)))
			{
        if(strcmp(cn,a.c_num)==0)
        {
          a.get_sub();
        }
			}
			fs.close();
      char value;
      cout<<"Press y key to continue or n to goto Main Menu"<<endl;
      cin>>value;
      if(value=='y')
			goto MENU2;
      else if(value=='n')
      goto MAIN_MENU;
      else
      cout<<"!!INVALID INPUT!!";
		}
		else if(inchoice==3)
		{
			fstream fs;
			fstream fs1;
      cout<<"Enter the citizenship no. of the student";
      cin>>cn;
			fs.open("stinfo.dat",ios::in|ios::binary);
      fs1.open("tempstinfo.dat",ios::out|ios::binary);


			while(fs.read(reinterpret_cast<char *>(&a),sizeof(user)))
{
    if(strcmp(cn,a.c_num)==0)	{


				a.addsub();
				fs1.write(reinterpret_cast<char *>(&a),sizeof(user));

    }}
			fs.close();
      fs1.close();
    remove("stinfo.dat");
    rename("tempstinfo.dat","stinfo.dat");


			goto MENU2;
		}
		else if(inchoice==4)
		{

			fstream fs;
			fstream fs1;
      cout<<"Enter the citizenship no. of the student";
      cin>>cn;
			fs.open("stinfo.dat",ios::in|ios::binary|ios::app);
      fs1.open("tempstinfo.dat",ios::out|ios::binary);

			while(fs.read(reinterpret_cast<char *>(&a),sizeof(user)))
			{
          if(strcmp(cn,a.c_num)==0)
          {
				a.modiyprofile();
				fs1.write(reinterpret_cast<char *>(&a),sizeof(user));
			}
    }
			fs.close();
      fs1.close();
      remove("stinfo.dat");
      rename("tempstinfo.dat","stinfo.dat");

			goto MENU2;
		}
		else
		{
			goto MAIN_MENU;
		}
		if(inchoice<1||inchoice>5)
			cout<<"!!INVALID INPUT!!"<<endl;
			cout<<"Enter to continue"<<endl;
			getchar();
			cout<<"Press y otherwise perform more operations"<<endl;
			cin>>moreop;
			if(moreop!='Y'&&moreop!='y')
			{
				system("clear");
				cout<<"!!THANK YOU!!"<<endl;
				getchar();
				goto MAIN_MENU;
			}
        cout<<"Do you want to continue in student portal[Y/N]"<<endl;
		cin>>moreop;

	}while(moreop=='Y'||moreop=='y');
	break;
  case 3:
        return 0;
	default:
        if(ch<1||ch>2)
        {
            cout<<"!!INVALID INPUT!!"<<endl;
            getchar();
            system("clear");
            cout<<"\n\n\n!!THANK YOU!!"<<endl;
        }
        goto MAIN_MENU;
	}//switch end

	cout<<"Do you want to enter one of the portal[Y/N]\n ";
	cin>>con;
}while(con=='Y' || con=='y');

}//main end
