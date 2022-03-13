class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code h
        int n = nums.size();
        int i,sum=0,s1=0,s2=0;
        vector<int> v;
        for(i=0;i<n;i++)   sum=sum ^ nums[i];
        int rsb = sum & (~sum+1);
        
        for(i=0;i<n;i++)  {
            if (nums[i] & rsb)   s1^=nums[i];
            else   s2^=nums[i];
        }
        int temp;
        if(s2<s1){
            temp=s2;
            s2=s1;
            s1=temp;
        }
        v = {s1,s2};
        return v;
    }
};