public class FloydsTriangle {
    public static void main(String[] args) {
        int n = 1;
        int rows = 5;

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(n + " ");
                n++;
            }
            System.out.println();
        }
    }
}
