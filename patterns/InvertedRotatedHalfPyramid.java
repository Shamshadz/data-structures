public class InvertedRotatedHalfPyramid {
    public static void halfPyramid(int rows, int cols) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                if (j < cols - i + 1) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        halfPyramid(5, 5);
    }
}
