import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int A,int B)
    {
        this.iRow = A;
        this.iCol = B;
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        int i = 0, j = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the data : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Matrix data : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void ReverseColumn()
    {
        int i = 0, j = 0;
        int temp = 0;

        System.out.println("Reversing of rows : ");

        for(j = 0; j < iCol; j++)
        {
            int start = 0;
            int end = iRow - 1;
            while(start < end)
            {
                temp = Arr[start][j];
                Arr[start][j] = Arr[end][j];
                Arr[end][j] = temp;
                start++;
                end--;
            }
        }
    }
}

class program49_3
{
    public static void main (String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no. of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter no. of columns : ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1,No2);

        mobj.Accept();
        mobj.Display();

        mobj.ReverseColumn();

        mobj.Display();
        
        System.gc();
    }
}