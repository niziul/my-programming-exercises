using Spectre.Console;

namespace Payments;

class Program
{
    static void Main(string[] args)
    {
        var person = new Person();
        var payments = new Payments();
        var subscription = new Subscription();

        var context = new DataContext<IPerson, Payments, Subscription>();
            context.Save(person);
            context.Save(payments);
            context.Save(subscription);
    }
}

public class DataContext<P, PA, S>
    where P : IPerson
    where PA : Payments
    where S : Subscription
{
    public void Save(P entity) { }
    public void Save(PA entity) { }
    public void Save(S entity) { }
}

public interface IPerson { }


public class Person : IPerson { }
public class Payments { }
public class Subscription { }