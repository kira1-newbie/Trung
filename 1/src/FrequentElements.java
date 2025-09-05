import java.util.Scanner;
class array
{
    int timkiem(int [][]a,int []b,int i,int dem)
    {
        for(int j=0;j<dem;j++)
        {
            if(a[j][0]==b[i])
                return j;
        }
            return -1;
    }
    int [][] xh(int [][]a,int []b,int k)
    {
        int dem=0;
        for(int i=0;i<b.length;i++) 
        {
            int temp=timkiem(a,b,i,dem);
            if (temp!=-1)
            {
                a[temp][1]+=1;
            }   
            else 
            {
                a[dem][0]=b[i];
                a[dem][1]+=1;
                dem++;
            }     
        }
    return a;
    }
    int [][] sapxep(int [][]a)
    {
        for(int i=0;a[i][1]!=0;i++)
         for(int j=i+1;a[j][1]!=0;j++)
         {
            int temp1;
            int temp2;
            if(a[i][1]<a[j][1])
            {
                temp1=a[i][1];
                temp2=a[i][0];
                a[i][1]=a[j][1];
                a[j][1]=temp1;
                a[i][0]=a[j][0];
                a[j][0]=temp2;

            }
         }
         return a;
    }
}                                                                           
public class FrequentElements
{
    public static void main(String[] args)
{
    int spt;
    Scanner sc= new Scanner(System.in);
    spt=sc.nextInt();
    int[] arr= new int[spt]; 
    for(int i=0;i<spt;i++)
    {
        arr[i]=sc.nextInt();
    }
    int k;
    k=sc.nextInt();
    int[][] arr1=new int[arr.length+1][2];
    array mang=new array();
    arr1=mang.xh(arr1, arr, k);
    arr1=mang.sapxep(arr1);
    System.out.println("The most "+k+" frequent elements are:");
    for(int i=0;i<k;i++)
    {
        System.out.println(arr1[i][0]+" ");
    }
}
}
