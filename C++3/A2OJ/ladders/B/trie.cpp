#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *link[26];
    bool flag = false;
    bool containsKey(char ch)
    {
        return (link[ch - 'a'] != NULL);
    }
    void put(char ch, Node *node)
    {
        link[ch - 'a'] = node;
    }
    Node *get(char ch)
    {
        return link[ch - 'a'];
    }
    void setEnd()
    {

        flag = true;
    }
    bool isEnd()
    {
        return flag;
    }
};
class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void insert(string word)
    {
        Node *node = root;

        for (int i = 0; i < word.size(); ++i)
        {
            if (node->containsKey(word[i]))
            {
                node->put(word[i], new Node());
            }
            node->get(word[i]);
        }
        node->setEnd();
    }
    bool search(string word)
    {
        Node *node = root;

        for (int i = 0; i < word.length(); ++i)
        {
        }
    }
    bool startWith(string prefix)
    {
    }
};
int main()
{

    return 0;
}
