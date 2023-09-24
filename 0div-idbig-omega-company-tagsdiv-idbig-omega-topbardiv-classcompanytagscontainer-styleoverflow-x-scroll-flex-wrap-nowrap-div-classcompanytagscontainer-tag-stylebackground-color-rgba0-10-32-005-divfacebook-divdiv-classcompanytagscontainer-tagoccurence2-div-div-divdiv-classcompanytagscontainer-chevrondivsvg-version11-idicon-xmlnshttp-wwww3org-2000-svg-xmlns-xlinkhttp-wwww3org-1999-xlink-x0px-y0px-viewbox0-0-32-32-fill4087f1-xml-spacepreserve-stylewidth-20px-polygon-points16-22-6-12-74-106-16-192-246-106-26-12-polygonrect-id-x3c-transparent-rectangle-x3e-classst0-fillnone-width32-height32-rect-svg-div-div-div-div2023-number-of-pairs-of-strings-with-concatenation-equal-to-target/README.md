<h2><a href="https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Facebook</div><div class="companyTagsContainer--tagOccurence">2</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2023. Number of Pairs of Strings With Concatenation Equal to Target</a></h2><h3>Medium</h3><hr><div><p>Given an array of <strong>digit</strong> strings <code>nums</code> and a <strong>digit</strong> string <code>target</code>, return <em>the number of pairs of indices </em><code>(i, j)</code><em> (where </em><code>i != j</code><em>) such that the <strong>concatenation</strong> of </em><code>nums[i] + nums[j]</code><em> equals </em><code>target</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = ["777","7","77","77"], target = "7777"
<strong>Output:</strong> 4
<strong>Explanation:</strong> Valid pairs are:
- (0, 1): "777" + "7"
- (1, 0): "7" + "777"
- (2, 3): "77" + "77"
- (3, 2): "77" + "77"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = ["123","4","12","34"], target = "1234"
<strong>Output:</strong> 2
<strong>Explanation:</strong> Valid pairs are:
- (0, 1): "123" + "4"
- (2, 3): "12" + "34"
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = ["1","1","1"], target = "11"
<strong>Output:</strong> 6
<strong>Explanation:</strong> Valid pairs are:
- (0, 1): "1" + "1"
- (1, 0): "1" + "1"
- (0, 2): "1" + "1"
- (2, 0): "1" + "1"
- (1, 2): "1" + "1"
- (2, 1): "1" + "1"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i].length &lt;= 100</code></li>
	<li><code>2 &lt;= target.length &lt;= 100</code></li>
	<li><code>nums[i]</code> and <code>target</code> consist of digits.</li>
	<li><code>nums[i]</code> and <code>target</code> do not have leading zeros.</li>
</ul>
</div>