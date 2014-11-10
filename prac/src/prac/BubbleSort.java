package prac;
/* 
 * bubble sort is the simplest sorting algorithm 
 * isme kya krte hm bs right element ko check krte hain  agar wo left wale se chota hai to replace them
 * eg 5 4 3 2 1
 * 4 5 3 2 1
 * 4 3 5 2 1
 * 4 3 2 5 1
 * 4 3 2 1 5
 * 
 *  similarly for each element we will repeat this for each element 
 */


public class BubbleSort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] num = { 10 ,9, 8, 7,6 ,5,4,3,2,1};
		for(int i =0;i<10;i++)
		{
			for(int j =0;j<10-i-1;j++)
			{
				if(num[j+1]<num[j])
				{
					int tmp = num[j];
					num[j] = num[j+1];
					num[j+1] = tmp;
				}
			}
			for(int j =0;j<10;j++)
				System.out.print(num[j]+" ");
			System.out.println();
		}

	}

}
