namespace Balta.ContentContext;

public class CareerItem
{
    public CareerItem(int order, string title, string description, Course course)
    {
        if(course == null)
            throw new SystemException("O curso não pode ser nulo");

        Order = order;
        Title = title;
        Description = description;
        Course = course;
    }

    public int Order { get; set; }
    public string Title { get; set; }
    public string Description { get; set; }
    public Course Course { get; set; }
}