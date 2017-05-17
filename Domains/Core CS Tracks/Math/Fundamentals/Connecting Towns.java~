
import java.io.*;  
 import java.util.*;  
 import java.text.*;  
 import java.math.*;  
 import java.util.regex.*;  
 public class Solution {  
   public static void main(String[] args) throws Exception{  
     /*  
   {  
   } */  
     int t;  
     BufferedReader br = new BufferedReader(new InputStreamReader(System.in));  
     String nn = br.readLine();  
     t = Integer.parseInt(nn);  
     while((t--)>0){  
       int num,sum,i;  
     BigInteger array = new BigInteger("1");  
       String n = br.readLine();  
       num = Integer.parseInt(n);  
       String nns[] = br.readLine().split(" ");  
     for(i=0;i<num-1;i++)  
     {  
       sum = Integer.parseInt(nns[i]);  
       array = array.multiply(new BigInteger(sum+""));  
     }  
       array = array.modPow(new BigInteger(1+""),new BigInteger(1234567+""));  
     System.out.println(array)  ;  
     }  
   }  
 }
