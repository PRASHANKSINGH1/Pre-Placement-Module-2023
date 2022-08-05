class Solution {
public ListNode reverseList(ListNode head) {

    if(head == null || head.next == null)
        return head;
    ListNode prev = null;
    ListNode curr = head;
    while(curr!=null){
        ListNode next = curr.next;
		//next will point to previous node, changing the direction of list
        curr.next = prev;
        prev = curr;
        curr = next;  
    }
	//prev will be th new head
    return prev; 
}
}