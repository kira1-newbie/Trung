import java.util.Scanner;
class mang{
    int [] outs(int out[],int []nums)
    {
        int right=1;
        int left=1;
        for(int i=0;i<nums.length;i++)
            {
                if(i-1<0)
                out[i]=left;
                else 
                {out[i]=left*nums[i-1];
                    left=out[i];
                }
            }   
       for(int j=nums.length-1;j>=0;j--)
        {
            out[j]=out[j]*right;
            right=right*nums[j];
        }
        return out;
    }
}
public class tichmang {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int spt;
        spt=sc.nextInt();
        int []nums= new int[spt];
        for(int i=0;i<spt;i++)
        {
            nums[i]=sc.nextInt();
        }
        int []out=new int[spt];
        mang x=new mang();
        out=x.outs(out,nums);
        for(int i=0;i<out.length;i++)
            System.out.println(out[i]);
    }
}
