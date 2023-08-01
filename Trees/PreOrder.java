import java.util.*;

public class PreOrder {
    static class TNode {
        int data;
        TNode left;
        TNode right;

        TNode(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    static class BinTree {
        static int idx = -1;

        public static TNode buildTree(int nodes[]) {
            idx++;
            if (nodes[idx] == -1) {
                return null;
            }
            TNode newTNode = new TNode(nodes[idx]);
            newTNode.left = buildTree(nodes);
            newTNode.right = buildTree(nodes);

            return newTNode;
        }

        public static void preOrder(TNode root) {
            if (root == null) {
                return;
            }
            System.out.print(root.data + " ");
            preOrder(root.left);
            preOrder(root.right);
        }

        public static void inOrder(TNode root) {
            if (root == null) {
                return;
            }
            inOrder(root.left);
            System.out.print(root.data + " ");
            inOrder(root.right);
        }

        public static void pstOrder(TNode root) {
            if (root == null) {
                return;
            }
            pstOrder(root.left);
            pstOrder(root.right);
            System.out.print(root.data + " ");
        }

        public static void levelOrder(TNode root) {
            if (root == null) {
                return;
            }

            Queue<TNode> q = new LinkedList<>();
            q.add(root);
            q.add(null);

            while (!q.isEmpty()) {
                TNode currNode = q.remove();
                if (currNode == null) {
                    System.out.println();
                    if (q.isEmpty()) {
                        break;
                    } else {
                        q.add(null);
                    }
                } else {
                    System.out.print(currNode.data + " ");
                    if (currNode.left != null) {
                        q.add(currNode.left);
                    }
                    if (currNode.right != null) {
                        q.add(currNode.right);
                    }
                }
            }
        }
    }

    public static int countOfNodes(TNode root) {
        if (root == null) {
            return 0;
        }
        int leftCount = countOfNodes(root.left);
        int rightCount = countOfNodes(root.right);

        return leftCount + rightCount + 1;
    }

    public static int sumOfNodes(TNode root) {
        if (root == null) {
            return 0;
        }
        int leftSum = sumOfNodes(root.left);
        int rightSum = sumOfNodes(root.right);

        return leftSum + rightSum + root.data;
    }

    public static int heightOfTree(TNode root) {
        if (root == null) {
            return 0;
        }
        int leftheight = heightOfTree(root.left);
        int rightheight = heightOfTree(root.right);

        int height = Math.max(leftheight, rightheight);
        return height + 1;
    }

    public static int diameterON2(TNode root) {
        if (root == null) {
            return 0;
        }

        int dia1 = diameterON2(root.left);
        int dia2 = diameterON2(root.right);
        int dia3 = heightOfTree(root.left) + heightOfTree(root.right) + 1;

        return Math.max(dia3, Math.max(dia1, dia2));
    }

    static class TreeInfo {
        int ht;
        int dia;

        TreeInfo(int ht, int dia) {
            this.ht = ht;
            this.dia = dia;
        }
    }

    public static TreeInfo diameterON(TNode root) {
        if (root == null) {
            return new TreeInfo(0, 0);
        }

        TreeInfo left = diameterON(root.left);
        TreeInfo right = diameterON(root.right);

        int height = Math.max(left.ht, right.ht) + 1;
        int dia1 = left.dia;
        int dia2 = right.dia;
        int dia3 = left.ht + right.ht + 1;

        int dia = Math.max(dia3, Math.max(dia2, dia1));

        TreeInfo myInfo = new TreeInfo(height, dia);

        return myInfo;
    }

    public static void main(String[] args) {
        int nodes[] = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        BinTree tree = new BinTree();
        TNode root = tree.buildTree(nodes);
        // System.out.print(root.data);
        // tree.preOrder(root);
        // tree.inOrder(root);
        // tree.pstOrder(root);
        // tree.levelOrder(root);
        // System.out.println(countOfNodes(root));
        // System.out.println(sumOfNodes(root));
        // System.out.println(heightOfTree(root));
        // System.out.println(diameterON2(root));
        System.out.println(diameterON(root).dia);
    }
}