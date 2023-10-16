bool Delete( int index )
{
    bool bRet = false;
    if ( index >= 0 && index < size )
    {
        int i;
        for (i = index+1;i < size;i++)
        arr[i-1] = arr[i];
        size--;
        bRet = true;
    }
    return bRet;
}