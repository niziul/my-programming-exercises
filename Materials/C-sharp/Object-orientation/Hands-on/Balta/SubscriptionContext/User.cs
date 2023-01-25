using Balta.SharedContext;

namespace Balta.SubscriptionContext;

class User : Base
{
    public string Username { get; set; }
    public string Password { get; set; }
}