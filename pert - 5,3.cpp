//#include <iostream>
//using namespace std;
//
//int main(){
//	int 
//	x;
//	x=0;
//	
//	while (x<=10){
//		cout<<x=x+2<<" ";
//	cin>>x;
//	}
//
//}

#include <iostream>
using namespace std;

int main(){
	int a = 0,i;
	for(i=0 ; i<=20; i++){
		if(i%2 !=0){
			cout<<i;
			a+=i;
			if(i<19){
	        	cout<<" + ";
			}
		}
	}
	cout<<" = "<<a;
}
