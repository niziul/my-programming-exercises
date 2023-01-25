using System.Collections.Generic;
using System.Linq;
using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        // var payments = new List<Payment>();
        //     payments.Add(new Payment(1));
        //     payments.Add(new Payment(2));
        //     payments.Add(new Payment(3));
        //     payments.Add(new Payment(4));
        //     payments.Add(new Payment(5));

        // foreach (var item in payments)
        // {
        //     AnsiConsole.Write(new Markup($"[blue]Id[/]: [red]{item.Id}[/]")); AnsiConsole.WriteLine();
        // }

        // foreach (var item in payments.Skip(2).Take(3))
        // {
        //     AnsiConsole.Write(new Markup($"[blue]Id[/]: [red]{item.Id}[/]")); AnsiConsole.WriteLine();
        // }

        // var paidPayments =  new List<Payment>();
        //     paidPayments.AddRange(payments);

        // var payment = payments.Where(x => x.Id == 3);
        // var payment = payments.First(x => x.Id == 3);

        // payments.Remove(payment);
        // payments.Clear();
        
        // AnsiConsole.Write(new Markup($"[blue]Id used first[/]: [red]{payment.Id}[/]"));

        IEnumerable<Payment> payments = new List<Payment>();
            payments.AsEnumerable();
            payments.ToArray();
            payments.ToList();
    }

    public class Payment { public int Id { get; set; } public Payment(int id) { Id = id; } }
}