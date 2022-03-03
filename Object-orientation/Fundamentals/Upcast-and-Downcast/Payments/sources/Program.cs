using Spectre.Console;

namespace Payments;

class Program 
{ 
    public static void Main(string[] args) 
    {            
        // Upcast:
        var person = new Person();
            person = new IndividualPerson();
        // ::
        
        var legalEntity = new LegalEntity();     
        var individualPerson = new IndividualPerson();

        // Downcast:
        individualPerson = (IndividualPerson)person;
        // ::
    }

    public class Person { public string? Name { get; set; } }
    public class LegalEntity : Person { public string? CNPJ { get; set; } }
    public class IndividualPerson : Person { public string? CPF { get; set; } }
}