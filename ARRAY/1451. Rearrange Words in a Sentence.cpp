class Solution {
public:
   static bool comp(string a, string b)
    {
        return (a.size()<b.size());
    }
    string arrangeWords(string text) {
     
      //  int n=text.size();
        vector<string>tokens;
    
         //transform(text.begin(), text.end(), text.begin(), ::tolower);
        for(int i=0;i<text.size();i++)
        {
            if(text[i]!=' '&& (int)text[i]<(int)('a'))
                  text[i]=text[i]+32;
        }
        
        stringstream check1(text);
        
    
        
        string token;
        
        while(getline(check1,token,' '))
        {
            tokens.push_back(token);
        }
        
        int n=tokens.size();
     
       stable_sort(tokens.begin(),tokens.end(),comp);
      
        string res;
        for(int i=0;i<tokens.size();i++)
        {
           if(i==0)
           {
                 tokens[i][0]=(char)tokens[i][0]-32;
           }
            res+=tokens[i];
            if(i!=tokens.size()-1)
             res+=' ';
        }
        
      return res;
    }
};

problem link :  "https://leetcode.com/problems/rearrange-words-in-a-sentence/"