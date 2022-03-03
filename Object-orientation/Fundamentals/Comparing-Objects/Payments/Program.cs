using Spectre.Console;

namespace Payments;

class Program 
{ 
    public static void Main(string[] args) 
    {            
        var personA = new Person(1, "Hunter");
        var personB = new Person(1, "Hunter");

        // AnsiConsole.Write(personA == personB);
        // AnsiConsole.Write(personA.Id == personB.Id);
        AnsiConsole.Write(personA.Equals(personB));
    }

    public class Person : IEquatable<Person> 
    { 
        public int Id { get; set; } 
        public string Name { get; set; } 
        
        public Person(int id, string name) 
        {
            Id = id; 
            Name = name; 
        }


        public bool Equals(Person person) => Id == person.Id; 
    }

}