package com.LeetCode;

/* valueOf method returns the string representation of the char[] .
 * Note: toString returns the string representation of an object. So, it returns the address.  */

/**
 * @author npdar
 *
 */

public class ReverseStringMethod 
{
	
	public String reverseString(String s) 
    {
		 if(s == "" || s == null)
	          return s;
	          //System.out.println("String is :"+ s);
	        
	       	char[]  a= s.toCharArray();
	            int left,right= s.length()-1;
	       	for( left =0;left<right;  left++, right --)
	            {
	       		System.out.println("Char is" + a[left]);
	                char temp =a[left];
	            	a[left]=a[right];
	            	a[right]=temp;
	            	System.out.println("Char is" + a[left]);
	            	
	            }
	           //s= String.valueOf(a);
	            	
	            	return String.valueOf(a);
       
        
    }

}
