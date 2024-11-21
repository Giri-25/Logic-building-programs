import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];
    public int iNo;

    public Matrix(int A,int B,int C)
    {
        this.iRow = A;
        this.iCol = B;
        this.iNo = C;
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

    public int NumberFreq()
    {
        int i = 0, j = 0, ifreq = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    ifreq++;
                }
            }
            
        }
        return ifreq;
    }
}

class program48_2
{
    public static void main (String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no. of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter no. of columns : ");
        int No2 = sobj.nextInt();

        System.out.println("Enter the no. whose occurance you want : ");
        int No3 = sobj.nextInt();

        Matrix mobj = new Matrix(No1,No2,No3);

        mobj.Accept();
        mobj.Display();

        int iRet = 0;

        iRet = mobj.NumberFreq();
        System.out.println("The frequency of number is : "+iRet);

        System.gc();
    }
}