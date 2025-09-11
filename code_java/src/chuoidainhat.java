import java.util.*;

class mang123 {
    int max1(int[] nums) {
        if (nums == null || nums.length == 0) return 0;

        HashSet<Integer> set = new HashSet<>();
        for (int x : nums) set.add(x); 
        int best = 1;
        for (int x : set) {
            int i=x;
            int dem=1;
            if(set.contains(i-1)==false)
            {
            while(set.contains(i+1)==true)
            {
                i++;
                dem++;
            }
            if(dem>best) best=dem;
            }
        }
        return best;
    }
}

public class chuoidainhat {
    public static void main(String args[]) {
        Scanner sc  = new Scanner(System.in);
        int spt = sc.nextInt();
        int[] nums = new int[spt];
        for (int i = 0; i < spt; i++) nums[i] = sc.nextInt();

        mang123 chuoi = new mang123();
        int dodai = chuoi.max1(nums);
        System.out.println(dodai); 
    }
}
