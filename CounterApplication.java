public class CounterApplication {
    public static void main(String[] args) {
        Thread countUpThread = new Thread(() -> {
            for (int i = 1; i <= 20; i++) {
                System.out.println("Count Up: " + i);
                try {
                    Thread.sleep(100); // Simulate some work
                } catch (InterruptedException e) {
                    Thread.currentThread().interrupt();
                }
            }
        });

        Thread countDownThread = new Thread(() -> {
            for (int i = 20; i > 0; i--) {
                System.out.println("Count Down: " + i);
                try {
                    Thread.sleep(100); // Simulate some work
                } catch (InterruptedException e) {
                    Thread.currentThread().interrupt();
                }
            }
        });

        countUpThread.start();
        try {
            countUpThread.join(); // Wait for countUpThread to finish
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        countDownThread.start();
    }
}