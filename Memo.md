# 方針

##　bit全探索

[参考サイト](＆qiita.com/u2dayo/items/e321c66aa43e3a9b1b31)

使用例　(部分和問題)

#
    #include <bits/stdc++.h>

    using namespace std;

    int main() {
    int N, W;
    cin >> N >> W;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int ans = 0;

    for (int bit = 0; bit < (1 << N); ++bit) {
        int S = 0;
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) {
                S += A[i];
            }
        }
        if (S == W) {
            ans++;
        }
    }

    cout << ans << endl;
    }

---


概要

複数のものをそれぞれ、使う、使わないなどの2種類の状態に置き換えられるときに使える方式。ただし、Nが
20より小さい程度でないと間に合わない。

まず`1<<N`回(2^N)だけ回るようなfor文を作り、そのforのiに当たる変数が探索に使うbit列となる。

そのforの中で、N回のfor文を作り、その中で
bitと1をNビット左シフトした物の積集合を取り、1のbitを見つける。後は問題により臨機応変

N=10だった場合、全探索と比較すると、10^10と2^10の違いがある。


例題

[ABC190_C](https://atcoder.jp/contests/abc190/tasks/abc190_c)


[ABC167_C](https://atcoder.jp/contests/abc167/tasks/abc167_c)

[ABC128_C](https://atcoder.jp/contests/abc128/tasks/abc128_c)





# 文法

## 1.pair



## 2.substr


キーワード: *文字列　切り出し　取り出し*

[参考サイト](https://www.sejuku.net/blog/58892)

std空間

__取りだしたい文字列の変数名.substr(開始インデックス,取り出す文字数)__


使用例

#   
    #include <iostream>
    #include <string>
 
    int main() {
        std::string str = "samurai,engineer,se!";
 
        std::string substr = str.substr(8, 8);
 
        std::cout << substr << std::endl;
 
        return 0;
    }

---

出力
#   
    engineer

---



## 3.set

キーワード: *コンテナ　集合*




