class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count=0;
        int c=capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(plants[i]>capacity)
            {
                count+=2*i+1;
                capacity=c;
                capacity-=plants[i];
            }
            else
            {
                capacity-=plants[i];
                count++;
            }
        }
        return count;
    }
};