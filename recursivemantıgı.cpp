#include<iostream>
using namespace std;
int f(int n){
	if(n>1)
		f(n-1);	//her fonksiyon i�in ayr� d���n 
			cout<<n;	//buraya gelmesi i�in ko�uldan ��kmas� gerek
}
int main(){
	f(3);
}
