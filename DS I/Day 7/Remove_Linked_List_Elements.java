class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode curr=head,prev=null;
        while(curr!=null && curr.val==val)
        {
            head=curr.next;
            curr=head;
        }
        while(curr!=null)
        {
            if(curr.val==val)
            {
                prev.next=curr.next;
                curr=curr.next;
            }
            else{
                prev=curr;
                curr=curr.next;
            }
        }
        return head;
    }
}