package prac;

/* IMPORTANT: class must not be public. */


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;


class TestClass {
    public static void main(String args[] ) throws Exception {
       BufferedReader br =  new BufferedReader(new InputStreamReader(System.in));

       String str = br.readLine();
        BigInteger len = new BigInteger(String.valueOf(str.length()));
        int N = Integer.parseInt(br.readLine());
        for (int i = 0; i < N; i++) {
            String t1 = br.readLine();
            String [] in = t1.split(" ");
            
            BigInteger a = new BigInteger(in[0]);
            BigInteger b = new BigInteger(in[1]);
            if(a.compareTo(len)>0)
            {
            	a = a.mod(len);
            }
            if(b.compareTo(len)>0)
            {
            	b = b.mod(len);
            }
         String tmp = a.toString();
         
            int A = Integer.parseInt(tmp);
            tmp = b.toString();
            int B = Integer.parseInt(tmp);
         //   System.out.println(str.charAt(A)+" "+str.charAt(B));
            if(str.charAt(A-1)==str.charAt(B-1))
            	System.out.println("Yes");
            else
            	System.out.println("No");
        }
   

       
    }
}
