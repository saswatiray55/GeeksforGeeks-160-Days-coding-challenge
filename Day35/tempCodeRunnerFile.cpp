int low = 0, high = n-1;
    int res = n+k;
    
    while(low <= high)
    {
        int mid = low +(high - low) /2;
        if(arr[mid] > (mid + k))
        {
            res = mid+k;
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return res;