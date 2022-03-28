using Balta.SharedContext;

namespace Balta.SubscriptionContext;

class Subscription: Base
{
    public Plan Plan { get; set; }
    public DateTime? EndDate { get; set; }

    public bool IsInactive => EndDate <= DateTime.Now;
}