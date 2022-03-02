using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        var TheTitle = new Rule();
            TheTitle.RuleTitle("[red]Payment Information[/]");
            TheTitle.Alignment = Justify.Left;

        // var Payments = new Payments();
        var Payments = new CreditCard();
            Payments.PayOn("12345");

        // AnsiConsole.Clear();
        // AnsiConsole.Write(TheTitle);
        // AnsiConsole.Write(new Markup($"Due Date: [strikethrough #00ff00]empty[/];"));
        // AnsiConsole.WriteLine();
        // AnsiConsole.Write(new Markup($"Number Billet: [strikethrough #00ff00]empty[/];"));
    }

    public class Payments
    {
        public DateTime DueDate { get; set; }
        Address ?BillingAddress;

        /*
            método construtor:
        */

        /// Consultor paramitalas
        // public Payments() { }

        // public Payments(DateTime dueDate)
        public Payments()
        {
            DueDate = DateTime.Now;

            var Start = new Rule("[bold green]Starting[/]");
                Start.Alignment = Justify.Left;

            AnsiConsole.Clear();
            AnsiConsole.Write(Start);

        }

        /*
            sobrecarga de métodos:
        */
        void Pay(string number) { }
        void Pay(string number, DateTime dueDate) { }
        void Pay(string number, DateTime dueDate, bool payingAfterTheDueDate = false) { }

        /*
            sobreescrita de métodos:
        */
        public virtual void PayOn(string number) { AnsiConsole.Write(new Markup("[underline blue]Pay[/]!")); }
    }

    public class CreditCard : Payments
    {
        // public CreditCard(DateTime dueDate) { }
        // public CreditCard(DateTime dueDate): base(dueDate) { }

        public override void PayOn(string number)
        {
            base.PayOn(number);
            AnsiConsole.WriteLine();
            AnsiConsole.Write(new Markup("[underline blue]Pay[/] [underline red]card[/]!"));
        }
    }
    public class Address
    {
        string ?ZipCode;
    }
}