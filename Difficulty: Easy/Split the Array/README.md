<h2><a href="https://www.geeksforgeeks.org/problems/split-the-array0238/1">Split the Array</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[] </strong>of integers, the task is to count the number of ways to split given array elements into two disjoint groups such that the XOR of elements of each group is equal.<br><strong>Note: </strong>The answer could be very large so print it by doing modulo with 10<sup>9</sup>&nbsp;+ 7.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [1, 2, 3]
<strong>Output :</strong> 3
<strong>Explanation: </strong>{(1),(2, 3)}, {(2),(1, 3)}, {(3),(1, 2)} are three ways with equal XOR value of two groups.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [5, 2, 3, 2]
<strong>Output :</strong> 0<br><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">No way to split into </span><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> two groups whose XOR is equal.</span></span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1&lt;=arr.size()&lt;=10<sup>6</sup><br>1&lt;=arr[i]&lt;=10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;