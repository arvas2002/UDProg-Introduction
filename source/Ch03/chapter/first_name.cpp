#include "std_lib_facilities.h"

int main()
{
	string first_name;

	cout<<"Hello, "<<first_name<<"\n";
	cin>>first_name;
	cout<<"Enter the name of the person you want to write: ";
	string oth;
	cin>>oth;
	cout<<"How are you?\nI miss you my friend!\n";

	cout<<"By the way did you see "<<oth<<"?\n";

	char f_sex=0;
	cout<<"What is this person sex?(m/f):";

	cin>>f_sex;
	if (f_sex=='f')
		cout<<"If you see " << oth << " please ask her to call me.\n";
	if(f_sex=='m')
		cout<<"If you see "<<oth<<" please ask him to call me.\n";

	cout << "How old are you?: ";
	int age;
	cin>>age;

	if(age<=0||age>110) simple_error("You're kidding!");
		cout<<"I hear you just had a birthday and you are "<<age<< " years old.\n";
		if (age<12)
			cout <<"Next year you will be "<<age+1<<".\n";
		else if(age==17)
			cout<<"Next year you will be able to vote.\n";
		else if (age>70)
			cout << "I hope you are enjoying retirement.\n";


	cout<<"Yours sincerelly \t \t Árva Sándor Máté\n";


	return 0;
;
}