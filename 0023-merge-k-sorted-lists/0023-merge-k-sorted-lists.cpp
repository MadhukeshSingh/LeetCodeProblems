/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         vector<ListNode*> nodes;
        for(auto x : lists) {
            for(auto l = x; l ; l = l -> next) nodes.push_back(l);
        }

        if(nodes.size() == 0) return nullptr;
        sort(nodes.begin(), nodes.end(), [&](auto a, auto b) {
            return a -> val < b -> val;
        });

        for(int i = 0; i < nodes.size() - 1; i++)
            nodes[i]->next = nodes[i+1];
        
        nodes[nodes.size() - 1]-> next = nullptr;
        return nodes[0];
    }
};