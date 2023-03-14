#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<iomanip>
#include<conio.h>


using namespace std;
template <class r>

void print(r a[],int amount)
{ 
       cout << "\n\n\t ********** Displaying Student's Details ********** \n"<<" ";
       cout<<left<<setw(30)<<"Number"<<left<<setw(30)<<"Information"<<left<<setw(40)<<"Respective values"<<left<<setw(30)<<"Frequency"<<endl;

       
       for(int i = 0; i < amount; i++)
       {
             cout << "\n\t-----------------------------------------------------------------------------------------------";
             cout<<left<<setw(30)<<i+1<<left<<setw(30)<< "First name"<<left<<setw(40)<<a[i].fname<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Middle name"<<left<<setw(40)<<a[i].mname<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Last name"<<left<<setw(40)<<a[i].lname<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Age"<<left<<setw(40)<<a[i].age<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Gender"<<left<<setw(40)<<a[i].gender<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Phone Number"<<left<<setw(40)<<a[i].cont.phone<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Email Address"<<left<<setw(40)<<a[i].cont.email<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Street Address"<<left<<setw(40)<<a[i].cont.address<<endl;
             cout<<setw(30)<<""<<setw(30)<<"National ID Number"<<left<<setw(40)<<a[i].security_number<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Birthday"<<left<<setw(40)<<a[i].birth_day<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Marriage Status"<<left<<setw(40)<<a[i].marriage_stat<<endl;
             cout<<setw(30)<<""<<setw(30)<<"Nationality"<<left<<setw(40)<<a[i].citizen<<endl;
}
     getch();
}