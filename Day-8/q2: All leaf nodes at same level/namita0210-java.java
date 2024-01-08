public class namita0210-java{


    class Node {
        int data;
        Node left, right;

        Node(int item) {
            data = item;
            left = right = null;
        }
    }

    class BinaryTree {
        Node root;

        boolean checkSameLevelLeaves(Node root) {
            if (root == null)
                return true;

            // Queue for level order traversal
            Queue<Node> queue = new LinkedList<>();
            queue.add(root);

            int level = 0;
            int leafLevel = 0;

            while (!queue.isEmpty()) {
                int size = queue.size();
                level++;

                while (size-- > 0) {
                    Node temp = queue.poll();

                    if (temp.left == null && temp.right == null) {
                        if (leafLevel == 0) {
                            leafLevel = level;
                        } else if (leafLevel != level) {
                            return false;
                        }
                    }

                    if (temp.left != null)
                        queue.add(temp.left);

                    if (temp.right != null)
                        queue.add(temp.right);
                }
            }
            return true;
        } 
    }
}
