using Balta.NotificationContext;

namespace Balta.SharedContext;

public class Article : Content 
{ 
    public IList<Notification> Notifications { get; set; }

    public void Add()
    {
        
    }
    public Article(string title, string url)
        :base(title, url)
    {

    }
}
