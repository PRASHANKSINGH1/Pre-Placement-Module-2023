class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        ListNode temp = head;
        ListNode dummy = new ListNode(-1);
        ListNode tail = dummy;
        tail.next = head;
        
        while(temp!=null){
            int val = temp.val;
            if(temp.next!=null && temp.next.val == val){
                while(temp!=null && temp.val==val){
                    temp = temp.next;
                }
                tail.next = temp;
            }
            else{
                temp = temp.next;
                tail = tail.next;
            }
        }
        
        return dummy.next;
        
    }
}