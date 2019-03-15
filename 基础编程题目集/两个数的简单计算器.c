#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int operating(int a,int b,string op){
	int ans;
	if(op=="+"){
		ans=a+b;
	}
	else if(op=="-"){
		ans=a-b;
	}
	else if(op=="*"){
		ans=a*b;
	}
	else if(op=="/"){
		ans=a/b;
	}
	else if(op=="%"){
		ans=a%b;
	}
	else{
		ans=NULL;
	}
	return ans;
} 

int main(int argc, char** argv) {
	int a,b,c;
	string op;
	cin>>a>>op>>b;
	c=operating(a,b,op);
	if(c==NULL){
		cout<<"ERROR"<<endl;
	}
	else{
		cout<<c<<endl;
	}
	return 0;
}
