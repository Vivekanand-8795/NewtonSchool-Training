public class halfpyramid{
    public static void main(String[] args) {
        int n=4;
        //outer loop
        for(int i=1;i<=n;i++){
            //inner loop
            for(int k=1;k<=i;k++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
