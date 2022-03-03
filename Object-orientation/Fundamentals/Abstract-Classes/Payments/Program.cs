using Spectre.Console;

namespace Payments;

class Program 
{ 
    public static void Main(string[] args) 
    {            
       var payment = new CreditCard();
    }

    public abstract class Payment : IPayment
    {
        public DateTime DueDate { get; set; }

        public virtual void Pay(double value)
        {
            // Executar
        }
    }

    public class CreditCard : Payment { public override void Pay(double value) { base.Pay(value); } }

    public class ApplePay : Payment { public override void Pay(double value) { base.Pay(value); } }

    public class Billet : Payment { public override void Pay(double value) { base.Pay(value); } }



    public interface IPayment 
    {
        DateTime DueDate { get; set; }

        void Pay(double value);
    }
}