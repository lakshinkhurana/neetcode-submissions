/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map <Node*,Node*> map;
        map[NULL]=NULL;
        Node*cur=head;
        while(cur!=NULL){
            Node*copy=new Node(cur->val);
            map[cur]=copy;
            cur=cur->next;
        }
        cur=head;
        while(cur!=NULL){
            Node* copy=map[cur];
            copy->next=map[cur->next];
            copy->random=map[cur->random];
            cur=cur->next;
        }
        return map[head];
    }
};
