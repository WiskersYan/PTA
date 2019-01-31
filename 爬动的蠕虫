#include <iostream>
using namespace std;

int Operating(int N,int U,int D){
	int time=0,l,h;
	h=N;
	l=U-D;
	while(h-l>=U){
		h=h-l;
		time=time+2;
	}	
	
	if(h<=U){
		time++;
	}
	else{
		time=time+3;
	}
	return time;
}

int main(int argc, char** argv) {
	int N,U,D,T;
	cin>>N>>U>>D;
	T=Operating(N,U,D);
	cout<<T<<endl;
	return 0;
}
