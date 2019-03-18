#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float GetMoney(int year,int hour){
	int single;
	float money;
	if(year<5){
		single=30;
	}
	else{
		single=50;
	}
	if(hour<=40){
		money=hour*single;
	}
	else{
		money=40*single+(hour-40)*(1.5)*single;
	}
	return money;
}
int main(int argc, char** argv) {
	int year,hour;
	float money;
	cin>>year>>hour;
	money=GetMoney(year,hour);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<money<<endl; 
	return 0;
}
