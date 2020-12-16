/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> data;
        for(ListNode* tmp = head; tmp != NULL; tmp = tmp->next){
            data.push_back(tmp->val);
        }
        reverse(data.begin(), data.end());
        return data;
    }
};