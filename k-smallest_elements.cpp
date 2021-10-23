int kthSmallest(int arr[], int l, int r, int k) {
        //code here
          priority_queue<int> maxi;
        for(int i=l;i<=r;i++){
            maxi.push(arr[i]);
            if(maxi.size()>k)
            maxi.pop();
        }
    return maxi.top();
    }