vector<int> sub1;
set<int> s;

void fun2(int sum, vector<int> &arr, int n){
	if(sum==0 || n==0)
		return ;
	fun2(sum,arr,n-1);
	sub1.push_back(arr[n-1]);
	set.insert(arr[n-1]);
	fun2(sum-arr[n-1],arr,n-1);
}

void fun(vector<int> &arr){
	int sum=0;
	for(int i=0;i<arr.size();i++)
		sum+=arr[i];
	sum/=2;
	vector<vector<int>> dp;
	fun2(sum,arr,arr.size());
	vector<int> sub2;
	for(int i=0;i<arr.size();i++){
		if(s.find(arr[i])==s.end())
			sub2.push_back(arr[i]);
	}
}