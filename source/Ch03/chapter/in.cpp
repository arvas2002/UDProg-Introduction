#include "std_lib_facilities.h"

int main ()
{
	cout <<"Give me your sex(m/f) ";
	char sex;
	cin>>sex;
	if (sex=='m')
		cout<<"You'r sex is male\n";
	else if (sex=='f')
		cout<< "You'r sex is female\n";
	else cout << "Wrong input\n";
	string first_name, last_name;
	cout<<"Give me your first name  and last name and your age\n";
	cin>>first_name>>last_name;

	int age;
	cin>>age;


	if (sex=='f')
	cout<<"The user name is: "<<first_name<< ' '<< last_name<< " and her age is: "<<age<<endl;
	if (sex=='m')
	cout<<"The user name is: "<<first_name<< ' '<< last_name<< " and his age is: "<<age<<endl;

	if (age<18||age<110) error("You are offending the age restriction");


	
	return 0;


}