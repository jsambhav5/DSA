// TUF+ : https://takeuforward.org/plus/data-structures-and-algorithm/arrays/fundamentals/linear-search

/*
Topics and Learnings: #Array, #LinearSearch

Approach:
Linear Search

Complexity Analysis:
TC: O(N)
SC: O(1)
*/

import java.util.*;

class LinearSearch {
	public static int linearSearch(ArrayList<Integer> arr, int target) {
		for(int i = 0; i < arr.size(); i++) {
            if(arr.get(i) == target) return i;
        }
        return -1;
    }

	public static void main(String[] args) {
		int t;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();

		while (t-- > 0) {
			int n, target;
			ArrayList<Integer> arr = new ArrayList<>();
			n = sc.nextInt();

			for(int i = 0; i < n; i++) {
				int input;
				input = sc.nextInt();
				arr.add(input);
			}
			
			target = sc.nextInt();
			
			int result = linearSearch(arr, target);
			
			System.out.println(result);
		}
		sc.close();
	}
}

/*
Test Input :
2

5
7 4 1 5 3
4

5
5 4 4 1 1
3

Test Output : 1
1
-1

*/

