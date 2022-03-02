using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        var TheTitle = new Rule();
            TheTitle.RuleTitle("[red]Payment Information[/]");
            TheTitle.Alignment = Justify.Left;

        var Payments = new Payments();
            Payments.NumberBillet = "123456";
            Payments.DueDateOn = DateTime.Now;
        

        // AnsiConsole.Clear();
        AnsiConsole.Write(TheTitle);
        AnsiConsole.Write(new Markup($"Due Date: [dim #00ff00]{Payments.DueDateOn}[/];"));
        AnsiConsole.WriteLine();
        AnsiConsole.Write(new Markup($"Number Billet: [dim #00ff00]{Payments.NumberBillet}[/];"));
    }

    /*
        Modificadores de acesso:
            - Private, protected, internal e public
    */

    public class Payments
    {
        // int counter = 0;
        public string ?NumberBillet;
        /*
            Tipos para a criação de propriedades:
        */

        /// propg:
        // public DateTime test { get; private set; }

        /// prop:
        public DateTime DueDateOn { get; set; }

        /// propfull:
        private DateTime _dateOfPayment;
        public DateTime DateOfPayment
        {
            get 
            {
                AnsiConsole.Write("Lendo o valor!"); 
                return _dateOfPayment; 
            }
            set 
            {
                AnsiConsole.Write("Atribuindo o valor!");
                 _dateOfPayment = value; 
            }
        }
        
        DateTime DueDate;
        Address ?BillingAddress;

        void Pay(){}

    }

    public class Address
    {
        string ?ZipCode;
    }
} 