import java.util.Scanner;
public class bai9 {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int a;
        a=sc.nextInt();
        switch(a)
        {
            case 1:
                System.out.println("1");
                break;
            case 2:
                System.out.println("2");
                break;
            default:   
                System.out.println("0");
                break;
         }
    }
}
