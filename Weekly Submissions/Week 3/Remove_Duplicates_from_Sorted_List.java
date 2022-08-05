class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode curr=head;
        if(head==null)
            return head;
        while(curr.next!=null && curr!=null)
        {
            if(curr.val==curr.next.val)
            {
                curr.next=curr.next.next;
                continue;
            }
            curr=curr.next;
        }
        return head;
    }
}