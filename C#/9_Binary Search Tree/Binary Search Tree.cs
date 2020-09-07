using System;

namespace Algorithm {

    class BinarySearchTree {

        class Node {
            public int data;
            public Node left, right;
            public Node(int item) {
                data = item;
                left = null;
                right = null;
            }
        }

        Node root;
        BinarySearchTree() {
            root = null;
        }

        Node search(Node root, int data) {
            if(root == null) {
                Console.Write("Not Found\n");
                return null;
            }

            if(root.data == data) {
                Console.Write("Found At: " + root + "\n");
                return root;
            }

            if(root.data < data) {
                return search(root.right, data);
            } else {
                return search(root.left, data);
            }
        }

        void insert(int data) {
            root = recInsert(root, data);
        }

        Node recInsert(Node root, int data) {
            if(root == null) {
                root = new Node(data);
                return root;
            }

            if(data <= root.data) {
                root.left = recInsert(root.left, data);
            } else {
                root.right = recInsert(root.right, data);
            }

            return root;
        }

        public static void Main(string[] args){
            BinarySearchTree t = new BinarySearchTree();

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
}