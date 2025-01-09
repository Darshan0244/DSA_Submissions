class Solution {// LEETCODE Solution 69th Question...!!!!!!(Easy lvl )
public:
// Note:- we are not finding exact float, but approx value, so int...!!!
    int mySqrt(int x) {
        int st=0; // start value
         int end=x;// end value
          long long int ans;// answer can overflow int value , so long long int
    while(st <= end){
        long long int mid = st + (end - st)/2;
        long long int sqrt = mid * mid ;// Square root

        if(sqrt == x){
            return mid;// if sqrt equal return mid
        } 
        else if(sqrt < x){// if less than sqrt
            ans = mid;// store mid
            st = mid+1;// start from mid+1
        }
        else{
            end = mid-1;// else mid-1
        }
    }
    return ans;
    }
};
