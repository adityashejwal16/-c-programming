import java.util.Scanner;

class LargestNo
{
    static int Maximum(int Arr[], int iLength)
    {
        int iMax = Arr[0];

        for(int i = 1; i < iLength; i++)
        {
            if(Arr[i] > iMax)
            {
                iMax = Arr[i];
            }
        }
        return iMax;
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of elements:");
        int iSize = sc.nextInt();

        int[] p = new int[iSize];

        System.out.println("Enter the elements:");
        for(int i = 0; i < iSize; i++)
        {
            System.out.printf("Element %d: ", i + 1);
            p[i] = sc.nextInt();
        }

        int iRet = Maximum(p, iSize);

        System.out.printf("Largest Number is %d%n", iRet);
    }
}
