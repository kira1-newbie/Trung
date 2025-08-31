import java.util.Scanner;
public class bai14{
    public static int snt(int a)
    {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
                return 0;
        }
        return 1;
    }
    public static void main(String[] args)
    {
         int a;
        Scanner sc=new Scanner(System.in);
        System.out.println("Nhap so: ");
        a=sc.nextInt();
        if(snt(a)==0)
            System.out.println("Khong phai la so nguyen to");
        else 
            System.out.println("La so nguyen to "+a);
    }
}