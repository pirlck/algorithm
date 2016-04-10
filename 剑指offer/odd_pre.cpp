class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> half1,half2;
        for(vector<int>::iterator it= array.begin();it!=array.end();++it)
         {
          if( (*it)%2 == 1 )
              half1.push_back(*it);
            else
                half2.push_back(*it);
                
        }
        
        for(vector<int>::iterator it= half1.begin();it!=array.end();++it)
            cout<<*it<<" ";
        for(vector<int>::iterator it= half2.begin();it!=array.end();++it)
            cout<<*it<<" ";
        cout<<endl;
    }
};