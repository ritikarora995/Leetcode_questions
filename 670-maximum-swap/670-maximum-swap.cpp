class Solution 
{
public:
    int maximumSwap(int num) 
    {
        vector<int>nums;
        
        
        int c=-1,ans=0,k=0,d=0,e=0;
        
        while(num>0)
        {
            int c=num%10;
            num=num/10;
            nums.push_back(c);
        }
        vector<int>vk(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        sort(vk.begin(),vk.end(),greater<int>());
        
        for(int i=0;i<nums.size();i++)
        {
            if(vk[i]!=nums[i])
            {
                c=i;
                d=vk[i];
                break;
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==d)
                e=i;
        }
        
        if(c==-1)
        {
            while(k<nums.size())
            {
                ans+=nums[k];
                ans*=10;
                k++;
            }
        }
        else
        {
            swap(nums[c],nums[e]);
             while(k<nums.size())
             {
                    ans+=nums[k];
                    ans*=10;
                    k++;
             }   
        }
        
        return ans/10;
    }
};