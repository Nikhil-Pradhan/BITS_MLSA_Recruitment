import java.io.*;
public class task3_2 
{
    public boolean isCoprime(int num1,int num2)
    {
        int i;
        boolean result=true;
        for (i=2;i<=num1;i++)
        {
            if (num1%i==0&&num2%i==0)
            {
                result=false;
                break;
            }
        }
        return result;
    }
    public static void main(String[] args) throws IOException
    {
        task3_2 obj = new task3_2();
        BufferedReader br = new BufferedReader (new InputStreamReader (System.in));
        int a,b,i,x=1;
        String str_AB[] = br.readLine().split(" ");
        a = Integer.parseInt(str_AB[0]);
        b = Integer.parseInt(str_AB[1]);
        i = a/2;
        if (obj.isCoprime(a,b))
            x=a;
        else
        {
            while(i>1)
            {
                if (a%i==0 && obj.isCoprime(i,b))
                {
                    x=i;
                    break;
                }
                i--;
            }
        }
        System.out.println(x);
    }
}