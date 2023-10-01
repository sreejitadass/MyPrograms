import java.util.Scanner;

public class Delimiters {
    public static void main(String[] args) {
        String st="I,Love,Souradip";
        Scanner sc=new Scanner(st).useDelimiter(",");
        while(sc.hasNext())
            System.out.println(sc.next()+" ");

        sc.close();
    }   
}
