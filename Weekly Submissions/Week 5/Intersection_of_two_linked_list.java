public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int s1=size(headA),s2=size(headB);
        ListNode slow=null,temp=null;
        if(s1>s2){
            slow=headB;
            temp=headA;
        }
        else{
            slow=headA;
            temp=headB;
        }
         int target=diff(s1,s2);
        //first bring slow and temp at the same node
        for(int i=0;i<target;i++){
            temp=temp.next;
        }
        //now slow and temp are both pointing at the same node
        while(slow!=null && slow!=temp){
            slow=slow.next;
            temp=temp.next;
        }
        if(slow==null) return null;
        return slow;
    }
    private static int diff(int s1,int s2){
    if(s1>s2) return s1-s2;
    return s2-s1;
} 
private static int size(ListNode head){
    ListNode curr=head;
    int size=0;
    while(curr!=null){
        curr=curr.next;
        size++;
    }
    return size;
 }
}