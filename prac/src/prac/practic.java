package prac;

import java.util.Date;

public class practic {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Date d = new Date();
		String str = d.toString();
		String str1 = str;
		str = "Day_"+str.substring(8,10)+"_Min_"+str.substring(14, 16);
		System.out.println(str1);
		System.out.println(str);
		
	}

}