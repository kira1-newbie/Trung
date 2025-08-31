// cau lenh re nhanh
import java.util.Scanner;
public class bai7{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int a,b;
        a=sc.nextInt();
        b=sc.nextInt();
        if(a>b)
            System.out.println("a lon hon b "+a);
        else 
            if(a==b)
                System.out.println("a==b "+a);
            else 
                System.out.println("a be hon b "+b);
    }
}