class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        return swap(null,head,k);
    }
    private static ListNode swap(ListNode prev,ListNode present,int k){
        ListNode curr=present;
        int i=0;
         while(i<k){
        if(curr==null) return present;
         curr=curr.next;
            i++;
          }
         prev=present;
        present=present.next;
        ListNode last=prev;
        int j=0;
        while(j<k-1){
            ListNode Next=present.next;
            present.next=prev;
            prev=present;
            present=Next;
            if(Next!=null) Next=Next.next;
            j++;
        }
        last.next=swap(prev,present,k);
        return prev; 
    }
}