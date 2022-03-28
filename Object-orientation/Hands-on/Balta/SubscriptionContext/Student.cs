namespace Balta.SubscriptionContext;

class Student : User
{
    public string Name { get; set; }
    public string Email { get; set; }
    public User User { get; set; }
}