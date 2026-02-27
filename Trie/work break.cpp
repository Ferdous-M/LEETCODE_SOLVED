class Node {
public:
    unordered_map<char, Node*> children;
    bool endOfWord;

    Node() {
        endOfWord = false;
    }
};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* curr = root;
        for (char c : word) {
            if (!curr->children.count(c))
                curr->children[c] = new Node();
            curr = curr->children[c];
        }
        curr->endOfWord = true;
    }
};

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        Trie trie;
        for (string word : wordDict)
            trie.insert(word);

        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true;

        for (int i = 0; i < n; i++) {
            if (!dp[i]) continue;

            Node* curr = trie.root;
            for (int j = i; j < n; j++) {
                char c = s[j];
                if (!curr->children.count(c))
                    break;

                curr = curr->children[c];
                if (curr->endOfWord)
                    dp[j + 1] = true;
            }
        }

        return dp[n];
    }
};
