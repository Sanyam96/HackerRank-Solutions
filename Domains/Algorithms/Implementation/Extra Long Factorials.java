import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        String fact;

        BigInteger fact1 = new BigInteger("1");
        for( int i = 1; i <= n; i++)
        {
            fact1 = fact1.multiply(new BigInteger(i + ""));
        }
    
        fact = fact1.toString();
        
        System.out.println(fact);
    }
}
