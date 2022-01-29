class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<nums.size(); i++)
        {
            v.push_back({nums[i],i});
            
            
        }
        sort(v.begin(),v.end());
        
        int i=0;
        int j=nums.size()-1;
        int index1=0;
        int index2=0;
        
        while(i < j)
        {
            
            if(v[i].first + v[j].first == target)
            
            {
                index1= v[i].second;               
                index2= v[j].second;   
                break;
            }
            
            else if( v[i].first + v[j].first < target )
            {
                i++;
                
            }
            
          else{
               
               j--;
           }
            
            
            
        }
        
        
        
        return {index1 , index2};
        
       
    }
};