public class maxWaterArea {
    public static void main(String[] args) {
        int[] height = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
        int j = height.length - 1;
        int i = 0;
        int max_area = 0;
        int area = 0;
        while (j!=0) {
            while (i != j) {
                if (height[i] >= height[j]) {
                    area = height[j] * (j - i);
                } else {
                    area = height[i] * (j - i);
                }
                if (area >= max_area) {
                    max_area = area;
                }
                i++;
            }
            j--;
            i=0;
        }
        System.out.println("###############");
        System.out.println(max_area);
    }
}
