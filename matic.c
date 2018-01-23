int main()
{
  int arr[] = { 20, 15, 5, 0, 10 };
  int a = sizeof(arr)/sizeof(arr[0]);
 
  (checkIsAP(arr, a))? (cout << "Yes" << endl) :
                       (cout << "No" << endl);
 
  return 0;
}
