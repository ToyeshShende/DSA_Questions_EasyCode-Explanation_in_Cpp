class Solution {
public:
    vector<int> nextsmallerElement(vector<int>heights,int n){
        stack<int>s;
        s.push(-1);
         vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            
            while(s.top() !=-1 && heights[i]<=heights[s.top()]){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;

    }
  
    vector<int>prevsmallerElement(vector<int>heights,int n){
       stack<int>s;
       
        s.push(-1);
     
         vector<int>ans(n);
        for(int i=0;i<n;i++){
            
            while(s.top()!=-1 && heights[i]<=heights[s.top()]){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;

    }
     
    

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next(n);   // copy from created function
        next=nextsmallerElement(heights,n);
        vector<int>prev(n);
        prev=prevsmallerElement(heights,n);
        int areamax=INT_MIN;
        for(int i=0;i<n;i++){
            int height=heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int length=next[i]-prev[i]-1;
            int area=length * height;
            areamax=max(areamax,area);


        }
        return areamax;
        

    }
};
