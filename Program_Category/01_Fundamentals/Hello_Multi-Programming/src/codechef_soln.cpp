#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int i=1;
	    while(true){
	        if(i%2!=0){
	            if(i<=a){
	                a=a-i;
	            }
	            else{
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	        else{
	            if(i<=b){
	                b=b-i;
	            }
	            else{
	                cout<<"Limak"<<endl;
	                break;
	            }
	        }
	        i++;
	    }
	}
	return 0;
}
