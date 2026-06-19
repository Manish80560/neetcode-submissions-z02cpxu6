class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        vector<int>re(n,0);

         for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(temperatures[j] > temperatures[i]){
                    re[i] = j - i;
                    break;
                }
            }
        }

        return re;
    }
};
