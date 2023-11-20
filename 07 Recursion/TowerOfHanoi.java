public class TowerOfHanoi{
    public static void main(String[] args) {
        int numberOfDisks = 3;
        towerOfHanoi(numberOfDisks, 'A', 'B', 'C');

    }

    public static void towerOfHanoi(int n, char A, char B, char C){
        if (n == 1) {
            System.out.println("Move Disk-" + n + " from " + A + " to " + C);
            return;
        }

        towerOfHanoi(n-1, A, C, B);
        System.out.println("Move Disk-" + n + " from " + A + " to " + C);
        towerOfHanoi(n-1, B, A, C);
    }
};