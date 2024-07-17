# Magic Grid

The program generates a grid whit a number of row like this:

1 3 5 7 9 11 13 15 <br>
2 3 6 7 10 11 14 15 <br>
4 5 6 7 12 13 14 15 <br>
8 9 10 11 12 13 14 15 <br>

By indicating the numbers of the lines where it is found, it is possible to find the number, thanks to the formula ∑ 2^ (here the number of columns from 0)

## Example

Number: ***11***

0 - 1 3 5 7 9 ***11*** 13 15 <br>
1 - 2 3 6 7 10 ***11*** 14 15 <br>
2 - 4 5 6 7 12 13 14 15 <br>
3 - 8 9 10 ***11*** 12 13 14 15 <br>

Columns: 0, 1, 3 <br>
Number = 2^0 + 2^1 + 2^3 = 1 + 2 + 8 = ***11***
