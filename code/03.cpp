/***
  数组a[0, m] 和 a[m+1, m+n]都分别有序，将其merge成有序数组a[0, m+n]
**/


template <typename T>
void merge(T arr[], int l, int mid, int r)
{
  T aux[r-l+1];// 有栈空间问题，可以考虑将其初始化方式改为 new 
  for (int i = l; i <= r; ++i)
    aux[i-l] = arr[i];
  
  int i = l; 
  int j = mid+1;
  
  for (int k = l; k <= r; ++k) {
    if (i > mid) {
      arr[k] = aux[j-l];
      ++j;
    } else if (j > r) {
      arr[k] = aux[i-l];
      ++i;
    } else if (aux[i-l] < aux[j-l]) {
      arr[k] = aux[i-l];
      ++i;
    } else {
      arr[k] = aux[j-l];
      ++j;
    }
  }
}

