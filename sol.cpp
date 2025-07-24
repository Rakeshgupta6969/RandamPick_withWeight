class Solution {
public:

     vector<int>prifixsum;
     int totalsum;  // this are the global declaration.
      
    Solution(vector<int>& w) {
          // asigning the value of the global declaration.
           int n = w.size();
          totalsum = 0;
          for(int i  = 0; i<n; i++){
        totalsum += w[i];
        prifixsum.push_back(totalsum);
          }


    }
    
    int pickIndex() {
      int randindex = rand()%totalsum;
      int low = 0;
      int high = prifixsum.size()- 1;
       int mid = low + (high - low)/2;
       while(low<high){
        
        if(randindex>=prifixsum[mid]){
            low  = mid+1;
        }
        else{
            high = mid;
        }
     mid = low + (high - low)/2;

       }   


       return low; 
    }
};