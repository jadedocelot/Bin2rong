// Website: https://discuss.codechef.com/t/how-to-check-compile-time/4217/2

// Look into it some more and find out how this code works

#include<iostream>
#include<ctime>
using namespace std;
int main() {
	clock_t start_time,end_time;
	start_time = clock();
	int i;
	// your process
	for(i=0;i<10000;++i)cout<<i;
	cout<<endl;
	end_time = clock();
	cout<<"Time Taken"<<(end_time - start_time)/CLOCKS_PER_SEC<<endl;
	return 0;
}
