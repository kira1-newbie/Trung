import java.util.Scanner;
public class twosum {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int target;
        target=sc.nextInt();
        int spt;
        spt=sc.nextInt();
        int[] arr=new int[spt];
        int i;
        int j=0;
        for(int a=0;a<spt;a++)
        {
            arr[a]=sc.nextInt();
        } 
        int ktra=0;   
        for(i=0;i<spt-1;i++)
        {
            for(j=i+1;j<spt;j++)
            {
                int tg=arr[i]+arr[j];
                if(tg==target)
                    {
                        ktra=1;    
                         break;
                    }             
            }
             if(ktra==1)
                break;     
        }
        if(ktra==1)
        {
        System.out.println("[" + i + ", " + j + "]");
        }
    }
}
