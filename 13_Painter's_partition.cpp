Question link
https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1

for logic check previous book allocation problem

bool ispossible(vector<int> arr, int k, int mid) {
    int colorportion=0;
    int day=1;
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] + colorportion <= mid) {
          colorportion+=arr[i];
      } else {
          day++;
          if (day > k || arr[i] > mid) {
              return false;
          }
          colorportion=arr[i];
      }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{   
    int s=0;
    int sum=0;
    //    Write your code here.
    for (int i = 0; i < boards.size(); i++) {
        sum+=boards[i];
    
    }
    int e=sum;
    while (s <= e) {
        int mid=(s+e)/2;
        if (ispossible(boards, k, mid)) {
            sum=mid;
            e=mid-1;
        } else {
            s=mid+1;
        }
    }
    return sum;
}
