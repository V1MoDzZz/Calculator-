#include <iostream>
#include <string>
using namespace std;

int main(){
	
	float haha;
	float lmao;
	
	
	
	char select;
	char option;
	cout << "Calculator version 2 \n\n "<<endl;
	
	
	cout<<"do ur maths here lol : "<<endl;
	cin>> haha >> option >> lmao;
	
	
	switch(option)
	{
		case '+':
		     cout<<haha+lmao;
		     cout<<"\n";
		     system("pause");
		     break;
		
		case '-':
		     cout<<haha+lmao;
		     cout<<"\n";
		     system("pause");
		     break;
		case '*':
		     cout<<haha+lmao;
		     cout<<"\n";
		     system("pause");
		     break;	
		case '/':
		     cout<<haha+lmao;
		     cout<<"\n";
		     cout<<"\n";
		     system("pause");
		     break;
		default:
		      cout<<"bruh select a valid option. for example : 10 + 5, 10 - 5, 10 * 5, 10 / 5";
		      cout<<"\n";
		      system("pause");
		      break;

	}
	
	
		

	
	return 0;
	
}
