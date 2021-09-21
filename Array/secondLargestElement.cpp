#include <iostream>
using namespace std;

class secondMaximumElement
{
   public:
    int print2largest(int arr[], int arr_size)
    {
    	int l =-1, sl= -1;
    	for(int i=0; i<arr_size; i++){
    	    if(arr[i]>l){
    	        sl=l;
    	        l=arr[i];
    	    }
    	    else if(arr[i]>sl&&arr[i]!=l){
    	       sl=arr[i];
    	    }

    	}
    	return sl;

    }

};
int main()
{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";

	return 0;
}
