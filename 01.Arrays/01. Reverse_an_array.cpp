#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++){
	        cout<<arr[n-1-i]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}