using Spectre.Console;

namespace Payments;

class Program 
{ 
    public static void Main(string[] args) 
    {            
        // Upcast:
        var person = new Person();
            person = new Individual();
        // ::

        var individual = new Individual();
        var legalEntity = new LegalEntity();     

        // Downcast:
        individual = (Individual)person;
        // ::
    }

    public class Person { public string? Name { get; set; } }
    public class Individual : Person { public string? CPF { get; set; } }
    public class LegalEntity : Person { public string? CNPJ { get; set; } }
}