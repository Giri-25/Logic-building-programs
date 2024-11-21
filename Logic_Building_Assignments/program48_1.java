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

        Scanner sobj = new Scanner(System.in);

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

    public int AddDiagonal()
    {
        int i = 0, j = 0, isum = 0;

        if(iRow != iCol)
        {
            System.out.println("Error : No. of rows and columns are not equal");
            return 0;
        }

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(i == j)
                {
                    isum = Arr[i][j] + isum;
                }
            }
        }
        return isum;
    }
}

class program48_1
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

        int iRet = 0;

        iRet = mobj.AddDiagonal();
        System.out.println("The diagonal addition is : "+iRet);

        System.gc();
    }
}