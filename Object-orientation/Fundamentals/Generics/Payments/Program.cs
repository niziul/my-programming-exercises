using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        var person = new Person();
        var payments = new Payments();
        var subscription = new Subscription();

        var context = new DataContext<Person, Payments, Subscription>();
            context.Save(person);
            context.Save(payments);
            context.Save(subscription);
    }
}

public class DataContext<P, PA, S>
{
    public void Save(P entity) { }
    public void Save(PA entity) { }
    public void Save(S entity) { }
}

class Person { }
class Payments { }
class Subscription { }