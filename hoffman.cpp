#include <bits/stdc++.h>
using namespace std;

// Maximum Height of Huffman Tree.
#define MAX_SIZE 100

class HuffmanTreeNode
{
public:
    char data;
    int freq;
    HuffmanTreeNode *left;
    HuffmanTreeNode *right;

    HuffmanTreeNode(char character,
                    int frequency)
    {
        data = character;
        freq = frequency;
        left = right = NULL;
    }
};

// Custom comparator class
class Compare
{
public:
    bool operator()(HuffmanTreeNode *a,
                    HuffmanTreeNode *b)
    {
        return a->freq > b->freq;
    }
};

// Function to generate Huffman Encoding Tree
HuffmanTreeNode *generateTree(priority_queue<HuffmanTreeNode *,
                                             vector<HuffmanTreeNode *>,
                                             Compare>
                                  pq)
{

    while (pq.size() != 1)
    {

        // Top two node which have least frequency
        HuffmanTreeNode *left = pq.top();
        pq.pop();
        HuffmanTreeNode *right = pq.top();
        pq.pop();

        HuffmanTreeNode *node = new HuffmanTreeNode('$',
                                                    left->freq + right->freq);
        node->left = left;
        node->right = right;

        pq.push(node);
    }

    return pq.top();
}

// It uses arr to store the codes
void printCodes(HuffmanTreeNode *root,
                int arr[], int top)
{
    // Assign 0 to the left node and recur
    if (root->left)
    {
        arr[top] = 0;
        printCodes(root->left,
                   arr, top + 1);
    }

    // Assign 1 to the right node and recur
    if (root->right)
    {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    // If this is a leaf node then we print root->data and code

    if (!root->left && !root->right)
    {
        cout << root->data << " ";
        for (int i = 0; i < top; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
}

void HuffmanCodes(char data[],
                  int freq[], int size)
{

    // using custom comparator
    priority_queue<HuffmanTreeNode *, vector<HuffmanTreeNode *>, Compare> pq;

    // Every character as a leaf node
    for (int i = 0; i < size; i++)
    {
        HuffmanTreeNode *newNode = new HuffmanTreeNode(data[i], freq[i]);
        pq.push(newNode);
    }

    HuffmanTreeNode *root = generateTree(pq);

    // Print Huffman Codes
    int arr[MAX_SIZE], top = 0;
    printCodes(root, arr, top);
}

// Driver Code
int main()
{
    string s;
    cin >> s;
    set<char> distinct_st;
    map<char, int> mm;
    for (int i = 0; i < s.size(); i++)
    {
        distinct_st.insert(s[i]);
        mm[s[i]]++;
    }
    int n = distinct_st.size();
    char data[n];
    int freq[n];
    int i = 0;
    for (auto u : mm)
    {
        data[i] = u.first;
        freq[i] = u.second;
        i++;
    }

    HuffmanCodes(data, freq, n);
    return 0;
}