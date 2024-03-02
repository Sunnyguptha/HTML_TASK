public class Main {
  //called function
  public static void dosum(int n1, int n2,int n3)
  {
    int result;
    result=(n1+n2+n3)/3;
    System.out.printf("%d\n",result);
  }
    public static void main(String[] args) {
     //calling function
     dosum(12,34,54);
     dosum(38,53,75);
  }
}