int Liters(double time) 
{
    double consumo = 0.5; 
    double result = time * consumo;
    return (int)floor(result);
}
