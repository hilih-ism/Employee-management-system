#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

int get_info()
{   
  
   ofstream in("member_list", ios::app);


    in << new_member.id << '\t' <<new_member.fname << '\t' << new_member.lname << '\t' << new_member.cont.phone<< '\t'<< new_member.cont.email<< '\t' <<new_member.m_plan << '\t' << new_member.fee << endl;

    in.close();
    system("pause");
    system("cls");

    _user(1);


}
void display1(){
string line;
ifstream in;
in. open("member_list", ios::in);
if(in.fail()) cout << "\n Error occured while opening file\n";
else{
    while (getline(in, line))
        cout << line << endl;
        system("pause");
        system("cls");
}
in.close();
    _user(1);
}
void sear(){



        cout << "\n 1. Search by ID\n 2. Search by name\n";
        int opt;
        cin >> opt;
        switch (opt){
        case 1:{ int id, test, a;
        a=0;
        test = 1;
        string str;
        cout << "\nEnter the id of the member to be searched: ";
        cin >> id;
        fstream fp;
    	fp.open("member_list",ios::in);
    	fp.seekg(0,ios::beg);
    	while(getline(fp, str))
    	{

        if(a>0){
    		if(match(str)==id)
    		{   cout << "\n The information about the member you searched for is: ";
    			cout << endl<< "ID \t first name \t last name \t phone \t email \t membership type \t fee" << endl;
    			cout << str << endl;
    			system("pause");
                test= 0;
                system("cls");
    		}

    	}
    	a++;
    	}
    	fp.close();
    	if(test)
    	cout<<"\n No record found with such ID";
    	system("pause");
    	system("cls");
    	break;
    	}

    	case 2: { int countt= 0;
                cout << "\nEnter the first name of the member: ";
                string sub, sub2;
                string name;
                string line;
                cin >> name;
                ifstream in("member_list");
                in.seekg(0,ios::beg);
                while(getline(in, line)){
                    sub = line.c_str();
                    if (strlen(line.c_str())>10){
                    sub2 = sub.substr(5, strlen(name.c_str()));}
                    else sub2 = sub;
                    //cout << line << '\t'<< sub2<< endl;
                    if(name == sub2){
                        cout<< line << endl;
                        countt++;
                        }
                    }

               cout << endl << countt <<  " related results found.\n";
               in.close();

               system("pause");
               system("cls");
                break;}
        }

    _user(1);






      return 0;

             }