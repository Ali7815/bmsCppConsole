//Admin UserName= admin , Password=1234
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
//Function PrototypeStart--------------------------------------------------------------------------
void header();
void home();
void adminlog();
void userlog();
void clearscreen();
void adminMenu();
void addaccount();
void addcostumertoarray(string name,string username1,string password1,string type,string address,string phone,double account,double deposit);
void viewallcostumer();
void usermenu();
void userlog();
void totalmoney();
int depositmoney();
void depositdetails();
void accountdetails();
int withdrawmoney();
void withdrawdetails();
void balancedetails();
int transactmoney();
void transactdetails();
void receivedetails();
void sortingview();
void storedata();
void loaddata();
string parse(string row, int column);
void ids();
void userdata();
void total_money();
void storewithdrawmoney();
void storedepositmoney();
void storetransact();
void loadids();
void loaduserdata();
void loadtotal_money();
void loaddepositmoney();
void loadwithdrawmoney();
void loadtransact();
void storetotal();
void loadtotalmoney();

//Function Prototype End----------------------------------------------------------------------------


//Data Structure Start--------------------------------------------------------------------
int option;
string password;
int check=0;
string username ;
const int limit=20;
int count_user=0;
string nameA[limit];
string usernameA[limit];
string passwordA[limit];
string typeA[limit];
string phoneA[limit];
double accountnumberA[limit];
double  moneyA[limit];
string cityA[limit];
double totalmoneyinbank=0;
int usercheck=0;
int dateA[limit];
int balanceA[limit];
string purposeA[limit];
int intial[limit];
int mon;
int idx;
int idx2;
int idx3;
int mon2;
int mon3;
int check5=0;
int dateA2[limit];
int balanceA2[limit];
string purposeA2[limit];
int total1[limit]={0};
int total2[limit]={0};
int total3[limit]={0};
int total4[limit]={0};
int dateA3[limit];
int balanceA3[limit];
int receive[limit]={0};
double account3;
int yes=0;
double account[limit];
double account2[limit];
int count1=0;
int balance2[limit];
int date2[limit];
int idxr;
int breakk = 0;
string nameAs[limit];
string usernameAs[limit];
string passwordAs[limit];
string typeAs[limit];
string phoneAs[limit];
double accountnumberAs[limit];
double moneyAs[limit];
string cityAs[limit];
string chk,chk2,chk3,chk4;
int ind[limit]={-1};
int ind2[limit]={-1};


//Data Structure End----------------------------------------------------------------------
main () 
//Main Start-----------------------------------------------------------------------------
{
	loaddata();
	while(true)
	{
	 home();
	 if (option==3)
	 {
	 	
	 	break;
	 }
	 if (option==1)
	 {
	 	while(check!=2) 
	 {
		 if(breakk == 1)
		 {
			 breakk = 3;
			 break;
		 }
     adminlog();	
	 if ((username == "admin" || username=="ADMIN") && password == "1234") 
	 {
		  breakk = 2;
	 	system("cls");
	 	char adminOption=' ';
	 	while (true)
	 	 {
	 	    adminMenu();
	 	    
	 	    
			if (option==1) {
			//Add New Account
			while(true) {
			
		if (count_user>20) {
			header();
			cout<<"No more Costumer can added"<<endl;
			clearscreen();
			break;
		
        	}
			addaccount();
			break;
	     	}
				}
			else if (option==2) {
			//View All Costumer
			viewallcostumer();
			}
			else if (option==3)
			{
			//View Costumer in Sorting Order
			sortingview();
				
			}
			else if (option==4) {
			//Check Cheque Request
			header();
			cout<<"Home > Admin > Cheque Request"<<endl;
			cout<<"No New Request"<<endl;
			clearscreen();
			}
			else if (option==5) {
			//Loan Request
			header();
			cout<<"Home > Admin > Loan Request"<<endl;
			cout<<"No New Request"<<endl;
			clearscreen();
			}
			else if (option==6) {
			//Total Money
			totalmoney();
			}
			else if (option==7) {
			//logout
			breakk = 1;
			break;
            }
            else  {
            	cout<<"Wrong Input";
            }
        //End of while loop for admin menu 
		}
         
         
	 }
     
	 else {
	 	cout<<"Wrong UserName And Password"<<endl;
	 	cout<<"Enter 1 to Re-enter and 2 to Return to home screen........";
	 	cin>>check;
	 	system("cls");
	 	if (check==2) {
	 		check++;
	 		break;
	 		
	 	}
	 }	
	 }
	//Admin Menu End
	}

	//User Menu Start----------------------------------------------------------------------------------------------------
		 if (option==2)
		 {
		 	
			if (count_user==0)
			{
			header();
			cout << "No Account till now....Please Register Yourself from Admin" << endl;
			clearscreen();
			}	
			else
			{
				while(usercheck!=2)
				{
			if(breakk == 1)
			{
			breakk = 3;
			break;
}
				userlog();	
				for (int i=0 ; i<count_user ; i++) 
			    { 
				if (usernameA[i]==username && passwordA[i]==password)
				{
					system("cls");
					while(true)
					{
					
					 idx=i;
					 ind[idx]=idx;
					 int count_deposit=idx;
				usermenu();	
				if (option==1)
				{
				
				//Deposit Money
				 mon=depositmoney();
				 clearscreen();
				}
				if (option==2)
				{
					//withdraw Money
					mon2=withdrawmoney();
					clearscreen();
				}
				if (option==3)
				{
					//Transact Money
					if(count_user==1)
					{
						header();
						cout<<"You cannot transact money as there is one account of yours till now"<<endl;
						clearscreen();
					}
					else
					{
						mon3=transactmoney();
							if (account3==accountnumberA[idx3])
							{
								date2[idx3]=dateA3[idx];
								balance2[idx3]=balanceA3[idx];
								account2[idx3]=accountnumberA[idx];
								total4[idx3]=total4[idx3]+balanceA3[idx];
								moneyA[idx3]=moneyA[idx3]+balanceA3[idx];
								storetransact();
								count1++;
							}
						}
					}
				if (option==4)
				{
					//Check Deposit Details
				depositdetails();
				}
				if (option==5)
				{
					//check withdraw details
					withdrawdetails();
				}
					if (option==6)
				{
					//Check Transact Money Details
					transactdetails();
				}
					if (option==7)
				{
					//Check Received Money Details
					receivedetails();
				}
	
	
				if (option==8)
				{
					//Check balance Details
					balancedetails();
				}
			
				if (option==9)
				{
				//My Account Details
				accountdetails();
				}
				if (option==10)
				{
					//logout
					storetotal();
				breakk = 1;
			    break;
				}
			}
		}
				
					} 
		     
		     if (breakk!=1)
		     {
				if(username!=usernameA[idx] && password!=passwordA[idx])
				{
					system("cls");
					header();
				cout<<"Wrong UserName And Password"<<endl;
				cout<<"Enter 1 to Re-enter and 2 to Return to home screen ";
				cin>>usercheck;
				system("cls");
				if (usercheck==2) {
				usercheck++;
				break;	
				}
					
			}
				}
	}

			    }
		 	
		 }

	 //User Menu End-----------------------------------------------------------------------------------------------------------------
    
	//Main While End 
     }

}

//Main End--------------------------------------------------------------------------------

//Funtion Defination Start----------------------------------------------------------------
void header() 
{
	cout << "***************************************************************" << endl;
	cout << "*********        BANKING MANAGEMENT SYSTEM            *********" << endl;
	cout << "***************************************************************" << endl;
	cout << "                " << endl;
}
void home() 
{
	header();
    cout << "Home" << endl;
    cout << "       " << endl;
    cout << "Select any of the Following";
    cout << "       " << endl;
    cout << "1- Admin" << endl;
    cout << "2- Costumer" << endl;
    cout << "3- Exit    " <<endl;
    cout << "Your Option......";
    cin >> option;
    system("cls");
	
}
void adminlog() 
{
	header();
    cout << "Home > Admin > Log in " << endl;
    cout << "                 " << endl;
    cout << "User Name : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;

}
void clearscreen()
{
	cout << "Press any Key to Continue...."<<endl;
	getch();
	system("cls");	
}
void adminMenu() 
{
	 header();
     cout << "Home < Admin " << endl;
     cout << "             " << endl;
     cout << "1- Add New Account" << endl;
     cout << "2- View All Costumer Record" << endl;
     cout << "3- View All costumer In Sorting Order" <<endl;
     cout << "4- See New Cheque Request" << endl;
     cout << "5- Check New Loan Request" << endl;
     cout << "6- Total Deposit Money in Bank" << endl;
     cout << "7- Logout" << endl;
     cout << "Your Option......";
     cin >> option;
     system("cls");
}
void addaccount() 
{
        	header();
	      cout << "Home  > Admin > Add New Account" << endl;
	    string password1;
	    double deposit,account;
	    string phone;
	    string name,username1,type,address;
		cout << "                             " << endl;
		cout << "Enter Costumer Name : ";
		cin >> name;
		cout << "Enter Costumer UserName : ";
		cin >> username1;
		cout << "Enter Costumer Password: ";
		cin >> password1;
		cout << "Enter Account Type : ";
		cin >> type;
		cout << "Enter Residential City : ";
		cin >> address;
		cout << "Enter Phone Number : ";
		cin >> phone;
		cout << "Enter Account Number : ";
		cin >> account;
		cout << "Enter Deposit Money : ";
		cin >> deposit;
		cout << "Account is Successfully Registered" << endl;
		addcostumertoarray(name,username1,password1,type,address,phone,account,deposit);
		clearscreen();
}
void addcostumertoarray(string name,string username1,string password1,string type,string address,string phone,double account,double deposit)
{
		nameA[count_user]=name;
		usernameA[count_user]=username1;
		passwordA[count_user]=password1;
		typeA[count_user]=type;
		cityA[count_user]=address;
		phoneA[count_user]=phone;
		accountnumberA[count_user]=account;
		moneyA[count_user]=deposit;
		intial[count_user]=deposit;
		nameAs[count_user]=name;
		usernameAs[count_user]=username1;
		passwordAs[count_user]=password1;
		typeAs[count_user]=type;
		phoneAs[count_user]=phone;
		accountnumberAs[count_user]=account;
		moneyAs[count_user]=deposit;
		cityAs[count_user]=address;
		totalmoneyinbank=totalmoneyinbank+deposit;
		count_user++;
		ids();
		userdata();
		total_money();
		
		
		
}
void viewallcostumer()
{
	system("cls");
	header();
	cout << "Home  > Admin > View All Costumer" << endl;
	cout<<"                 "<<endl;
	if (count_user==0) {
	cout<<"No Records Found"<<endl;
		}
	else {
	cout<<"Name"<<"\t\t"<<"UserName"<<"\t\t"<<"Password"<<"\t\t"<<"AccountType"<<"\t\t"<<"PhoneNumber"<<"\t\t"<<"AccountNumber"<<"\t"<<"Balance"<<endl;
		for (int i =0 ;i<count_user;i++)
		{
	cout<<nameA[i]<<"\t\t"<<usernameA[i]<<"\t\t\t"<<passwordA[i]<<"\t\t\t"<<typeA[i]<<"\t\t\t"<<phoneA[i]<<"\t\t\t"<<accountnumberA[i]<<"\t\t"<<moneyA[i]<<endl; 
}

}
clearscreen();
}

void usermenu() {
	header();
     cout << "Home  > Costumer" << endl;
     cout << "1- Deposit Money" << endl;
     cout << "2- Withdraw Money" << endl;
     cout << "3- Transact Money" << endl;
     cout << "4- Check Deposit History" << endl;
     cout << "5- Check Withdraw History" << endl;
     cout << "6- Check Transact History" << endl;
     cout << "7- Check Received Money History" << endl;
     cout << "8- Check Balance Details" << endl;
     cout << "9- My Account Details" << endl;
     cout << "10- Logout" << endl;
     cout << "Your Option......";
     cin >> option;
     system("cls");
}
void totalmoney()
{
	header();
	 cout << "Home  > Admin > Total Money in Bank" << endl;
	 cout<<"                                    "<<endl;

	if (count_user==0) {
	cout<<"No Money in the Bank "<<endl;
	clearscreen();
    }
    else
    {
    	cout<<"Total money In bank of "<< count_user <<" User is : "<< totalmoneyinbank <<endl;
		clearscreen();
    }
}
void userlog() {
	header();
      cout << "Home > Costumer > Log in " << endl;
      cout << "                 " << endl;
          cout << "User Name : ";
          cin >> username;
          cout << "Password : ";
          cin >> password;
}
int depositmoney()
{
        header();
		cout << "Home  > Costumer > Deposit Money" << endl;
		cout << "Enter Date(DD/MM/YYYY) : ";
		cin >> dateA[idx];
		cout << "Enter Purpose : ";
		cin >> purposeA[idx];
		cout << "Enter Amount : ";
		cin >> balanceA[idx];
		total1[idx]=total1[idx]+balanceA[idx];
		moneyA[idx] = moneyA[idx] + balanceA[idx];
		totalmoneyinbank=totalmoneyinbank+balanceA[idx];
		storedepositmoney();
		return moneyA[idx];
}
void depositdetails()
{
	header();
	 cout << "Home  > Costumer > Deposit Details" << endl;
	cout<<"Date"<<"\t\t"<<"Purpose"<<"\t\t"<<"Amount"<<endl;

	cout<<dateA[idx]<<"\t\t"<<purposeA[idx]<<"\t\t"<<balanceA[idx]<<endl;
       
	clearscreen();
}
void accountdetails()
{
	header();
	 cout << "Home  > Costumer > My Account Details" << endl;
	cout<<"Name"<<"\t\t\t"<<"UserName"<<"\t\t\t"<<"Password"<<"\t\t\t"<<"AccountNumber"<<"\t\t\t"<<"PhoneNumber"<<"\t\t"<<"Balance"<<endl;
	cout<<nameA[idx]<<"\t\t\t"<<usernameA[idx]<<"\t\t\t\t"<<passwordA[idx]<<"\t\t\t\t"<<accountnumberA[idx]<<"\t\t\t\t"<<phoneA[idx]<<"\t\t\t"<< moneyA[idx]<<endl;
	clearscreen();
}
int withdrawmoney()
{
		header();
		 cout << "Home  > Costumer > WithDraw Money" << endl;
		 cout<<" "<<endl;
		cout << "Enter Date(DD/MM/YYYY) : ";
		cin >> dateA2[idx];
		cout << "Enter Purpose : ";
		cin >> purposeA2[idx];
		cout << "Enter Amount : ";
		cin >> balanceA2[idx];
		moneyA[idx] = moneyA[idx] - balanceA2[idx];
		total2[idx]=total2[idx]+balanceA2[idx];
		totalmoneyinbank=totalmoneyinbank-balanceA2[idx];
		storewithdrawmoney();
		return moneyA[idx];
}
void withdrawdetails()
{
	header();
	 cout << "Home  > Costumer > WithDraw History" << endl;
	cout<<"Date"<<"\t\t"<<"Purpose"<<"\t\t"<<"Amount"<<endl;
	cout<<dateA2[idx]<<"\t\t"<<purposeA2[idx]<<"\t\t\t"<<balanceA2[idx]<<endl;  
	clearscreen();
}
void balancedetails()
{
	header();
	 cout << "Home  > Costumer > Balance Details" << endl;
	cout<<"Intial Deposit  : "<<intial[idx]<<endl;
	cout<<"Deposit Money   : "<<total1[idx]<<endl;
	cout<<"Withdraw Money  : "<<total2[idx]<<endl;
	cout<<"Transact Money  : "<<total3[idx]<<endl;
	cout<<"Received Money  : "<<total4[idx]<<endl;
	cout<<"Available Money : "<<moneyA[idx]<<endl;
	clearscreen();
}
int transactmoney()
{
	
	while(true) {
		
	
		if (breakk==3 || breakk==2)
		{
		   breakk=0;
			break;
		}
		breakk=0;
		header();
	    cout << "Home  > Costumer > Transact Money" << endl;
		cout<<"Enter Account Number to Send Money : ";
		cin>>account3;
		for (int x=0 ; x<count_user ; x++)
		{
	if (accountnumberA[x]==account3)
	{
		idx3=x;
		ind2[idx3]=idx3;
		yes=1;
		breakk=3;
		break;
	}
	}
	 if (breakk==0)
	{
		cout<<"Wrong Account Number"<<endl;
		cout<<"Enter 1 to Re-enter and 2 to return....";
		cin>>breakk;
		if (breakk==2)
		{
		system("cls");
		break;
		}
			system("cls");
	}

}
if (yes==1)
{
    cout<< "Enter Date(DD/MM/YYYY) : ";
	cin >> dateA3[idx];
	cout<<"Enter a Amount : ";
	cin>>balanceA3[idx];
	moneyA[idx]=moneyA[idx]-balanceA3[idx];
	total3[idx]=total3[idx]+balanceA3[idx];
	yes=0;
	clearscreen();
}
  return moneyA[idx];
}
void transactdetails()
{
	header();
	 cout << "Home  > Costumer > Transact History" << endl;
	if (count1==0)
	{
		cout<<"No Records Found"<<endl;
		clearscreen();
	}
	else
	{
	
	cout<<"FromAN"<<"\t\t"<<"ToAN"<<"\t\t"<<"Date"<<"\t\t"<<"Amount"<<endl;
	cout<<accountnumberA[idx]<<"\t\t"<<accountnumberA[idx3]<<"\t\t"<<dateA3[idx]<<"\t\t"<<balanceA3[idx]<<endl;
	
    clearscreen();
}
}
void receivedetails()
{
	header();
	 cout << "Home  > Costumer > Received History" << endl;
	if (count1==0)
	{
		cout<<"No Records Found"<<endl;
		clearscreen();
	}
	if (balance2[idx]>0)
	{
	cout<<"FromAN"<<"\t\t"<<"Date"<<"\t\t"<<"Amount"<<endl;

	cout<<account2[idx3]<<"\t\t"<<date2[idx3]<<"\t\t"<<balance2[idx3]<<endl;
	
    clearscreen();
   }
    else if (balance2[idx]==0)
	{
    	cout<<"No Records Found"<<endl;
    	clearscreen();
	}
}
void sortingview()
{
	system("cls");
	header();
	cout << "Home  > Admin > View All Costumer In Sorting Order" << endl;
	cout<<"                 "<<endl;
	if (count_user==0) {
	cout<<"No Records Found"<<endl;
		}
	else {
	cout<<"Name"<<"\t\t"<<"UserName"<<"\t\t"<<"Password"<<"\t\t"<<"AccountType"<<"\t\t"<<"PhoneNumber"<<"\t\t"<<"AccountNumber"<<"\t"<<"Balance"<<endl;
	string temp1,temp2,temp3,temp4;
	double temp6,temp7;
	string temp5;
	int largest=-1;
	for (int i=0 ; i<count_user ; i++)
	{
		for (int j=i+1 ; j<count_user ; j++)
		{
			if (moneyAs[j]>moneyAs[i])
			{
				//Balance sort
				temp7=moneyAs[j];
				moneyAs[j]=moneyAs[i];
				moneyAs[i]=temp7;
				//Name Sort
				temp1=nameAs[j];
				nameAs[j]=nameAs[i];
				nameAs[i]=temp1;
				//User Sort
				temp2=usernameAs[j];
				usernameAs[j]=usernameAs[i];
				usernameAs[i]=temp2;
				//pass sort
				temp3=passwordAs[j];
				passwordAs[j]=passwordAs[i];
				passwordAs[i]=temp3;
				//Type sort
				temp4=typeAs[j];
				typeAs[j]=typeAs[i];
				typeAs[i]=temp4;
				//phone sort
				temp5=phoneAs[j];
				phoneAs[j]=phoneAs[i];
				phoneAs[i]=temp5;
				//account number sort
				temp6=accountnumberAs[j];
				accountnumberAs[j]=accountnumberAs[i];
				accountnumberAs[i]=temp6;
				
			}
		}
	cout<<nameAs[i]<<"\t\t"<<usernameAs[i]<<"\t\t\t"<<passwordAs[i]<<"\t\t\t"<<typeAs[i]<<"\t\t\t"<<phoneAs[i]<<"\t\t\t"<<accountnumberAs[i]<<"\t\t"<<moneyAs[i]<<endl;	}
}

clearscreen();
}
void ids()
{
	//For Storing UserNAme and Password
	fstream file;
	file.open("ids.txt",ios::out);
	for (int i=0 ; i<count_user ; i++)
	{
		
            file<<usernameA[i]<<","<<passwordA[i]<<endl;
        
     
	}
	file.close();
}
void userdata()
{

//For Storing Costumer 
fstream file;
	file.open("user_data.txt",ios::out);
	for (int i=0 ; i<count_user ; i++)
	{
		 if (nameA[i] == "\0" )
        {
            continue;
        }
        else
        {
        
		file<<nameA[i]<<","<<usernameA[i]<<","<<passwordA[i]<<","<<typeA[i]<<","<<phoneA[i]<<","<<accountnumberA[i]<<","<<moneyA[i]<<endl;
	}
}
	file.close();
}
void storedepositmoney()
{
    //For Deposit money
    fstream file;
	file.open("deposit_money.txt",ios::out);
	for (int i=0 ; i<count_user ; i++) {
	    if (ind[i]!=-1) 
	    {  
	file<<ind[i]<<","<<dateA[i]<<","<<purposeA[i]<<","<<balanceA[i]<<endl;
	ind[i]=ind[i];
}
else
{
	continue;
}
}
	file.close();
}

void storewithdrawmoney()
{
    fstream file;
	//For Withdarw Money
	file.open("withdraw_money.txt",ios::out);
	for (int i=0 ; i<count_user ; i++) {
	    if (ind[i]!=-1) 
	    {
	    
	file<<ind[i]<<","<<dateA2[i]<<","<<purposeA2[i]<<","<<balanceA2[i]<<endl;
	ind[i]=ind[i];
}
    else
    {
	continue;
	}
 }
	file.close();
}
void storetransact()
{

	//for Transact Money
	    fstream file;
	file.open("transact_money.txt",ios::out);
	for (int i=0 ; i<count_user ; i++) {
	    if (ind[i]!=-1)  
	    {
	    	int x=ind[i];
	        int y=ind2[idx3];
	        if(ind2[idx])
	file<<ind[x]<<","<<y<<","<<dateA3[x]<<","<<balanceA3[x]<<endl;
	ind2[i]=ind2[i];
     }
 
    else
    {
	continue;
	}
 }
	file.close();
}
void storerecieve()
{

	//for Received Money
	fstream file;
	file.open("received_money.txt",ios::out);
	for (int i=0 ; i<count_user ; i++)
	{
	file<<ind[i]<<","<<account2[i]<<"\t\t"<<date2[i]<<"\t\t"<<balance2[i]<<endl;
    }
	file.close();
}
void storetotal()
{
	//Check Balance Details
	fstream file;
	file.open("total_money.txt",ios::out);
	for (int i=0;i<count_user ; i++)
	{
	file<<intial[i]<<","<<total1[i]<<","<<total2[i]<<","<<total3[i]<<","<<total4[i]<<","<<moneyA[i]<<endl;
   }
	file.close();	
}
string parse_data(string line, int index)
{

    int comma_count = 1;
    string item;
    int idx = 0;
    char ch = '!';
    while (ch != '\0')
    {
        ch = line[idx];
        if ( ch == ',')
        {
            comma_count = comma_count + 1 ;   
        }
        if (comma_count == index)
        {
            if (ch != ',')
            {
                item = item + ch;   
            }
        }
        if (ch == '\0' )
        {
            return item;
        }
        idx++;          
    }
    return item;
}

void loaduserdata()
{
	 fstream newfile;
	 newfile.open("user_data.txt" , ios::in);
   int index = 0;
    string line = "1";
    while (line != "\0")
    {
        getline(newfile , line );
        nameA[index]= parse_data(line ,1);
        nameAs[index]= parse_data(line ,1);
        usernameA[index] = parse_data(line ,2);
        usernameAs[index] = parse_data(line ,2);
        passwordA[index] = parse_data(line , 3);
        passwordAs[index] = parse_data(line , 3);
        typeA[index] = parse_data(line , 4);
        typeAs[index] = parse_data(line , 4);
        phoneA[index]= parse_data(line , 5); //String to Integer
        phoneAs[index]=parse_data(line , 5); 
        chk2= parse_data(line , 6); //String to Integer
        stringstream b(chk2);
        stringstream b1(chk2);
        b>>accountnumberA[index];
        b1>>accountnumberAs[index];
        chk3 = parse_data(line , 7); //String to Integer
        stringstream c(chk3);
        stringstream c1(chk3);
        c>>moneyA[index];
        c1>>moneyAs[index];
        count_user++;
        index++;
      }
    count_user=count_user-1;
    newfile.close(); 
}
void total_money()
{
	//For Storing Total Money
	fstream file;
	file.open("total_money_in_bank.txt",ios::out);
	 file<<totalmoneyinbank;
	 file.close();	
}
void loadtotal_money()
{
	
	fstream file;
	file.open("total_money_in_bank.txt",ios::in);
	string line;
		getline(file,line);
		stringstream a(line);
		a>>totalmoneyinbank;
		file.close();
}
void loaddepositmoney()
{
	fstream file;
	int temp;
	file.open("deposit_money.txt",ios::in);
	   int index = 0;
    string line = "1";
    while (line != "\0")
    {
        getline(file , line );
        string ind= parse_data(line ,1);
        stringstream d(ind);
        d>>temp;
        string ck = parse_data(line ,2);
        stringstream a(ck);
        a>>dateA[temp];
        purposeA[temp]= parse_data(line , 3); 
        string ck1= parse_data(line , 4); 
        stringstream b(ck1);
        b>>balanceA[temp];
        count_user++;
        index++;
      }
    count_user=count_user-1;
    file.close(); 
}	
void loadwithdrawmoney()
{
	fstream file;
	int temp;
	file.open("withdraw_money.txt",ios::in);
	int index = 0;
    string line = "1";
    while (line != "\0")
    {
        getline(file , line );
        string ind= parse_data(line ,1);
        stringstream d(ind);
        d>>temp;
        string ck = parse_data(line ,2);
        stringstream a(ck);
        a>>dateA2[temp];
        purposeA2[temp]= parse_data(line , 3); 
        string ck1= parse_data(line , 4); 
        stringstream b(ck1);
        b>>balanceA2[temp];
        count_user++;
        index++;
      }
    count_user=count_user-1;
    file.close(); 
}
void loadtotalmoney()
{
	fstream file;
	file.open("total_money.txt",ios::in);
	int index = 0;
    string line = "1";
    while (line != "\0")
    {
        getline(file , line );
        string ck1= parse_data(line ,1);
        stringstream a(ck1);
        a>>intial[index];
        string ck2 = parse_data(line ,2);
        stringstream b(ck2);
        b>>total1[index];
        string ck3= parse_data(line , 3); 
        stringstream c(ck3);
		c>>total2[index]; 
        string ck4= parse_data(line , 4); 
        stringstream d(ck4);
        d>>total3[index];
        string ck5= parse_data(line , 5); 
        stringstream e(ck5);
        e>>total4[index];
        string ck6= parse_data(line , 6); 
        stringstream f(ck6);
        f>>moneyA[index];
        count_user++;
        index++;
      }
    count_user=count_user-1;
    file.close(); 
}


void loaddata()
{
loaduserdata();
loadtotal_money();
loaddepositmoney();
loadwithdrawmoney();
loadtotalmoney();
}


//Function Defination End----------------------------------------------------------
