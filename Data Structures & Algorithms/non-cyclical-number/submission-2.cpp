// class Solution {
// public:
//     bool isHappy(int n) {
//     while (n != 1 && n != 4) {
//         int sum = 0;
         
//          while(n > 0){
//             int rem = n % 10;
//             sum += rem;
//             n /= 10;
//          }
//            n = sum;
//         }
        
//         return n == 1;        
//     }
// };
class Solution {
public:
    bool isHappy(int n) {
        
        while (n != 1) {
            int sum = 0;

            while (n > 0) {
                int rem = n % 10;
                sum += rem * rem;   
                n /= 10;
            }

            if (sum == 4) return false;  

            n = sum;  
        }

        return true;
    }
};