using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        var LineWithTheTitle = new Rule();
            LineWithTheTitle.RuleTitle("[red]Payment Information[/]");
            LineWithTheTitle.Alignment = Justify.Left;

        var PaymentBillet = new PaymentBillet();
            PaymentBillet.Pay();
            PaymentBillet.DueDate = DateTime.Now;
            PaymentBillet.BilletNumber = "8298401";


        AnsiConsole.Clear();
        AnsiConsole.Write(LineWithTheTitle);
        AnsiConsole.Write(new Markup($"Due Date: [underline #00ff00]{PaymentBillet.DueDate}[/];"));
        AnsiConsole.WriteLine();
        AnsiConsole.Write(new Markup($"Number Billet: [italic #ff5f5f]{PaymentBillet.BilletNumber}[/];"));
    }

    class Payments
    {
        public DateTime DueDate;

        public void Pay(){}

        
    }

    class PaymentBillet : Payments
    {
        public string ?BilletNumber;
    }

    class CreditCardPayment : Payments
    {
        public string ?Number;
    }
}