int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int st = 0; int end = n-1;
	int ans = n;

	while(st <= end){
		int mid = st+(end-st)/2;
		
		if(arr[mid] > x){// For lower bound put < than and update accordingly
			ans = mid;
			end = mid-1;
		}
		else{
			st = mid+1;
		}
	}	
	return ans;
}
