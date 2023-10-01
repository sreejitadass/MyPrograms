import java.util.Scanner;

public class Average {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n=sc.nextInt();
        int []arr=new int[n];
        for(int i=0;i<n;i++)
        {
            System.out.print("Enter the element "+(i+1));
            arr[i]=sc.nextInt();
        }
        double avg=0.0;
        double sum=0.0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        avg=sum/n;
        System.out.println("The average is: "+avg);

        sc.close();
    }
}