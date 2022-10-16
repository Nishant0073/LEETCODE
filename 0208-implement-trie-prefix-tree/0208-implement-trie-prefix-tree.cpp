
class Node{
    Node *links[26];
    bool flag = false;
    
    
    public:
    
    bool containsKey(char ch){
        return (links[ch-'a']!=NULL);
    }
    void putKey(char ch){
        Node *node = new Node();
        links[ch-'a'] = node;
    }
    
    Node* getNode(char ch){
        return links[ch-'a'];
    }
    
    void setEnd(){
        flag = true;
    }
    
    bool isEnd()
    {
        return flag;
    }
};

class Trie {
public:
    Node *root;
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node *node = root;
        for(int i=0;i<word.size();i++)
        {
            if(!node->containsKey(word[i]))
            {
                node->putKey(word[i]);
            }
            
            node = node->getNode(word[i]);
        }
        
        node->setEnd();
    }
    
    bool search(string word) {
        Node *node = root;
        for(int i=0;i<word.size();i++)
        {
            if(!node->containsKey(word[i]))
                return false;
            node = node->getNode(word[i]);
        }
        
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node *node = root;
        for(int i=0;i<prefix.size();i++)
        {
            if(!node->containsKey(prefix[i]))
                return false;
            node = node->getNode(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */