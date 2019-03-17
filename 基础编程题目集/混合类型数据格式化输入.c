#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float f1,f2;
	int i;
	string s;
	cin>>f1>>i>>s>>f2;
	cout<<s<<" "<<i<<" ";
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<f1<<" ";
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<f2<<endl;
	return 0;
}
