#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int numRows) 
{
   vector<vector<long long int>>res;
        vector<long long int>temp;
        temp.push_back(1);
        res.push_back(temp);
        if(numRows==1){return res;}
        temp.push_back(1);
        res.push_back(temp);
        if(numRows==2){return res;}
        for(int i=2;i<numRows;i++){
            vector<long long int>vec;
            vec.push_back(1);
            for(int j=0;j<temp.size()-1;j++){
                vec.push_back(temp[j]+temp[j+1]);
            }
            vec.push_back(1);
            res.push_back(vec);
            temp.clear();
            temp=vec;
            
        }
        return res;
    
}
