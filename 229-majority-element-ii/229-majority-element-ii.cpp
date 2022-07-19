class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
           int e1=-1,e2=-1;
        int c1=0,c2=0;
        
        //Finding the elements using Boyer Moore Algorithm
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==e1)
                c1++;
            else if(nums[i]==e2)
                c2++;
            else if(c1==0)
                e1=nums[i],c1=1;
            else if(c2==0)
                e2=nums[i],c2=1;
            else
                c1--,c2--;
        }
        cout<<e1<<" "<<e2<<endl;
        
        //Validating them in the array
        c1=0,c2=0;
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==e1)
                c1++;
            if(nums[i]==e2)
                c2++;
        }
        
        if(c1>nums.size()/3)
            res.push_back(e1);            
        if(c2>nums.size()/3)
            res.push_back(e2);
        if(e1==e2)
            res.pop_back();
        
        return res;
    }
};