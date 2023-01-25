using Spectre.Console;

namespace Payments;

class Program 
{ 
    public static void Main(string[] args) 
    {            
       
    }

    public class Payment : IPayment
    {
        public DateTime DueDate { get; set; }

        public void Pay(double value)
        {
            
        }
    }

    public class CreditCard : IPayment
    {
        public DateTime DueDate { get; set; }

        public void Pay(double value)
        {
            
        }
    }

    public interface IPayment 
    {
        DateTime DueDate { get; set; }

        void Pay(double value);
    }
}