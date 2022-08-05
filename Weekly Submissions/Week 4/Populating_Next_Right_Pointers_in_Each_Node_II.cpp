class Solution {
    public Node connect(Node root) {
        if(root == null) return root;
        
        //List<Node> ls = new LinkedList<>();
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        root.next = null;
        List<List<Node>> ans = new LinkedList<>();
        while(!q.isEmpty()) {
            int n = q.size();
            List<Node> ls = new LinkedList<>();
            for(int i = 0;i < n;i++) {
                Node curr = q.poll();
                if(curr.left!= null) q.add(curr.left);
                if(curr.right != null) q.add(curr.right);
                ls.add(curr);
            }
            ans.add(ls);
        }
        
        
        for(int i = 0;i < ans.size() ; i++) {
            for(int j = 0;j < ans.get(i).size();j++) {
                if(j == ans.get(i).size()-1) {
                    ans.get(i).get(j).next = null;
                }
                else {
                    ans.get(i).get(j).next = ans.get(i).get(j+1);
                }
            }
            //System.out.println();
        }
        return root;
    }
}