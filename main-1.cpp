
struct contact{
 int phone;
 string email;


};
struct user{

	char mno[10], gender;
	double weight,height;
	int age;
}info;

struct employee{
    int id;
    float fee;
    string fname;
    string m_plan;
    contact cont;
    string lname;
}
  


void create(){

    int amount;
    cout<<"Enter the number of employee's you wish to enter";


    employee new_employee;
    new_member.id = validID();
    cout << "\nEnter the new member's full name : ";
    cin >> new_member.fname >> new_member.lname;
    cout<<"\nEnter the new member's phone number: ";
    cin>> new_member.cont.phone;
    cout<<"\nEnter the new member's email: ";
    cin>> new_member.cont.email;
    cout<<"\nMembership type \n 1. Gold class\n 2. Silver class\n";
    int k;
    cin>>k;
		switch (k)
		{
			case 1:
			    new_member.m_plan = "Gold";
				new_member.fee = 2500.00;
				cout<<"The monthly fee would be: $"<<2500.00<<endl;


				break;
			case 2:
			    new_member.m_plan = "Silver";
				new_member.fee = 2000.00;
				cout<<"The monthly fee would be: $"<<2000.00<<endl;

				break;
            default: cout<<"Error occured; Try again! \n";


		}
		ofstream in("member_list", ios::app);


    in << new_member.id << '\t' <<new_member.fname << '\t' << new_member.lname << '\t' << new_member.cont.phone<< '\t'<< new_member.cont.email<< '\t' <<new_member.m_plan << '\t' << new_member.fee << endl;

    in.close();
    system("pause");
    system("cls");

    _user(1);


}
void _user(int mode){
if (mode == 1){
      cout<<"What do you want to do?\n";
      cout<<"\t***********************************************";
    	cout<<"\n\tPress 1 to CREATE A MEMBER";
    	cout<<"\n\tPress 2 to DISPLAY EXSISTING RECORDS";
    	cout<<"\n\tPress 3 to SEARCH FOR A PARTICULAR RECORD ";
    	cout<<"\n\tPress 4 to EDIT A MEMBER'S DETAILS";
    	cout<<"\n\tPress 5 to DELETE A MEMBER'S RECORD";
    	cout<<"\n\tPress any other key to EXIT";
    	cout<<"\n\t**********************************************\n";

        int opt;
        cin >> opt;
        switch(opt){
            case 1: create();
                    break;
            case 2: display1();
                    break;
            case 3: sear();
                    break;
            case 4: edit();
                    break;
            case 5: del();
                    break;
            default: _user(chooseMode());
        }
}
}