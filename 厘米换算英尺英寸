#include <iostream>
using namespace std;

const double p=0.3048;

int CmtoFootInch(int cm,double p,int key) {
	double foot,inch;
	foot=(double)cm/100/p;
	inch=(foot-(int)foot)*12;
	if(key==0) {
		return (int)foot;
	} else if(key==1) {
		return (int)inch;
	}
}

int main(int argc, char** argv) {
	int cm,foot,inch;
	cin>>cm;
	foot=CmtoFootInch(cm,p,0);
	inch=CmtoFootInch(cm,p,1);
	cout<<foot<<" "<<inch<<endl;
	return 0;
}
