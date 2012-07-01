	#include<iostream>
	#include<string>
    #include<module.h>

	using namespace std;

	int main()
	{
	    module test (5);
	    //module *testies;
	    module *testies=new module(5);
	    //testies->Gettest();
	    cout<<test.Gettest();
		string s;
		cout << "Please enter your first name followed by a newline\n";
		cin >> s;
		cout << "Hello, " << s << '\n';
		//gjor ting! wooooy
		return 0; // this return statement isn't necessary
	}
