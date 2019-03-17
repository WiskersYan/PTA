#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int A,B,C;
	cin>>A>>B>>C;
	if(A==B){
		cout<<"C"<<endl;
	}
	else if(A==C){
		cout<<"B"<<endl;
	}
	else if(B==C){
		cout<<"A"<<endl;
	}
	return 0;
}
