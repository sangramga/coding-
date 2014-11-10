package prac;

import java.io.IOException;
import java.util.Scanner;
/* 
 * dekho is program in hm logo ko ye find krna hai ki given string palindrome hai ya ni hai 
 * palindrome ka matlab hota hai age aur piche se same dikhe like aabaa or aba or aa,or sahillihas 
 * clear the meaning of palindrome number before moving forewoard. please lik kr dekho
 * now logic is simple we compare alphabets form start and end simultaneously till we reach at mid point
 */

public class Palindrome {

	public static void main(String[] args) {
		System.out.println("hello");
		Scanner in = new Scanner(System.in);
		String str = in.next(); // taking input string 
		int i =0; // first alphabet's index of string
		int j = str.length() -1; // last alphabet's index of string
		boolean flag = true; // this is a flag variable which will be used to indentify if we break the loop in between or not
		while(i<j)
		{
			if(str.charAt(i)==str.charAt(j))
			{
				i++;
				j--;
			}
			else
			{
				flag = false;
				System.out.println("String is not a palindrome");
				break;
			}
		}
		if(flag)
		System.out.println("String is a palindrome");
		

	}

}
