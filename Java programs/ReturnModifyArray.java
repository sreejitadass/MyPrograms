import java.util.Scanner;

public class ReturnModifyArray {
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        n=sc.nextInt();
        int[] arr=new int[n];

        for(int i=0;i<n;i++)
        {
            System.out.print("Enter the element: ");
            arr[i]=sc.nextInt();
        }
        System.out.println("\nPrinting the initial array: ");
        for(int index : arr)
        {
            System.out.print(index+" ");
        }

        int[] newArray=modifyArray(arr);
        System.out.println("\nPrinting the modified array: ");
        for(int index : newArray)
        {
            System.out.print(index+" ");
        }
        sc.close();
    }

    static int[] modifyArray(int[] auxArray)
    {
        for(int i=0;i<auxArray.length;i++)
        {
            auxArray[i]*=auxArray[i];
        }
        return (auxArray);
    }
    
}
