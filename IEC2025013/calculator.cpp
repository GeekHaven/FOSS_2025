#include <iostream>
using namespace std;

int main(){

int sign;
cout << "Tell us which command you want to perform\n 1) 1 for addition\n 2) 2 for subtraction\n 3) 3 for division\n 4) 4 for multiplication" <<endl;
cin >> sign;

int a,b;
cout << "Enter your 2 numbers which are involved: ";
cin >> a>>b;

if(sign == 1){
	cout << a+b << endl;
}
else if(sign == 2){
	cout << a-b << endl;
}
else if(sign == 3){
	cout << a/b << endl;
}
else if( sign == 4){
	cout << a*b << endl;
}
else{
	cout << "You didn't enter a valid input"<<endl
}


}

