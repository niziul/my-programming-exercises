using Balta.SharedContext.Enums;

namespace Balta.SharedContext;

public class Course : Content 
{ 
    public Course(string title, string url)
        :base(title, url)
    {

    }
    public string Tag { get; set; } 
    public IList<Module> Modules { get; set; } 
    public int DurationInMinutes { get; set; }
    public EContentLevel Level { get; set; }
}