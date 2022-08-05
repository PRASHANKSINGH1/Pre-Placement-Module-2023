class Solution {
    public ListNode deleteDuplicates(ListNode head) {
         if(head==null || head.next==null){
            return head;
        }
        
        ListNode ans=new ListNode(-1);
        ListNode tail=ans;
        ListNode curr=head;
        tail.next=curr;
        
        while(curr!=null){
            while(curr.next != null  && curr.val==curr.next.val){
                curr=curr.next;
            }
            if(tail.next!=curr){
                tail.next=curr.next;
                curr=tail.next;
            }
            else{
                curr=curr.next;
                tail=tail.next;
            }
            
        }
        return ans.next;
    }
}