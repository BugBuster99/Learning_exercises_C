import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        String s;
        Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        int len=s.length();
        System.out.println(len);
        int i,temp,j;
        temp=len-1;
        for(i=len-1;i>=0;i--){
            if(s.charAt(i)==' '){
                for(j=i+1;j<=temp;j++){
                    System.out.print(s.charAt(j));
                    temp=i;
                }
                
            }
        }
    }
}
