class Solution {
public:
    vector<int> mergeSorted(vector<int> nums1, vector<int> nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> temp;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            temp.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i]>nums2[j]){
            temp.push_back(nums2[j]);
            j++;
        }
        else{
            temp.push_back(nums1[i]);
            temp.push_back(nums2[j]);
            i++;
            j++;
        }
    }
    while(i<n1){
        temp.push_back(nums1[i]);
        i++;
    }
    while(j<n2){
        temp.push_back(nums2[j]);
        j++;
    }
    return temp;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> temp = mergeSorted(nums1, nums2);
    int n = temp.size();
    double median = 0;
    int n1 = n/2;
    
    if(n%2 != 0)
        median = temp[n1];
    else{
        double max = (temp[n1]+temp[(n1-1)]);
        median = max/2;
    }
    return median;
}
};