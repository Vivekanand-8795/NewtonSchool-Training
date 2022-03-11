import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
	public static void main (String[] args) {
                      // Your code here
					  
				
					  int[] arr = new int[n];
					  
					  int[] maxRight = new int[n];
					  int[] minLeft = new int[n];

					  maxRight[n-1] = arr[n-1];
					  for (int i = n-2; i >= 0 ;i--) {
						  maxRight[i] = Math.max(maxRight[i+1], arr[i]);
					  }

					  minLeft[0] = arr[0];
					  for (int i = 1; i < n ;i++) {
						  minLeft[i] = Math.min(minLeft[i+1], arr[i]);
					  }

					  int maxDis = -1;
					  // 8 4 9 3 7 2

					  // k = 1  >=4 <-  4  -> <=9
					  // k = 2  >=4 <-  9  -> <=9
					  // k = 3  >=3 <-  3  -> <=7
					  // 9 9 9 7 7 2 -> j (maxRight)
					  // 8 4 4 3 3 2 -> i (minLeft)

					  int i = 0 , j = 0;
					  // i < j
					  // arr[i] < arr[j]
					  // sliding window
					  while (i < n && j < n) {
						  // i = 1 , j = 4
						  // 4 7
						  // maxDis = 3
						  if (minLeft[i] < maxRight[j]) {
							  j++;
							  maxDis = Math.max(maxDis, j-i);
						  } else {
							  i++;
						  }
					  }

					  // brute force
					//   for (int i = 0;i<n;i++) {
					// 	  // inner loop
					// 	  for (int j = i+1;j<n;j++) {
					// 		  // (i,j)
					// 		  if (arr[i] < arr[j]) {
					// 			  maxDis = Math.max(maxDis, j-i);
					// 		  }
					// 	  }
					//   }

					  System.out.println(maxDis);
					  
					  // maximum distance between the two numbers

					  

					  

					  // 5 4 3 2 1

					  


	}
}