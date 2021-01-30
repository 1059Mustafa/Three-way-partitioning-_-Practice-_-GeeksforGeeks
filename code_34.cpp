class Solution{   
public:
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int n = array.size();
        int start = 0, end = n-1;
     
        for (int i=0; i<=end;)
        {
            // swapping the element with those at start 
            // if array element is less than a
            if (array[i] < a)
                swap(array[i++], array[start++]);
     
           // swapping the element with those at end
           // if array element is greater than b
            else if (array[i] > b)
                swap(array[i], array[end--]);
            
            // else just move ahead
            else
                i++;
        }
    }
};
