#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Calculate(int begin,int spend) {
	int h,m,bh,bm,s,eh,em;
	bh=begin/100;
	bm=begin%100;
	s=abs(spend);
	h=s/60;
	m=s%60;
	if(spend>=0) {
		em=bm+m;
		if(em>=60) {
			em=em-60;
			eh=bh+h+1;
		} else {
			eh=bh+h;
		}
	} else {
		em=bm-m;
		if(em<0) {
			em=em+60;
			eh=bh-h-1;
		} else {
			eh=bh-h;
		}
	}
	return eh*100+em;
}

int main(int argc, char** argv) {
	int begin,spend,end;
	cin>>begin>>spend;
	end=Calculate(begin,spend);
	cout<<end<<endl;
	return 0;
}
