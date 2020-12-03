import java.io.*;
public class task3_1 
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
        int n,m,i,j,no_mistakes=0;
        String[] input_mn = br.readLine().split(" ");
        n = Integer.parseInt(input_mn[0]);
        m = Integer.parseInt(input_mn[1]);
        String str_grid = br.readLine();
        char grid[][] = new char[n][m];
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                grid[i][j] = str_grid.charAt(2*((i*m)+j));
                if ((i==n-1 && grid[i][j]=='D') || (j==m-1 && grid[i][j]=='R'))
                {
                    no_mistakes++;
                }
            }
        }
    System.out.println(no_mistakes);
    }
}