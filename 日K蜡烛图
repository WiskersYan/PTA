#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string GetStr(double Open,double High,double Low,double Close) {
	string str,a,b,c;
	if(Close<Open) {
		a="BW-Solid";
	} else if(Close>Open) {
		a="R-Hollow";
	} else {
		a="R-Cross";
	}
	if(Low<Open&&Low<Close) {
		b="Lower Shadow";
	} else {
		b.erase();
	}
	if(High>Open&&High>Close) {
		c="Upper Shadow";
	} else {
		c.erase();
	}
	if(b.empty()&&c.empty()){
		str=a;
	}
	else if(b.empty()&&!c.empty()){
		str=a+" with "+c;
	}
	else if(!b.empty()&&c.empty()){
		str=a+" with "+b;
	}
	else if(!b.empty()&&!c.empty()){
		str=a+" with "+b+" and "+c;
	}
	return str;
}
int main(int argc, char** argv) {
	double Open,High,Low,Close;
	string str;
	cin>>Open>>High>>Low>>Close;
	str=GetStr(Open,High,Low,Close);
	cout<<str<<endl;
	return 0;
}
