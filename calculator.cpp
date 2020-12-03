#include <iostream>

using namespace std;
void plus(){
    
    
       float a;
       cout << "Enter first value : "<<endl;
       cin>>a;

    
       float b;
       cout << "Enter second value : "<<endl;
        cin>>b;
        cout<<a+b;
		
}
void minus(){
    
    
    float a;
    cout << "Enter first value : "<<endl;
    cin>>a;

    
    float b;
    cout << "Enter second value : "<<endl;
    cin>>b;

    
    cout<<a-b;
}

void divide(){
    
    
    float a;
    cout << "Enter first value : "<<endl;
    cin>>a;

    
    float b;
    cout << "Enter second value : "<<endl;
    cin>>b;

    
    cout<<a/b;
}

void multiply(){
    
    
    float a;
    cout << "Enter first value : "<<endl;
    cin>>a;

    
    float b;
    cout << "Enter second value : "<<endl;
    cin>>b;

    
    cout<<a*b;
}

int main()
{
	



    cout << "Hello World!" << endl;
    
    string c;
    cout << "choose an option, options are plus / minus / divide / multiply : ";
    
    cin >> c;
    
    if (c == "plus") {
      void plus();
       plus();

    }
    else if (c == "minus") {
      void minus();
      minus();
        
    }
    
   else if (c == "multiply") {
     
     void multiply();
     multiply();
     
      } 
   else if (c == "divide") {
     
     void divide();
     divide();
     
     }
	else {
		cout << "No valid option"<<endl;
	}
    

    return 0;
}

