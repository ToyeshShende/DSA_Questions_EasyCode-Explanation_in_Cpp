https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11

int check(int *input, int n, int val, int s, int e) {
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(input[mid]==val){
        return mid;
    }
    else if (input[mid]>val){
        check(input, n, val, s, mid-1);
    }
    else{
        check(input, n, val, mid+1, e);
    }
}

int binarySearch(int *input, int n, int val)
{   int s=0;
    int e=n-1;
    return check (input,n,val,s,e);  
}
