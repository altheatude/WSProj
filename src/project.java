public Loop
{
    public static String loop( String quote)
    {
        System.out.println(quote);
        return loop(String quote);
    }
}
