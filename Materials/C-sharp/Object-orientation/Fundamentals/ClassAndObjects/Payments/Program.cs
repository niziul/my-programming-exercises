using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        /*
            Tipo de referência
            -> Endereço dos dados
        */ 

        var customer = new Customer();
        // customer.Name = "Test";
        customer.name = "Pedro";

        
        AnsiConsole.Write(new Markup($"[underline]Nome do cliente[/]:[bold blue]{customer.name}[/]"));
    }

    /*
        Diferença de classes para struct:
    */

    // struct Customer
    // {
    //     public string Name;
    // }

    class Customer 
    {
        public string ?name;
    }
}   