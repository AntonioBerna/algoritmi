public class BST {

    class Node {
        int data;
        Node left, right;

        public Node(int item){
            data = item;
            left = right = null;
        }
    }

    Node root;
    BST(){
        root = null;
    }

    Node search(Node root, int data){
        if(root == null){
            System.out.print("Not Found\n");
            return null;
        }

        if(root.data == data){
            System.out.print("Found at " + root + "\n");
            return root;
        }

        if(root.data < data){
            return search(root.right, data);
        }else{
            return search(root.left, data);
        }
    }

    void insert(int data){
        root = recInsert(root, data);
    }

    Node recInsert(Node root, int data){
        if(root == null){
            root = new Node(data);
            return root;
        }

        if(data <= root.data){
            root.left = recInsert(root.left, data);
        }else{
            root.right = recInsert(root.right, data);
        }

        return root;
    }

    public static void main(String[] args) {
        BST t = new BST();

        t.insert(5);
        t.insert(3);
        t.insert(8);
        t.insert(1);
        t.insert(4);
        t.insert(7);
        t.insert(9);
        t.insert(0);
        t.insert(2);
        t.insert(6);
        t.insert(10);

        t.search(t.root, 10);
    }
}
