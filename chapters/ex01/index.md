# 汎用計算

- `stdlib`: `abs(n)`, `rand()`
- `math`: `pow(n, e)`, `tan(arc)`, `sqrt(n)`
- 範囲付きのランダム値を生成したい場合
  - `min + rand() * (max - min + 1) / (RAND_MAX + 1)`
  - `(max - min + 1) / (RAND_MAX + 1)`: 0-RAND_MAX個 を min-max個 に絞る
- シード値自体を変えたい場合
  - `srand(seed)`
  - seed値には時刻を使用するのが一般的
  - これを1回実行すれば`rand`に時刻seedが設定されるので、1回でOK
- `time(time_t*)`は現在時刻をポインタに書き込む
  - UNIX標準時からの経過秒数を返す
  - 値だけほしい場合はNULLポインタ
- `static`すれば関数を抜けても変数が保持されるので、関数が扱う状態を関数内で持ちたい場合は便利
