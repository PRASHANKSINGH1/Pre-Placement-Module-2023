class Solution {
    public List<String> letterCasePermutation(String S) {
        List<String> result = new ArrayList<>();
        if(S.length() == 0){
            result.add("");
            return result;   
        }
        dfs(result, S.toCharArray(), 0, new StringBuilder());
        return result;
    }
    private void dfs(List<String> result, char[] arr, int index, StringBuilder sb){
        if(index == arr.length){
            result.add(sb.toString());
        }else if(index < arr.length){
            if(arr[index] >= '0' && arr[index] <= '9'){
                sb.append(arr[index]);
                dfs(result, arr, index + 1, sb);
                sb.deleteCharAt(index);
            }else{
                sb.append(Character.toUpperCase(arr[index]));
                dfs(result, arr, index + 1, sb);
                sb.deleteCharAt(index);
                sb.append(Character.toLowerCase(arr[index]));
                dfs(result, arr, index + 1, sb);
                sb.deleteCharAt(index);
            }
        }
    }
}