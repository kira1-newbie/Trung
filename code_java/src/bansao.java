import java.util.Scanner;
public class bansao
{
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        int spt;
        System.out.println("nhap spt: ");
        spt=sc.nextInt();
        int[] arr = new int[spt];
        for(int i=0;i<spt;i++)
        {
            System.out.println("Phan tu thu "+i);
            arr[i]=sc.nextInt();
        }
        boolean ktra=false;
        for(int i=0;i<spt;i++)
        {
            int j=spt-1;
            if(arr[i]==arr[j]&i!=j)
            {
                ktra=true;
                break;
            }
            j--;
        }
        System.out.println(ktra);
    }
}