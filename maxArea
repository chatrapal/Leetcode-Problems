int maxArea(int* height, int heightSize){
    int i,j;
    int area=0,area1=0;
    int xaxis;
    int yaxis;
    i=0;
    j=heightSize-1;
    while((i-j)!=0)
    {
        xaxis=(i-j)<0?(j-i):(i-j);
        
        yaxis = (height[i]<=height[j])?height[i]:height[j];
        
        area = (xaxis)*(yaxis);
      if(height[i]<height[j])
      {
          i++;
      }
        else
        {
            j--;
        }
        
        if(area1>area)
            area=area1;
        else
            area1=area;
    }
    return area1;

}
