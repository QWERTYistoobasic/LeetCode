class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=1;
        int j=n-2;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid]<arr[mid-1])
                j=mid-1;
            else
                i=mid+1;
        }
        return -1;
    }
};