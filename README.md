## UVA11321_Sort_sort_sort_49
+ website : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2296
------
```c++
if((x%m)!=(y%m)) //오름 차순 배열 
{
  return (x%m)<(y%m);
}
else
{
  if(abs(x%2)!=abs(y%2)) //만약에 하나는 홀수고 하나는 짝수면 홀수가 짝수보다 앞에 있음; 
  {
    return abs(x%2)>abs(y%2);
  }
  else if(abs(x%2)==1&&abs(y%2)==1) //둘다 홀수면 큰 수가 앞에; 
  {
    return x>y;
  }
  else if(abs(x%2)==0&&abs(y%2)==0) //둘다 짝수면 작은 수가 앞에; 
  {
    return x<y;	
  }
}
```
-----
The most important thing is sorting.
+ If A is odd and B is even -> the odd number will be the first.
+ If A,B also odd -> the bigger one will be the first.
+ If A,B also even -> the small one will be the first.
