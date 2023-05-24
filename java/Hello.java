import java.util.*;

class MultiThreadDemo extends Thread {
    public void run() {
        try {
            System.out.println("the thread is running id:" + threadId() + " .");
        } catch (Exception e) {
            System.out.println("Exception is caught");

        }
    }
}

public class Hello {

    public void run() {
        System.out.println("Threding is runnig !");
    }

    public static void main(String[] args) {
        int n = 8;
        for (int i = 0; i < n; i++) {
            MultiThreadDemo thd = new MultiThreadDemo();
            thd.start();
        }
    }
}
