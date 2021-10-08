class Trie {
public:
    struct Trienode {
        char val;
        int count;
        int endhere;
        Trienode *child[26];
    };
    
    Trienode *root;
    
    Trienode *getnode(int index)
    {
        Trienode *newnode=new Trienode;
        newnode->val='a'+index;
        newnode->count=newnode->endhere=0;
        for(int i=0;i<26;i++)
        {
              newnode->child[i]=NULL;
        }
        return newnode;
    }
    Trie() {
         ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        root = getnode('/'-'a');
    }
    
    void insert(string word) {
        Trienode *curr=root;
        
        int index;
        for(int i=0;word[i]!='\0';i++)
        {
                 index = word[i]-'a';
            if(curr->child[index]==NULL)
                curr->child[index] = getnode(index);
            curr->child[index]->count +=1;
            curr = curr->child[index];
                  
        }
         curr->endhere+=1;
    }
    
    bool search(string word) {
        Trienode *curr=root;
        
        int index;
        for(int i=0;word[i]!='\0';i++)
        {
               index=word[i]-'a';
            if(curr->child[index]==NULL)
                return false;
            curr=curr->child[index];
        }
        return (curr->endhere>0);
    }
    
    bool startsWith(string prefix) {
        
         Trienode *curr = root;
        int index;
        for(int i=0;prefix[i]!='\0';++i)
        {
            index = prefix[i]-'a';
            if(curr->child[index]==NULL)
                return false;
            curr = curr->child[index];
        }
        return (curr->count > 0);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

TC:((lenth of longest string)* (no.of queries))
SC:(217*No.of nodes);
