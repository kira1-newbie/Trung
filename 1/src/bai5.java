// xuat nhap
import java.util.Scanner;
public class bai5 {
    public static void main(String[] args)
    {
        // xuat 
        // \t
        System.out.println("\ttoi la bim");
        // \n
        System.out.println("\nmet");
        // \"
        System.out.println("\"toi la bim\" ");
        // nhap 
        Scanner sc = new Scanner(System.in);
        String b=sc.nextLine();
        int a = sc.nextInt();
        System.out.println(b);
        System.out.println(a);
        sc.close();
    }
}
