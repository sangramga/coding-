package prac;

import java.util.Scanner;

/*
 * A number is armstrong if the sum of cubes of individual digits of a number is equal to the number itself
 * jasie ki number 371 isme 3 digits hain 
 * digit at ones place is 1
 * digit at tens place is 7
 * digit at hundred's place is 3
 * inke cube hain 
 * 1^3 = 1
 * 7^3 343
 * 3^3 = 27
 * and 1 + 343 + 27  = 371
 * isiliye isko armstrong numebr bolte hain
 * 
 * is program mein bhut simple logic hain 
 * first step : gieven number ki copy le lo
 * second step ek nya variable bnao jisme hm log copy variable ke digits ka cube add krenge
 * suppose nya vaiable "ans" hai , intialize it to 0
 * 
 * third step : copy variable ke saare digits nilklo ek ek krke
 * eg: 
 * 371 aur hme chaiye 3 , 7 and 1
 * use % operator this will give you remainder
 * (371%10) = 1    1 mil gya
 * ab (371/10) = 37
 * 
 * now (37%10) = 7    7 mil gya
 * ab (37/10) = 3
 * 
 * (3%10) = 3  3 mil gya
 * 3/10 =0 loop yha bnd ho jaega
 *  
 *  
 *  aur har digit ke milte hi us digit ke cube ko "ans" mein add kr do
 *  
 *  last mein check kr ans = n
 *  if true then numebr is armstring otherwise not 
 */
public class Armstrong {

	public static void main(String[] args) {
		Scanner  in = new Scanner(System.in);
		int n = in.nextInt(); // input number 
		int copy = n; // taking copy of given number
		int ans =0;
		while(copy>0)
		{
			int tmp = copy%10;
			ans = ans + (tmp*tmp*tmp);
			copy = copy/10;
		}
		if(ans==n)
			System.out.println("YES number is armstring ");
		else
			System.out.println("NO number is not armstring ");
		}
	}


