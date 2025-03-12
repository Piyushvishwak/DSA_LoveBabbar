int countEqIndexes(vector<int> &arr){
	int totalSum = 0;
	for(int x:arr){
		totalSum += x;
	}

	int ps = 0;
	int count = 0;

	for(int i=0;i<arr.size();i++){
		int leftSum = ps;
		int rightSum = totalSum - ps - arr[i];

		if(leftSum==rightSum){
			count++;
		}
		ps = ps + arr[i];
	}

	return count;
}