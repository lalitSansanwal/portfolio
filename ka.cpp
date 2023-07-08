#include <iostream>
#include <vector>
using namespace std;


 long long minimumAverageDifference(vector<long long> nums)
{                                              
    vector< long long> a;                             
    for (int i = 0; i < nums.size(); i++)
    {
         long long sum = 0;       
        long long count = 0;
        if (i == nums.size() - 1)
        {
            sum = nums[i];
            count = 1;
            break;
        }
        else
        {

            for ( long long j = i + 1; j < nums.size(); j++)
            {
                sum += nums[j];
                count++;
            }
        }
        a.push_back(sum / count);
    }
    a.push_back(0);
    vector<long long>b;
    for(long long i=0;i<nums.size();i++){
        long long c=0;
        long long s=0;
        for(int j=0;j<=i;j++){
            c++;
            s+=nums[j];
        }
        b.push_back(s/c);
    }
    
    vector<long long>c;
    for(int i=0;i<a.size();i++){
        c.push_back(abs(a[i]-b[i]));
    }
     long long ans=INT_MAX;
     long long r=0;
    for (int i = 0; i < b.size(); i++)
    {
       ans=min(ans,c[i]);
       

    }
    for(int i=0;i<c.size();i++){
        if(c[i]==ans){
            r=i;
            break;
        }
    }

    return r;
}
int main()
{
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    long long s = minimumAverageDifference(nums);
    cout << s << endl;
}