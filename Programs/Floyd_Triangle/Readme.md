<html>
  <head>
    <h1>Floyd's Triangle</h1>
  </head>
  <body>
    <table>
      <tr>
        <th>Sr. No</th>
        <th>Content</th>
        <th>Pattern</th>
        <th>Formula</th>
      </tr>
      <tr>
        <td>1.</td>
        <td>Pattern</td>
        <td>n=5<br>1<br>2 3<br>4 5 6<br>7 8 9 10<br>11 12 13 14 15</td>
        <td>-</td>
      </tr>
      <tr>
        <td>2.</td>
        <td>Total number of elements in Triangle<br> Last element of each row</td>
        <td>n=5<br>1<br>2 3<br>4 5 6<br>7 8 9 10<br>11 12 13 14 <code>15</code><br><code>ans = 15</code></td>
        <td>S=(n/2)*(2a+(n-1)/d)<br><br>
          a=1, d=1<br>
          S=(n/2)*(2+(n-1))
        </td>
      </tr>
      <tr>
        <td>3.</td>
        <td>Sum of nth row</td>
        <td>n=5<br>1<br>2 3<br>4 5 6<br>7 8 9 10<br><code>11 12 13 14 15</code><br><code>ans = 65</code></td>
        <td>S=n(sqr(n)+1)/2</td>
      </tr>
    </table>
  </body>
</html>