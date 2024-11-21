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

    public boolean ChkSparse()
    {
        int i = 0, j = 0;
        int iZero = 0;
        int iNotZero = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == 0)
                {
                    iZero++;
                }
                else
                {
                    iNotZero++;
                }
            }
        }
        if(iZero > iNotZero)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program49_5
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

        boolean bRet = false;

        bRet = mobj.ChkSparse();

        if(bRet == true)
        {
            System.out.println("It is a sparse matrix..");
        }
        else
        {
            System.out.println("It is not a sparse matrix..");
        }
        
       System.gc();
    }
}