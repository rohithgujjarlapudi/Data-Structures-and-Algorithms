import java.util.*;

public class LinearSearch {
    public static void main(String [] args){
        
        int[] arr = { 3, 4, 1, 7, 5 };
        int n = arr.length;
        int data=3;
        for(int i=0;i<n;i++)
          {
            if(data==arr[i])
            {
              System.out.println("the number is found at the index "+ i);
              return;
            }
            
              }
              System.out.println("Not found");
        

    }
}
