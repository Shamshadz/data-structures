public class InvertedHalfPyramidNumbers {

    public static void halfPyramid(int rows, int cols) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols - i + 1; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        halfPyramid(5, 5);
    }
}
