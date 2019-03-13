#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ExchangeHour(int Hour) {
	int NewHour;
	if(Hour<=12) {
		NewHour=Hour;
	} else {
		NewHour=Hour-12;
	}
	return NewHour;
}

int ExchangeMinute(int Minute) {
	int NewMinute;
	NewMinute=Minute;
	return NewMinute;
}

string GetSign(int Hour) {
	string Sign;
	if(Hour<12) {
		Sign="AM";
	} else {
		Sign="PM";
	}
	return Sign;
}

int main(int argc, char** argv) {
	int Hour,Minute;
	int NewHour,NewMinute;
	string Sign;
	scanf("%d:%d",&Hour,&Minute);
	NewHour=ExchangeHour(Hour);
	NewMinute=ExchangeMinute(Minute);
	Sign=GetSign(Hour);
	cout<<NewHour<<":"<<NewMinute<<" "<<Sign<<endl;
	return 0;
}
