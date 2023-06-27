#include<iostream>
#include<string>
using namespace std;
class Account{
	private:
	int accid;
	string email;
	string name;
	string password;
	public:
	//constructor that can work as "no-parameter" as well as "parameterized"
		Account(int id=0,string m="",string n="",string p=""):accid(id),email(m),name(n),password(p){
		}
		
	//member function for inputing value
	void input(){
		cout<<"\n\t\t**********\n";
		cout<<"Enter Your Id:";
	    cin>>accid;
		cin.ignore();
		
	    cout<<"Enter Your Email:";
     	getline(cin,email); 
     	
	    cout<<"Enter Your Name:";
	    getline(cin,name); 
	    
	   cout<<"Enter Your Password:";
	   getline(cin,password); 
	   
	   cout<<"\n\t\t**********\n";
	   
	}
	//overload stream insertion"<<" operator 
	friend ostream& operator <<(ostream& out,const Account& a1);
};
//Defining overload stream insertion"<<" operator 
ostream& operator <<(ostream& out,const Account& a1){
	out<<"\nYour ID = "<<a1.accid<<endl;
	out<<"Your EMAIL = "<<a1.email<<endl;
	out<<"Your NAME = "<<a1.name<<endl;
	out<<"Your PASSWORD = "<<a1.password<<endl;
	return out;
	
}
int main(){
	  Account obj; //creating object
	  obj.input();
	  cout<<obj;	    
		return 0;
	}
