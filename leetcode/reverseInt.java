import java.util.*;

public class reverseInt {

    static int reverseStr(String n){
		Stack<Character> stack = new Stack<Character>();
		String s= "";
		
		int len = n.length();
		for(int i=0;i<len;i++){
		    stack.push(n.charAt(i));
		}
		while(!stack.empty()){
		    s += stack.pop().toString();
		}
		int ans = Integer.parseInt(s);
        return ans;
    }

    public static void main(String[] args) {
        
        int x = -321;
		
        if(x<0){
            x = -x;
            String n = Integer.toString(x);
            int ans = reverseStr(n);
            System.out.println(-ans);
        }
        else{
            String n = Integer.toString(x);
            int ans = reverseStr(n);
            System.out.println(ans);
        }
		
		

    }
}
