class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        ListNode dummy = new ListNode(-1);
        ListNode current = dummy;
        
        int carry = 0;
        int ans = 0;
        
        while(l1 != null && l2 != null){
             ans = l1.val + l2.val + carry;
             carry = ans / 10;
             ans = ans % 10;
             ListNode value = new ListNode(ans);
             current.next = value;
             current = value; 
             l1 = l1.next;
             l2 = l2.next;
        }      
        
        while(l2 == null && l1 != null){
            if(carry > 0){
                ans = l1.val + carry;
                carry = ans / 10;
                ans = ans % 10;
                ListNode value = new ListNode(ans);
                current.next = value;
                current = value;        
            }else{
                current.next = l1;
                current = l1;
            }
            l1 = l1.next; 
        }
        
        while(l1 == null && l2 != null){
            if(carry > 0){
                ans = l2.val + carry;
                carry = ans / 10;
                ans = ans % 10;
                ListNode value = new ListNode(ans);
                current.next = value;
                current = value;         
            }else{
                current.next = l2;
                current = l2;
            }
            
             l2 = l2.next;
        }
        
        if(carry>0){
            ListNode carryNode = new ListNode(carry);
            current.next = carryNode;
        }
        return dummy.next;
    }
}