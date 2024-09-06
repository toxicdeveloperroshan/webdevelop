#include<iostream>
using namespace std ; 
class student {
	
	private : 
	
	string name ; 
    int rollno ; 
    string classdiv ;
    
    string DOB ; 
    string bloodgroup ;
    string contact ;
    
    public:
	
	student( string na , int roll , string classdi , string DO , string bloodgrou , string contac )
	{
		
		
		name = na ; 
		rollno = roll ; 
		classdiv  = classdi ; 
		DOB = DO ; 
		bloodgroup =  bloodgrou ; 
		contact  = contac ; 
		
	}
	
	
	student( const student & other)
	{
		
		name = other.name ; 
		rollno = other.rollno ; 
		classdiv = other.classdiv ; 
		DOB = other.DOB ; 
		bloodgroup = other.bloodgroup ; 
		contact = other.contact ; 
	}
	
	
	~student()
	{
		cout<<"Distroy the o";
	}
	
	
	inline string getname()
	{
		
		return name ;
	}
	
	static void schoolname()
	{
		
		cout<<"Havard university" ;
	}
	
	friend class Admin;
	
	
	void displayinfo()
	{
		
		cout<< "Student name is :  \n"<<name <<endl ;
		cout<<"Roll number is :  \n"<<rollno<<endl; 
		cout<<"class divison is  : \n"<<classdiv<<endl;
		cout<<"Date of birth :   \n"<<DOB<<endl;
		cout<<"Bloodgroup of student   :\n"<<bloodgroup<<endl ;
		cout<<"contact number  : "<<contact<<endl ;
		
		
	}
	
	
};


class Admin {
	
	
	public: 
	
	void update(student & student   , string new_contact)
	{
		student.contact = new_contact;
	}
	
	
	
	
		
		
	
};



int main()
{
	
	student* student1 = new student("khushi  Sing" , 22 , "a", "03-07-1997" , "B+"  , "59595");
	student1->displayinfo();
	
	student::schoolname();
	
	Admin ad ; 
	ad.update(*student1 , "6565665");
	
   student1->displayinfo();
}

