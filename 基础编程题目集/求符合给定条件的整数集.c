#include <iostream>
using namespace std;

const int MAX=24;

int main(int argc, char** argv) {
	int A,ans[4],n=1;
	cin>>A;
	for(int i=0; i<4; i++) {
		ans[i]=A;
		A++;
	}
	for(int x=0; x<4; x++) {
		for(int y=0; y<4; y++) {
			for(int z=0; z<4; z++) {
				while(x!=y&&x!=z&&y!=z) {
					if(n%6==0) {
						cout<<ans[x]<<ans[y]<<ans[z]<<endl;
					} else {
						cout<<ans[x]<<ans[y]<<ans[z]<<" ";
					}
					n++;
					break;
				}
			}
		}
	}
	return 0;
}
