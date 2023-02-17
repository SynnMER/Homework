class DataManager {// класс
public:// public - 
	map
     <key, value> key == it->first value == it->second
    <key, value>
    <key, value>
    <key, value>
    int mostSearchedKey() {
    std::unordered_map<int, int> keyAmount;
    for (size_t i = 0; i < _keys.size(); i++) {
    const auto& [it, isInserted] = keyAmount.insert({
_keys[i], 1 });
    if (!isInserted) {
    int value = it->second;
    value++;
    keyAmount[_keys[i]] = value;
 }
 }
 std::pair<int, int> key_biggestValue = {0,0};
 for (std::unordered_map<int, int>::const_iterator it =
keyAmount.begin();
 it != keyAmount.end(); it++) {
 if (key_biggestValue.second < it->second) {
 key_biggestValue = std::make_pair(it->first,
it->second);
 }
 }
 return key_biggestValue.first;
 }

private:
    std::vector<int> _keys = { 1,1,2,2,4,2,6,7,7,7,2 };
};