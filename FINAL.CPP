#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<fstream.h>
#include<process.h>
#include<graphics.h>

void main3();
void summary();
void bill();
void display();
void school();
void paymadi();
void cheque();
void cash();
void creditcard();
void college();
void office();
void edit();
void login();
void aboutus();
void travel();
void main1();
void newcustomer();
void existingcustomer();
void mod();
void main2();
void ets();
void wcr();
void kerala();
void gold();
void thf();
void guide();
void details();
void trip();
void adminfun1();
void adminfun2();
void wel();

int a,b;
char c;
//--------------------
//class for customers
class Customer
{
char name[20],email[20],phone[20],un[20],pass[];

public:
void accept()
{
cout<<"\nPlease fill each of the following details:";
cout<<"\nYour full name:";
gets(name);
cout<<"\nE-mail ID:";
gets(email);
cout<<"\nPhone Number:";
gets(phone);
cout<<"\nEnter new username:";
gets(un);
cout<<"\nEnter your password:";
gets(pass);

cout<<"\n\nMaking your account. Please wait.";
delay(500);
cout<<"\nSuccessful! ";
delay(250);
getch();
}

void display()
{textcolor(CYAN);
clrscr();
cout<<"\nDisplaying your details:-";
cout<<"\nFull Name: ";puts(name);
cout<<"\nE-mail ID: ";puts(email);
cout<<"\nPhone-no: ";puts(phone);
cout<<"\nUsername: ";puts(un);
cout<<"\nPassword: ";puts(pass);
getch();
}

char* ret_name()
{
 return un;
}

char* ret_password()
{
 return pass;
}

int pass_length()
{
 return strlen(pass);
}
}customer;

/////////////////////////////////////////////////////
void display()
{clrscr();
textcolor(GREEN);
delay(100);
cprintf("******************************* OBEROI TRAVELS ******************************\r\n");
delay(50);
cprintf("******************************* WHEN YOU NEED A BREAK *****************************\r\n");
}
/////////////////////////////////////////////////////
void modifyaccount() //for the customer class
{textcolor(5);
clrscr();
display();
fstream gin("customer.txt",ios::binary|ios::in|ios::out);
int f=0;
char n[20];
cout<<"\nEnter your username:";
gets(n);

while(gin.read((char *)&customer,sizeof(customer)))
{
 if(strcmp(customer.ret_name(),n)==0)
 {
  int p=gin.tellg();
  gin.seekg(p-sizeof(customer),ios::beg);
  customer.accept();
  gin.write((char *)&customer, sizeof(customer));
  f++;
 }
}
gin.close();
if(f==0)
cout<<"\nNo such username exists!";
cout<<"\nPress any key to continue...";
getch();
}

void deleteaccount() //for customer class
{textcolor(GREEN);
 clrscr();
 display();
 ifstream gin("customer.txt",ios::in|ios::binary);
 ofstream gout("customer2.txt",ios::out|ios::binary);

 int f=0;
 char n[20];
 cout<<"\nEnter the username who's account is to be deleted:";
 gets(n);

 while(gin.read((char *)&customer,sizeof(customer)))
 {
  if(strcmp(customer.ret_name(),n)!=0)
  gout.write((char *)&customer, sizeof(customer));

  else
  f++;
 }
 gin.close();
 gout.close();
 if(f==0)
 cout<<"Account with given username not found!";
 remove("customer.txt");
 rename("customer2.txt","customer.txt");
 getch();
 return;
}

void displayaccount() //for customer class
{textcolor(CYAN);
clrscr();
display();
ifstream gin("customer.txt",ios::in|ios::binary);

while(gin.read((char *)&customer,sizeof(customer)))
{
 customer.display();
 delay(250);
 cout<<"Press any key to go back...";
}
gin.close();
getch();
return;
}
/////////////////////////////////////////////////////
//Food function
void food()
{textcolor(LIGHTBLUE);
clrscr();
display();
ofstream gout("food.txt",ios::out);

char looper[]="     You will now select your food preferance during your stay in the hotels";

for(int k=0;k<strlen(looper);k++)
{
 cout<<looper[k];delay(75);
}
loop:

cout<<"\nSelect an option:\n1)Vegetarian \n2)Non-vegetarian \n3)Buffet \n4)Barbeque";
cin>>a;

if(a==1)
{textcolor(RED);
 clrscr();
 display();
 loop1:
 cout<<"\nSelect your food type in Vegetarian: \n1)South Indian \n2)North Indian \n3)General food \n4)Special food of the place you are staying in\n5)Mix";
 cin>>b;
 switch(b)
 {
  case 1:
  cout<<"Order placed for South Indian food!";
  gout<<"Food Type : Vegetarian --- South Indian Food";
  delay(250);
  gout.close();
  goto end;

  case 2:
  cout<<"Order placed for North Indian food!";
  gout<<"Food Type : Vegetarian --- North Indian Food";
  delay(250);
  gout.close();
  goto end;

  case 3:
  cout<<"Order placed for General vegetarian food!";
  gout<<"Food Type : Vegetarian --- General Food";
  delay(250);
  gout.close();
  goto end;

  case 4:
  cout<<"Order placed for Special food!";
  gout<<"Food Type : Vegetarian --- Special Food";
  delay(250);
  gout.close();
  goto end;

  case 5:
  cout<<"Order placed for Mix Vegetarian food!";
  gout<<"Food Type : Vegetarian --- Mix";
  delay(250);
  gout.close();
  goto end;

  default:
  cout<<"Please enter correct option!";goto loop1;
 }
}

if(a==2)
{ textcolor(9);
 clrscr();
 display();
 loop2:
 cout<<"1)Japanese \n2)Chinese \n3)Thai \n4)Seafood \n5)Special food of the place you are staying in\n6)Mix";
 cin>>b;
 switch(b)
 {
  case 1:
  cout<<"Order placed for Japanese food!";
  gout<<"Food Type : Non-Vegetarian --- Japanese Food";
  delay(250);
  gout.close();
  goto end;

  case 2:
  cout<<"Order placed for Chinese food!";
  gout<<"Food Type : Non-Vegetarian --- Chinese Food";
  delay(250);
  gout.close();
  goto end;

  case 3:
  cout<<"Order placed for Thai food!";
  gout<<"Food Type : Non-Vegetarian --- Thai Food";
  delay(250);
  gout.close();
  goto end;

  case 4:
  cout<<"Order placed for Seafood!";
  gout<<"Food Type : Non-Vegetarian --- Seafood";
  delay(250);
  gout.close();
  goto end;

  case 5:
  cout<<"Order placed for Special food!";
  gout<<"Food Type : Non-Vegetarian --- Special food";
  delay(250);
  gout.close();
  goto end;

  case 6:
  cout<<"Order placed for Mix variety!";
  gout<<"Food Type : Non-Vegetarian --- Mix";
  delay(250);
  gout.close();
  goto end;

  default:
  cout<<"Please enter correct option!";
  goto loop2;
 }
}

if(a==3)
 {textcolor(CYAN);
  clrscr();
  display();
  cout<<"Buffet booked!";
  gout<<"Food Type --- Buffet";
  delay(250);
  gout.close();
  goto end;
 }

if(a==4)
{textcolor(CYAN);
 clrscr();
 display();
 cout<<"Barbeque booked!";
 gout<<"Food Type --- Barbeque";
 delay(250);
 gout.close();
 goto end;
}

else
{
 cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";
 goto loop;
}
end:
summary();
getch();
}
///////////////////////////////////////
void greatchoice()
{
char d[]="YOU HAVE MADE A GREAT CHOICE!!";
cout<<endl;
for(int k=0; k<strlen(d); k++)
 {
  cout<<d[k];
  delay(50);
 }
 delay(150);
}
///////////////////////////////////////
void date()
{
void jan();
void feb();
void march();
void april();
void may();
void june();
void july();
void august();
void sept();
void oct();
void nov();
void dec();
char blah[]="PROCESSING....";
textcolor(3);
clrscr();
display();
cout<<"                 WE WILL NOW CHOOSE YOUR PREFFERED MONTH OF TRAVEL.";
delay(500);gotoxy(35,6);
cout<<"1)January";
delay(500);gotoxy(35,7);
cout<<"2)Februrary";
delay(500);gotoxy(35,8);
cout<<"3)March";
delay(500);gotoxy(35,9);
cout<<"4)April";
delay(500);gotoxy(35,10);
cout<<"5)May";
delay(500);gotoxy(35,11);
cout<<"6)June";
delay(500);gotoxy(35,12);
cout<<"7)July";
delay(500);gotoxy(35,13);
cout<<"8)August";
delay(500);gotoxy(35,14);
cout<<"9)September";
delay(500);gotoxy(35,15);
cout<<"10)October";
delay(500);gotoxy(35,16);
cout<<"11)November";
delay(500);gotoxy(35,17);
cout<<"12)December";
loop:
delay(500);gotoxy(30,19);
cout<<"Your option:";
cin>>a;

gotoxy(30,21);
for(int i=0;i<strlen(blah);i++)
 {
  cout<<blah[i];delay(150);
 }
delay(200);

switch(a)
 {
  case 1:jan();break;
  case 2:feb();break;
  case 3:march();break;
  case 4:april();break;
  case 5:may();break;
  case 6:june();break;
  case 7:july();break;
  case 8:august();break;
  case 9:sept();break;
  case 10:oct();break;
  case 11:nov();break;
  case 12:dec();break;
  default: cout<<"\n!!** ERROR ^^##";goto loop;
 }
food();
getch();
}
//DATE FUNCTIONS
//----------------------------------
void jan()
{textcolor(BLUE);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ JANUARY ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][7]={0,1,2,3,4,5,6,7,
		8,9,10,11,12,13,14,
		15,16,17,18,19,20,21,
		22,23,24,25,26,27,28,
		29,30,31,0,0,0};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=31))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"JANUARY "<<b;
  gout.close();
}
//----------------------------------
void feb()
{textcolor(GREEN);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ FEBRUARY ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][7]={0,0,0,0,1,2,3,4,
		 5,6,7,8,9,10,11,
		 12,13,14,15,16,17,18,
		 19,20,21,22,23,24,25,
		 26,27,28,0,0,0};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=28))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"FEBRUARY "<<b;
  gout.close();
}
//----------------------------------
void march()
{textcolor(12);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ MARCH ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][7]={0,0,0,0,1,2,3,4,
		 5,6,7,8,9,10,11,
		 12,13,14,15,16,17,18,
		 19,20,21,22,23,24,25,
		 26,27,28,29,30,31};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=31))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"MARCH "<<b;
  gout.close();
}
//----------------------------------
void april()
{textcolor(6);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ APRIL ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[6][7]={1,2,3,4,5,6,7,8,
		 9,10,11,12,13,14,15,
		 16,17,18,19,20,21,22,
		 23,24,25,26,27,28,29,
		 30,0,0,0,0,0};

 for(int i=0;i<6;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=30))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"APRIL "<<b;
  gout.close();
}
//----------------------------------
void may()
{textcolor(11);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ MAY ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][7]={0,0,1,2,3,4,5,6,7,
		8,9,10,11,12,13,14,
		15,16,17,18,19,20,21,
		22,23,24,25,26,27,28,
		29,30,31,0,0};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=31))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"MAY "<<b;
  gout.close();
}
//----------------------------------
void june()
{textcolor(14);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ JUNE ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][7]={0,0,0,0,0,1,2,3,4,5,6,7,
		8,9,10,11,12,13,14,
		15,16,17,18,19,20,21,
		22,23,24,25,26,27,28,
		29,30};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=30))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"JUNE "<<b;
  gout.close();
}
//----------------------------------
void july()
{textcolor(1);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ JULY ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[6][7]={1,2,3,4,5,6,7,8,
		9,10,11,12,13,14,15,
		16,17,18,19,20,21,22,
		23,24,25,26,27,28,29,
		30,31,0,0,0,0};

 for(int i=0;i<6;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=31))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"JULY "<<b;
  gout.close();
}
//----------------------------------
void august()
{textcolor(3);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ AUGUST ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][7]={0,0,0,1,2,3,4,5,
		6,7,8,9,10,11,12,
		13,14,15,16,17,18,19,
		20,21,22,23,24,25,26,
		27,28,29,30,31,0};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=31))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"AUGUST "<<b;
  gout.close();
}
//----------------------------------
void sept()
{textcolor(1);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ SEPTEMBER ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][8]={0,0,0,0,0,0,1,2,
		3,4,5,6,7,8,9,
		10,11,12,13,14,15,16,
		17,18,19,20,21,22,23,
		24,25,26,27,28,29,30};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=30))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"SEPTEMBER "<<b;
  gout.close();
}
//----------------------------------
void oct()
{textcolor(5);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ OCTOBER ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][7]={0,1,2,3,4,5,6,7,
		8,9,10,11,12,13,14,
		15,16,17,18,19,20,21,
		22,23,24,25,26,27,28,
		29,30,31,0,0,0};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=31))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"OCTOBER "<<b;
  gout.close();
}
//----------------------------------
void nov()
{textcolor(8);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ NOVEMBER ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[5][7]={0,0,0,0,1,2,3,4,
		5,6,7,8,9,10,11,
		12,13,14,15,16,17,18,
		19,20,21,22,23,24,25,
		26,27,28,29,30,0};

 for(int i=0;i<5;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=30))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"NOVEMBER "<<b;
  gout.close();
}
//----------------------------------
void dec()
{textcolor(CYAN);
 clrscr();
 display();
 cout<<endl;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ DECEMBER ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
 cout<<"********************************************************************************";
 cout<<"                SUN     MON     TUE     WED     THU     FRI     SAT";

 int date[6][7]={0,0,0,0,0,0,1,2,
		3,4,5,6,7,8,9,
		10,11,12,13,14,15,16,
		17,18,19,20,21,22,23,
		24,25,26,27,28,29,30,
		31,0,0,0,0};

 for(int i=0;i<6;i++)
 {cout<<endl<<endl<<"\t\t ";
  for(int j=0;j<7;j++)
   cout<<date[i][j]<<"\t";
 }
 int x=20;
  ofstream gout("date.txt",ios::out);
  loop:
  gotoxy(35,++x);
  cout<<"Your Option:";
  cin>>b;
  if(!(b>=1 && b<=31))
  {cout<<"!! ** ERROR $$ ## >>>\n";goto loop;}
  gout<<"DECEMBER "<<b;
  gout.close();
}
///////////////////////////////////////
void admin()
{
 clrscr();
 display();
 char un[15],pass[15];
 gotoxy(35,10);
 cout<<"Username:";
 gets(un);
 if(!(strcmp(un,"mario")==0))
 {
  cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";
  delay(400);
  cout<<"Going back!";
  delay(400);
  wel();
 }

 cout<<endl;
 gotoxy(35,12);
 cout<<"Password:";
 int i=0;
 while(i<5)
 {
  pass[i]=getch();
  cout<<"*";
  ++i;
 }

 if(!(strcmp(pass,"luigi")==0))
 {
  cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";
  delay(250);
  cout<<"Going back!";
  delay(250);
  wel();
 }

gotoxy(35,14);
cout<<"LOGIN SUCCESSFUL! \nPress ENTER to continue...";
getch();
clrscr();
display();
cout<<"\nWELCOME ADMIN!";
loop2:
cout<<"\nChoose an option:- \n1)Customer account and extras \n2)Profit \n3)View trips booked \n4)Log out ";
cin>>a;
switch(a)
{
 case 1:adminfun1();break;
 case 2:adminfun2();break;
 case 3:break;
 case 4:wel();break;
 default:cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";goto loop2;
}
getch();
}
///////////////////////////////////////
void adminfun1()
{
clrscr();
display();
char ch[100];
cout<<"\nAll customers using OBEROI TRAVELS are as follows:-";
ifstream gin("customer.txt",ios::in);
while(!gin.eof())
{
 gin.getline(ch,80,'\n');
 cout<<endl<<ch;
}

getch();
cout<<"Done";
gin.close();
delay(100);
return;
}
///////////////////////////////////////
void adminfun2()
{
textcolor(7);
clrscr();
display();
long x;
ifstream gin("profit.txt",ios::in);
cout<<"\nTotal funds received:";
gin>>x;
cout<<x;
cout<<"\nTotal profit is 25% of total funds received. Profit:";
long y=x/4;
cout<<y;
cout<<"\n\nPress any key to return...";
getch();
gin.close();
return;
}
///////////////////////////////////////
void aboutus()
{textcolor(6);
clrscr();
display();
cout<<"\nAT OBEROI TRAVELS WE BOOK TRIPS FOR SCHOOLS, COLLEGES AND OFFICES. ";
delay(100);
cout<<"\nAT OBEROI TRAVELS WE ENSURE THAT OUR CUSTOMERS GET A COMFORTABLE AND UNIQUE STAY \nWE COVER ALL MAJOR CITIES OF INDIA AND ARE WELL AWARE OF THE LIMITATIONS IN EACH \nWE ALSO HAVE THE CHEAPEST TRAVEL PACKAGES THAN MANY OTHER WEBSITES LIKE YATRA \nAND TRIPADVISOR.";
delay(100);
cout<<endl<<endl;
cout<<"\nTHIS WEBSITE WAS NAMED FROM MR.SARANSH OBEROI AND CO-CREATED BY RISHAB MAHESHWARI AND SARANSH OBEROI.";
delay(100);
cout<<endl;
cout<<"\n\nPress any key to go back";
getch();
wel();
}
///////////////////////////////////////
void travel()
{textcolor(4);
clrscr();
display();
loop:
cout<<"\nNow we are going to decide your trip!!"<<endl;
cout<<" These are your options:-"<<endl<<endl;
cout<<" 1. God's Own country: Enjoy the beautiful land of Kerela (5 Days / 4 Nights). \nPrice per person: Rs.5999"<<endl<<endl;
cout<<" 2. Enjoy the Sunset: Tan Your skin at the beautiful beaches of Goa (3 Days / 2 Nights) \nPrice per person: Rs.4999"<<endl<<endl;
cout<<" 3. The Westcoast Ride: Enjoy the bumpy ride beyond the ghats (8 Days / 7 Nights) \nPrice per person: Rs.7999"<<endl<<endl;
cout<<" 4. The Hillside Fun: Prepare your coats and jackets to enjoy the cold (5 Days / 4 Nights) \nPrice per person: Rs.5999"<<endl<<endl;
cout<<" 5. The Golden Triangle: Enjoy the 3 best cities of India in one go (8 Days/ 7 Nights) \nPrice per person: Rs.7999"<<endl<<endl;
cout<<" Your Option:";
cin>>a;
switch(a)
{
 case 1:kerala();break;
 case 2:ets();break;
 case 3:wcr();break;
 case 4:thf();break;
 case 5:gold();break;
 default: cout<<"\nPlease enter one of these options!"; goto loop;
}
getch();
}
//////////////////////////////////////
//-------------------------------------
//the golden triangle function
void gold()
{textcolor(6);
clrscr();
display();
char a[100];int i=0;

ifstream gin("gt.txt",ios::in);

 while(!gin.eof())
 {
  gin.getline(a,80,'\n');
  cout<<a;
  cout<<endl;
  i++;
  if(i%20==0)
  getch();
 }
 gin.close();
 getch();

ofstream gout("package.txt",ios::out|ios::binary);

loop3:
cout<<"\nAre you interested in this package? (Y/N)";
cin>>c;

if(c=='Y'|| c=='y')
{
 greatchoice();
 cout<<"\nWe have stored our choice!";
 cout<<"\nPlease any key to continue...";
 getch();
 gout<<"The Golden Triangle";
 gout.close();
 guide();
}

if(c=='N'|| c=='n')
travel();

else
{
 cout<<"\nPlease enter suitable option!";
 goto loop3;
}
getch();
}
//-------------------------------
//enjoy the sunset pack
void ets()
{textcolor(4);
clrscr();
display();
char a[100];int i=0;
ifstream gin("ets.txt",ios::in);
 while(!gin.eof())
 {
  gin.getline(a,80,'\n');
  cout<<a;
  cout<<endl;
  i++;
  if(i%20==0)
 {getch(); }
 }
 gin.close();
 getch();

ofstream gout("package.txt",ios::out|ios::binary);

loop3:
cout<<"\nAre you interested in this package? (Y/N)";
cin>>c;

if(c=='Y'|| c=='y')
{
 greatchoice();
  cout<<"\nWe have stored our choice!";
 cout<<"\nPlease any key to continue...";
 getch();
 gout<<"Enjoy the sunset";gout.close();
 guide();
}

else if(c=='N'|| c=='n')
travel();

else
{
 cout<<"Please enter suitable option!";
 goto loop3;
}
getch();
}
//----------------------------------
//the hillside fun function
void thf()
{textcolor(1);
clrscr();
display();
char a[100];int i=0;
ifstream gin("thf.txt",ios::in);
 while(!gin.eof())
 {
  gin.getline(a,80,'\n');
  cout<<a;
  cout<<endl;
  i++;
  if(i%20==0)
  getch();
 }
 gin.close();
 getch();

ofstream gout("package.txt",ios::out|ios::binary);
loop3:
cout<<"\nAre you interested in this package? (Y/N)";
cin>>c;
if(c=='Y'|| c=='y')
{
 greatchoice();
 cout<<"\nWe have stored our choice!";
 cout<<"\nPlease any key to continue...";
 getch();
 gout<<"The Hillside Fun";
 gout.close();
 guide();
}

else if(c=='N'|| c=='n')
travel();

else
{
 cout<<"Please enter suitable option!";
 goto loop3;
}
getch();
}
//---------------------------------
//the west coast ride function
void wcr()
{textcolor(11);
clrscr();
display();
char a[100],c;int i=0;
ifstream gin("wcr.txt",ios::in);
 while(!gin.eof())
 {
  gin.getline(a,80,'\n');
  cout<<a;
  cout<<endl;
  i++;
  if(i%20==0)
  getch();
 }
 gin.close();
 getch();

ofstream gout("package.txt",ios::out|ios::binary);
loop3:
cout<<"\nAre you interested in this package? (Y/N)";
cin>>c;
if(c=='Y'|| c=='y')
{
 greatchoice();
 cout<<"\nWe have stored our choice!";
 cout<<"\nPlease any key to continue...";
 getch();
 gout<<"The Westcoast Ride";
 gout.close();
 guide();
}

else if(c=='N'|| c=='n')
travel();

else
{
 cout<<"Please enter suitable option!";
 goto loop3;
}
getch();
}
//-------------------------------------
//god's own country
void kerala()
{textcolor(3);
clrscr();
display();
char a[100],c;int i=0;
ifstream gin("kerala.txt",ios::in);
 while(!gin.eof())
 {
  gin.getline(a,80,'\n');
  cout<<a;
  cout<<endl;
  i++;
  if(i%20==0)
  getch();
 }
 gin.close();
 getch();

ofstream gout("package.txt",ios::out|ios::binary);
loop3:
cout<<"\nAre you interested in this package? (Y/N)";
cin>>c;
if(c=='Y'|| c=='y')
{
 greatchoice();
 cout<<"\nWe have stored our choice!";
 cout<<"\nPlease any key to continue...";
 getch();
 gout<<"God's own country";
 gout.close();
 guide();
}

else if(c=='N'|| c=='n')
travel();

else
{
 cout<<"Please enter suitable option!";
 goto loop3;
}
getch();
}
//------------------------------------
//all packs done!
///////////////////////////////////////
void main2()     //Customer Login
{textcolor(6);
loop:
clrscr();closegraph();
display();
cout<<"\nPlease enter one of the options:\n";
cout<<"1)New Customer \n2)Existing Customer \n3)Go back\n";
cin>>a;
switch(a)
{
 case 1:newcustomer();
 case 2:login();
 case 3:wel();
}
getch();
}
///////////////////////////////////////
void newcustomer()
{textcolor(3);
clrscr();
display();
ofstream gout("customer.txt",ios::out|ios::binary);
customer.accept();
gout.write((char *)&customer,sizeof(customer));
gout.close();
cout<<"\nGoing back to home page...";
delay(250);
main2();
}
///////////////////////////////////////
void existingcustomer()
{textcolor(10);
clrscr();
display();
cout<<"\nPlease enter one of the options:-";
cout<<"\n1)Enter details \n2)Manage account \n3)Log out";
cin>>a;
switch(a)
{
 case 1:details();
 case 2:mod();
 case 3:wel();
}
getch();
//exit(0);
}
///////////////////////////////////////
void mod()
{textcolor(10);
clrscr();
display();
cout<<"\n1)Display Account Details \n2)Modify account \n3)Delete account \n";
cin>>a;
switch(a)
{
 case 1:displayaccount();break;
 case 2:modifyaccount();break;
 case 3:deleteaccount();break;
}
cout<<"\nTaking you back to the home page....";
delay(2500);
wel();
getch();
}
///////////////////////////////////////
void login()
{textcolor(14);
clrscr();
display();
char login[20],password[20];
loop:
cout<<"Please enter the following:";
cout<<"\nLogin:";
gets(login);
cout<<"\nPassword:";
for(int z=0; z< customer.pass_length() ;z++)
 {
 password[z]=getch();
 cout<<"*";
 }

 password[z]='\0';
if(strcmp(login,customer.ret_name())!=0 || strcmp(password,customer.ret_password())!=0)
{
 cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>> \nLogin or password incorrect!";
 loop2:
 cout<<" \nPlease select one of the option: \n1)Try again \n2)Go back to home page";
 cin>>a;
 switch(a)
 {
  case 1:goto loop;
  case 2:main2();break;
  default: cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";goto loop2;
 }
}
else
{
 cout<<"\nProcessing...";
 delay(250);
 cout<<"\nSuccessful!";
 delay(250);
 existingcustomer();
}
}
///////////////////////////////////////
void details()
{textcolor(11);
clrscr();
display();
cout<<"\nWe provide trips for 3 variety of groups: Schools, College and Office. ";
cout<<"\nThe range of acceptable people are between 20 to 150 ";
cout<<endl;
loop3:
cout<<"\nPlease enter one of the options:";
cout<<"\n1)School \n2)College \n3)Office ";
cin>>a;
switch(a)
{
 case 1:school();break;
 case 2:college();break;
 case 3:office();break;
 default:cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>"; goto loop3;
}
getch();
}
////////////////////////////////
void school()
{textcolor(2);
clrscr();
display();
char school[30];
int no;
cout<<"\nPlease enter each of the following details:";
ofstream gout("school.txt",ios::out);
ofstream gout2("number.txt",ios::out);
cout<<"\nName of the school: ";
gets(school);
gout<<school;
gout.close();
repeat:
cout<<"\nNumber of students:";
cin>>no;
if(!(no>=20 && no<=150))
{
 cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";
 delay(100);
 cout<<"Please enter a number within the range!";
 delay(100);
 goto repeat;
}
gout2<<no;
gout2.close();

cout<<"Storing you details...";
delay(200);
cout<<"Updated! \nGoing back...";
delay(200);
travel();
}
///////////////////////////////////////
void college()
{textcolor(6);
clrscr();
display();
char college[30];
int no;
cout<<"\nPlease enter each of the following details:";
ofstream gout("college.txt",ios::out);
ofstream gout2("number.txt",ios::out);
cout<<"\nName of the college: ";
gets(college);
gout<<college;
repeat:
cout<<"\nNumber of students travelling: ";
cin>>no;
if(!(no>=20 && no<=150))
{
 cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";
 delay(100);
 cout<<"Please enter a number within the range!";
 delay(100);
 goto repeat;
}
gout2<<no;

cout<<"Storing you details...";
delay(200);
cout<<"Updated! \nGoing back...";
delay(200);
gout.close();
gout2.close();
travel();
}
///////////////////////////////////////
void office()
{textcolor(9);
clrscr();
display();
char office[40];
int no;
cout<<"\nPlease enter each of the following details:";
ofstream gout("office.txt",ios::out);
ofstream gout2("number.txt",ios::out);
cout<<"\nName of organization:";
gets(office);
gout<<office;
repeat:
cout<<"\nNumber of employees travelling:";
cin>>no;
if(!(no>=20 && no<=150))
{
 cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";
 delay(100);
 cout<<"Please enter a number within the range!";
 delay(100);
 goto repeat;
}
gout2<<no;
cout<<"Storing you details...";
delay(200);
cout<<"Updated! \nGoing back...";
delay(200);
gout.close();
gout2.close();
travel();
}
///////////////////////////////////////
void guide()
{textcolor(5);
clrscr();
char a,b,x;
int h,r;
display();
ofstream gout("guide.txt",ios::out);
char c[]="Deciding a suitable Guide....";
loop:
cout<<"\nDo you need a tour guide for your trip?(Y/N)"<<endl;cin>>a;

if(a=='Y' || a=='y')
{
cout<<endl<<"\nWhat is your preferable language for the tour guide?"<<endl;
cout<<"English or Hindi(E/H)"<<endl;
cin>>b;

 if(b=='e'||b=='E')
 {
  for(int i=0;c[i]!='\0';i++)
  {
   cout<<c[i];delay(100);}
   r=random(3);
   cout<<endl<<"\nHere is Your Guide";
   switch(r)
   {
    case 0: cout<<endl<<"NAME: Mr. Shashwath Kumar\nYears of Experience:5 \nPh:987*******"<<endl;
	    gout<<"NAME: Mr. Shashwath Kumar Ph:987*******";
	    break;
    case 1: cout<<endl<<"NAME: Mr. Goutham Swaminathan\nYears of Experience:7\nPh: 934*******"<<endl;
	    gout<<"NAME: Mr.Goutham Swaminathan Ph:934*******";
	    break;
    case 2: cout<<endl<<"NAME: Ms. Meena Ruba\nYears of Experience:4\nPh: 954*******"<<endl;
	    gout<<"NAME: Ms. Meena Ruba Ph:954*******";
	    break;
   }
  cout<<"\nPress any key to continue...";
  getch();
  }
 }

 if(b=='h'||b=='H')
 {
  for(int i=0;c[i]!='\0';i++)
  {
  cout<<c[i];delay(100);}
   h=random(3);
   cout<<endl<<"\nHere is Your Guide";
   switch(h)
   {
    case 0: cout<<"\nNAME: Mr. Shikhar Chawali\nYears of Experience:8\nPh: 987*******"<<endl;
	    gout<<"NAME: Mr.Shikhar Chawali Ph:987*******";
	    break;
    case 1: cout<<"\nNAME: Mr. Rishikesh Bose\nYears of Experience:3\nPh: 934*******"<<endl;
	    gout<<"NAME: Ms. Rishikesh Bose Ph:934*******";
	    break;
    case 2: cout<<"\nNAME: Ms. Shruti Aggarwal\nYears of Experience:6\nPh: 954*******"<<endl;
	    gout<<"NAME: Ms. Shruti Aggarwal Ph:954*******";
	    break;
   }
   cout<<"\nPress any key to continue...";
   getch();
  }

 if(a=='n'||a=='N')
 {
  cout<<"\nAre you sure?(Y/N) [its free of cost :p ]";
  cin>>x;

  if(x=='n'||x=='N')
  goto loop;

  else if(x=='y'||x=='Y')
  cout<<"\nProcessing...";
 }

/*else
{
 cout<<"\n\t\t\t\t!! ** ERROR $$ ##>>>";
 delay(100);
 cout<<"\nPlease enter correct option!";
 delay(100);
 goto loop;
} */

gout.close();
date();
}
//////////////////////////////////
void summary()
{textcolor(4);
clrscr();
display();
cout<<endl;
char trip[300],date[300],guide[300],food[300];
int number;
cout<<"WE WILL NOW DISPLAY YOUR OVERALL CHOICES AND TOTAL COST:";
ifstream gin("package.txt",ios::in);
ifstream gin2("guide.txt",ios::in);
ifstream gin3("date.txt",ios::in);
ifstream gin4("food.txt",ios::in);
ifstream gin5("number.txt",ios::in);

gin.getline(trip,80,'\n');
cout<<"\nTRIP:";puts(trip);

gin3.getline(date,80,'\n');
cout<<"\nDATE:";puts(date);

gin4.getline(food,80,'\n');
cout<<"\nFOOD:";puts(food);

gin2.getline(guide,80,'\n');
cout<<"\nGUIDE:";puts(guide);

gin5>>number;
cout<<"\nPEOPLE TRAVELLING:";cout<<number;

cout<<"\n\nPress any key to continue to pay the bill...";
getch();

gin.close();
gin2.close();
gin3.close();
gin4.close();
gin5.close();

bill();
getch();
}
//////////////////////
void bill()
{textcolor(10);
clrscr();
display();
char trip[300],date[300],guide[300],food[300];
int foodbill=2000,guidebill=2000;
long bill1=0,total=0;
double number=0;

cout<<"\nWe will now display your total bill for your trip:";

ifstream gin("package.txt",ios::in);
ofstream gout("bill.txt",ios::out);
fstream gout2("profit.txt",ios::out|ios::in);
ifstream gin4("food.txt",ios::in);
ifstream gin5("number.txt",ios::in);

gin5>>number;

gin.getline(trip,80,'\n');
gin4.getline(food,80,'\n');

if(strcmp(trip,"Enjoy the sunset")==0)
bill1=number*4999;
if(strcmp(trip,"The Westcoast Ride")==0)
bill1=number*7999;
if(strcmp(trip,"God's own country")==0)
bill1=number*5999;
if(strcmp(trip,"The Hillside Fun")==0)
bill1=number*5999;
if(strcmp(trip,"The Golden Traingle")==0)
bill1=number*7999;

cout<<"\nTrip Selected:";puts(trip);
cout<<"\nPrice according to trip: Rs.";cout<<bill1;

cout<<"\nFood:";puts(food);
cout<<"\nPrice according to food: Rs.";cout<<foodbill;

 total=foodbill+bill1;
 cout<<"\nYour total bill is:";cout<<total;
 cout<<"\nPress any key to continue...";
 getch();

gout<<total;
gout2>>x;
gout2<<x+total;

gout.close();
gout2.close();
gin.close();
gin4.close();
gin5.close();

paymadi();
}
///////////////////
void paymadi()
{textcolor(4);
clrscr();
display();
cout<<"\nYou will now pay the bill. Please select one of the options:";
start:
cout<<"\n1)Credit card \n2)Cash \n3)Cheque ";
cin>>a;

switch(a)
{
 case 1:creditcard();break;
 case 2:cash();break;
 case 3:cheque();break;
 default:cout<<"\nPlease enter correct option!";goto start;
}
getch();
}
//////////////////////
void creditcard()
{textcolor(12);
clrscr();
display();
ifstream gin("bill.txt",ios::in);
int bill,cvv;
char name[30],number[20];
gin>>bill;
cout<<"\nEnter credit card details:";
cout<<"\nName on card:";
gets(name);
card:
cout<<"\nCard number:";
gets(number);
if(strlen(number)!=16)
{
 cout<<"\nPlease enter correct card number!";
 goto card;
}
cvv:
cout<<"\nCVV:";
cin>>cvv;
if(!(cvv>=0 && cvv<=999))
{
 cout<<"\nPlease enter valid cvv!";
 goto cvv;
}

cout<<"\nYour total bill is:"<<bill;
cout<<"\nTransaction in progress...";
delay(400);
cout<<"\nSuccessful!";
cout<<"\nYour tickets are now successfully booked! \nFor any changes please contact us.";
cout<<"\nThank you for using OBEROI TRAVELS! \nPress any key to continue...";
gin.close();
getch();
wel();
}
//////////////////////
void cash()
{textcolor(10);
clrscr();
display();
int bill=0;
ifstream gin("bill.txt",ios::in);
gin>>bill;
cout<<"\nYour total bill is:"<<bill;
cout<<"\nYou will reveive mails from us regarding your payment. \nTill then your tickets will be saved and you will receive confirmation once mayment is done.";
cout<<"\nFurther instruction in mail.";
cout<<"\nThank you for using OBEROI TRAVELS! Press any key to continue...";
gin.close();
getch();
wel();
}
//////////////////////
void cheque()
{textcolor(1);
clrscr();
display();
int bill=0;
ifstream gin("bill.txt",ios::in);
gin>>bill;
cout<<"\nYour total bill is:"<<bill;
cout<<"\nCheque instructions:-";
cout<<"\n1)In the name of OBEROI TRAVELS.PVT LTD \n2)Signature and amount is compulsory";
cout<<"\nYou must mail this cheque to us in the following adddress:- \nOBEROI TRAVELS \nNear Mental Hospital Road \nMUMBAI-34";
cout<<"\nIf the above instructions aren't followed properly, it may result in delay or cancellation of your package";
cout<<"\nYou will receive further instructions in mail";
cout<<"\nThank you for using OBEROI TRAVELS! Press any key to continue...";
gin.close();
getch();
wel();
}
//////////////////////
void main()
{
int a;
int gd = DETECT, gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
wel();
getch();
}

void wel()
{clrscr();
int a;
int gd = DETECT, gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");



      settextstyle(5, HORIZ_DIR, 4);
      setcolor(GREEN);
      outtextxy(170,10, " OBEROI TRAVELS");
      setfillstyle(SOLID_FILL,RED);
      bar(0,60,639,60);
      settextstyle(1, HORIZ_DIR, 3);
      setcolor(YELLOW);
      outtextxy(175,80, "When You Need A Break!!!");
      setfillstyle(LTSLASH_FILL,BLUE);
      bar(165,110,470,110);
      setcolor(CYAN);
      line(0,10,639,10);
      line(639,10,639,450);
      line(639,450,0,450);
      line(0,450,0,10);
      setcolor(10);
      outtextxy(20,140, "Welcome to Oberoi Travels");
      settextstyle(4, HORIZ_DIR, 3);
      setcolor(9);
      outtextxy(20,185, "We provide you with best offers and prices for your travel!!");
      settextstyle(5, HORIZ_DIR, 2);
      setcolor(6);
      outtextxy(20,215, "Please select one of the options below");
      outtextxy(20,240, "1. Login");
      outtextxy(20,260, "2. Admin");
      outtextxy(20,280, "3. About us");
      outtextxy(20,300, "4. exit");

   getch();
gotoxy(20,320);
cin>>a;
switch(a)
{
case 1:main2();break;
case 2:admin();break;
case 3:aboutus();break;
case 4:exit(0);break;
}

closegraph();


}