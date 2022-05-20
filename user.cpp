IT21346286_AMARATUNGA R.Y.S._OOC_ASSIGNMENT02.

/*IT21346286_AMARATUNGA R.Y.S._OOCassignment02_Library Management System.*/
/*IT21346286_AMARATUNGA R.Y.S._Code for class User.*/
#include <iostream>
#include <cstring>
using namespace std;

class User
{
	protected: 
		char name[20];
		char id[10];
	
	public:
		void assignId(char *usId);
		void displayId();
		void assignName(char *usName);
		void displayUser();	
};

void User::assignName(char *usName){
	strcpy(name, usName);
}

void User::displayUser(){
	cout<<"User Name : "<<name<<endl;
	
}

void User::assignId(char *usId){
	strcpy(id, usId);
}

void User::displayId(){
	cout<<"User id : "<<id<<endl;
}

class Member : public User
{
	protected:
		int age;
		char address[50];
		char email[20];
		int contactNo;
	public:
		void assignAge(int a);
		void displayAge();
		void assignAddress(char *mAddress);
		void displayAddress();
		void assignEmail(char *mEmail);
		void displayEmail();
		void assignContactNo(int no);
		void displayContactNo();
};
void Member::assignAge(int a){
	age = a;
}

void Member::displayAge(){
	cout<<"Age : "<<age<<endl;
}

void Member::assignAddress(char *mAddress){
	strcpy(address, mAddress);
}

void Member::displayAddress(){
	cout<<"Address : "<<address<<endl;
}

void Member::assignEmail(char *mEmail){
	strcpy(email, mEmail);
}

void Member::displayEmail(){
	cout<<"Email address : "<<email<<endl;
}

void Member::assignContactNo(int no){
	contactNo = no;
}

void Member::displayContactNo(){
	cout<<"Contact no : "<<contactNo<<endl;
}


class Staff : public User
{
	protected:
		char job[20];
	public:
		void assignJob(char *sJob);
		void displayJob();
};

void Staff::assignJob(char *sJob){
	strcpy(job, sJob);
}

void Staff::displayJob(){
	cout<<"Library position : "<<job<<endl;
}

int main(){
	Member m1, m2;
	
	m1.assignName("Kamal Gunaratne");
	m1.assignId("LMS1000234");
	m1.assignAddress("No:72, Galle Road, Colombo");
	m1.assignAge(12);
	m1.assignEmail("kamal65@gmail.com");
	m1.assignContactNo(0701234567);
	m1.displayUser();
	m1.displayId();
	m1.displayAddress();
	m1.displayAge();
	m1.displayEmail();
	m1.displayContactNo();
	
	Staff s1;
	s1.assignJob("Librarian");
	s1.displayJob();
	
	return 0;
}
/*IT21346286_AMARATUNGA R.Y.S._OOCassignment02_Library Management System.*/
/*IT21346286_AMARATUNGA R.Y.S._Code for class User.*/
