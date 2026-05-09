// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(NULL));
    int Japanese = rand() % 101;
    int Math = rand() % 101;
    int Science = rand() % 101;
    int English = rand() % 101;
    int Society = rand() % 101;
    int total = Math + Science + Society + English + Japanese;
    int ave = (float)total / 5.0f;
    printf("国:%d点/数:%d点/理:%d点/社:%d点/英:%d点\n", Japanese, Math, Science, Society, English);
    printf("合計:%d/平均:%d\n", total, ave);
    const int pass_score = 40;
    bool pass_Japanese = (pass_score <= Japanese);
    bool pass_Math = (pass_score <= Math);
    bool pass_Science = (pass_score <= Science);
    bool pass_Society = (pass_score <= Society);
    bool pass_English = (pass_score <= English);
    bool pass_all = pass_Japanese && pass_English && pass_Math && pass_Science && pass_Society;
    const float pass_ave = 60.0f;
    if (pass_ave <= ave && pass_all)
    {
        printf("合格です。");
    }
    else
    {
        printf("不合格です。\n");
        if (ave < pass_ave)
        {
            printf("平均が60点未満です。\n");
        }
        if (!pass_Japanese)
        {
            printf("国語が40点未満です。\n");
        }
        if (!pass_Math)
        {
            printf("数学が40点未満です。\n");
        }
        if (!pass_English)
        {
            printf("英語が40点未満です。\n");
        }
        if (!pass_Society)
        {
            printf("社会が40点未満です。\n");
        }
        if (!pass_Science)
        {
            printf("理科が40点未満です。\n");
        }
        
    }
}
