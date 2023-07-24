// 1116211052_R12_14.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "Setting.h"
#include <Windows.h>
#include <stdio.h>
#include <time.h>

#define CHARBUFF 124
#define BUFFSIZE 1024
#define RAND_MONTH 12 

int main()
{
    //iniファイルの読み込み
    read_ini(file);
    
    //CSVファイルの入力
    readFile(file, data);
   
    //ゲームの実行
    // //player初期設定
    Player* com1;
	com1 = new Player;
	com1->Num = 1;
    com1->MoveNum = 0;
    com1->point = 0;
    //乱数で月を選択
    srand((unsigned int)time(NULL));
    com1->month = (int)(rand() % (RAND_MONTH));
    fprintf_s(stdout, "プレイヤー%d：%d月\n",com1->Num, com1->month+1);

    //内容作成
    int count = 0;
    for (int i = 0; i < 31; i++) {
        //乱数を時間で初期化しているので、調整
        while (count < 2000000000) {
            count += 1;
        }

        srand((unsigned int)time(NULL));
        if (data[com1->month][i] < 1.0) {
            com1->MoveNum = (int)(rand() % 5) + 6;
            com1->point += (com1->MoveNum * 2);
        }
        else if (data[com1->month][i] < 3.0) {
            com1->MoveNum = (int)(rand() % 5) + 3;
            com1->point += (com1->MoveNum * 2);
        }
        else if(data[com1->month][i] < 9.0) {
            com1->MoveNum = (int)(rand() % 4) + 1;
            com1->point += (com1->MoveNum * 2);
        }
        else if(data[com1->month][i] == 500.0){
            com1->MoveNum = 0;
            com1->point += com1->MoveNum;
        }
        else {
            com1->MoveNum = -1;
            com1->point -= ((int)(rand() % 10) + 10);
        }
        fprintf_s(stdout, "進んだマス数:%d\n", com1->MoveNum);
        fprintf_s(stdout, "合計獲得ポイント:%d\n", com1->point);
        count = 0;
    }

    //結果の出力
    fprintf_s(stdout, "\n最終結果:%d\n", com1->point);

}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
