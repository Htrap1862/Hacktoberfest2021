class Trie {
    struct TrieNode
    {
        unordered_map<char, TrieNode*> map;
        bool isLeaf = false;
    };
    
    TrieNode* root;
    
    
    
public:
    /** Initialize your data structure here. */
    
    Trie() {
        root = new TrieNode();
    }
    
    
    /** Inserts a word into the trie. */
    
    void insert(string word) {
        auto* cur = root;
        
        for(char c : word)
        {
            auto* node = cur->map[c];
            
            if(!node)
            {
                node = new TrieNode();
                cur->map[c] = node;
            }
            
            cur = node;
        }
        
        cur->isLeaf = true;
    }
    
    /** Returns if the word is in the trie. */
    
    bool search(string word) {
        auto* cur = root;
        
        for(auto c : word)
        {
            if(cur->map.count(c))
                cur = cur->map[c];
            else
                return false;
        }
        
        return true;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    
    bool startsWith(string prefix) {
        auto* cur = root;
        
        for(auto c : prefix)
        {
            if(cur->map.count(c))
                cur = cur->map[c];
            else
                return false;
        }
        
        return true;
    }
};
