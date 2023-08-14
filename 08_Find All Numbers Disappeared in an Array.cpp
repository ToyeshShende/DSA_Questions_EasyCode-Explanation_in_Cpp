https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
the logic is all the numbers are inside range of 1 to n where n is size of array so the numbers which are missing theri indexed number reamin positive
and other get negtive
int i,j,n,x;
        n=v.size();
        for(i=0;i<n;i++)
        {
            x=abs(v[i])-1;
            if(v[x]>0)
            {
                v[x]=-v[x];
            }
        }
        vector <int> u;
        for(i=0;i<n;i++)
        {
            if(v[i]>0)
            {
                u.push_back(i+1);
            }
        }
    }
