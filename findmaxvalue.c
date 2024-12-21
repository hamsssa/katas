int max(int* array, int arrayLength)
{
  int max = INT_MIN;
    
    for(int i = 0; i < arrayLength; i++)
      {
      if(array[i] > max)
        {
        max = array[i];
      }
    }
  return max;
}  
