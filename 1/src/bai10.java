import java.util.Scanner;
// cau lenh lap while
public class bai10{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        String x;
        int a;
        System.out.println("Nhap chuoi: ");
        x=sc.nextLine();
        System.out.println("Nhap so lan lap(>0): ");
        a=sc.nextInt();
        while(a!=0)
        {
            System.out.println(x);
            a--;
        }
    }
}
