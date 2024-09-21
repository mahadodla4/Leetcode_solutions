class Solution {
    public List<Integer> lexicalOrder(int n) {
        List<String>arr = new ArrayList<>();
        List<Integer>results = new ArrayList<>();
        for(int i=1; i<=n; i++)
        {
            String a=String.valueOf(i);
            arr.add(a);
        }
        Collections.sort(arr);
        for(String i:arr)
        {
            int b= Integer.parseInt(i);
            results.add(b);
        }
        return results;
    }
}