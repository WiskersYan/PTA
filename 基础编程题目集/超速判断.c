#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int S;
	string V;
	cin>>S;
	if(S>60){
		V="Speeding";
	}
	else{
		V="OK";
	}
	cout<<"Speed: "<<S<<" - "<<V<<endl;
	return 0;
}
