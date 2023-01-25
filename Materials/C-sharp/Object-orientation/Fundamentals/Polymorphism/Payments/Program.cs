using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        var TheTitle = new Rule();
            TheTitle.RuleTitle("[red]Payment Information[/]");
            TheTitle.Alignment = Justify.Left;

        var PaymentBillet = new PaymentBillet();
            PaymentBillet.Pay();
            PaymentBillet.DueDate = DateTime.Now;
            PaymentBillet.BilletNumber = "8298401";


        AnsiConsole.Clear();
        AnsiConsole.Write(TheTitle);
        AnsiConsole.Write(new Markup($"Due Date: [underline #00ff00]{PaymentBillet.DueDate}[/];"));
        AnsiConsole.WriteLine();
        AnsiConsole.Write(new Markup($"Number Billet: [italic #ff5f5f]{PaymentBillet.BilletNumber}[/];"));
    }

    class Payments
    {
        public DateTime DueDate;

        public virtual void Pay(){}

       
    }

    class PaymentBillet : Payments
    {
        public string ?BilletNumber;
        public override void Pay()
        {
            // Regra do boleto
            base.Pay();
        }
    }

    class CreditCardPayment : Payments
    {
        public string ?Number;

        public override void Pay()
        {
            // Regra do Cartão de crédito
            base.Pay();
        }
    }
}