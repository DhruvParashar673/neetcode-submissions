class Solution {
public:
    int mySqrt(int x) {
     int l=0;
     if(x==1) return 1;
     int h =x/2;

     int ans=-1;

     while(l<=h){
        int mid=l+(h-l)/2;

        if((long long)(1LL*mid*mid)<=x){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
     } 

     return ans;
    }
};