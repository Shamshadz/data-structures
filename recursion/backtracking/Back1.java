public class Back1 {
    public static void main(String[] args) {
        Back1 back1 = new Back1();
        back1.count(3, 3);
    }

    static int count(int r, int c) {
        if (r == 1 || c == 1) {
            System.out.println("Successfull");
            return 1;
        }

        int left = count(r - 1, c);
        int right = count(r, c - 1);
        return left + right;
    }
}
