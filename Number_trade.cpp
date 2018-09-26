/**
 * @file kanji_trade.cpp
 * @brief   入力<br>
 *          漢数字変換関数の呼び出し<br>
 *          出力<br>
 * @par     配列<br>
 *          文字列の末尾を確定する<br>
 *          漢数字を算用数字に変換<br>
 *          用途別の変換<br>
 *          後処理（アシスト文字の削除）<br>
 *          例外処理<br>
 * @par     変換関数<br>
 * @par     例外処理<br>
 * @date    2018/09/06 新規作成
 * @date    2018/09/23 作成完了
 * @author  Katuhito Iwanami
 * @details 文字列中の漢数字を算用数字に変換する
 */
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


std::string kanji_num_trade(std::string); /// 漢数字を算用数字に置換　（sample参照）
std::string all_Replace(std::string, std::string, std::string); /// すべて置換
std::string legal_doc(std::string); /// 用途別　法律文書用
std::string irregular(std::string); /// 例外処理

int main(void)
{




}

std::string num_kanji_trade(std::string)
{

}
/// 文字列中の漢数字をすべて置換する
std::string all_Replace(std::string std1, std::string target_std, std::string change_std)
{
    std::string::size_type  Pos(std1.find(target_std));

    while(Pos != std::string::npos)
    {
        std1.replace(Pos, target_std.length(), change_std);
        Pos = std1.find(target_std, Pos + change_std.length());
    }

    return std1;
}
