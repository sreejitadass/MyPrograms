import java.util.Scanner;

public class PalindromeWord {
    public static void main(String[] args) {
        String st;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the sentence: ");
        st=sc.nextLine();

        st=st+" ";
        String word="";
        for(int i=0;i<st.length();i++)
        {
            char ch=st.charAt(i);
            if(ch!=' ')
                word=word+ch;
            else
            {
                if(checkifPalindrome(word))
                    System.out.println(word);
                word="";
            }
        }
        sc.close();
    }

    static boolean checkifPalindrome(String word)
    {
        int n=word.length();
        word=word.toLowerCase();
        for (int i=0; i<n; i++,n--)
           if (word.charAt(i) != word.charAt(n - 1))
              return false;      
        return true;
    }
}
