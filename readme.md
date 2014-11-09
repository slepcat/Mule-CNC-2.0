# Mule CNC 2.0 Read me

Mule CNC 2.0は3Dプリント部品を使って構築したCNCミルです。

![Mule CNC 2.0 CAD](/doc/Mule CNC 2.0.png)

###主な特徴
* 3Dプリント部品。主軸を含む主要な部品をPLAで3Dプリントしています。3Dプリンタを使って構築が可能ですが、Replicator2のような造形サイズの大きいプリンタが必要です
* モーションコントローラとしてTinyGを使用しています
* 主軸モータとしてRC用のブラシレスDCモータを使用しています。	主軸回転数をTinyGから制御できます
* 剛性。アルミや真鍮といったソフトメタルを切削できます

###その他
* PLAは熱に弱いため、ステッパモータに流す電流量は注意する必要があります。発熱は3Dプリント部品を痛めるおそれがあります
* リミットスイッチはデザインに組み込まれていますが、作者はまだ実装していません
* 資料類は整理中です

![Mule CNC under assemble](/doc/Mule CNC Assembled.jpg)

##English Ver.

Mule CNC 2.0 is CNC milling machine made with 3D Printed Parts.

###Features
* Use of 3D printed parts. Significant parts including spindle are 3D printable with PLA.
    (It require large build volume. ex, Replicator2)
* Motion controller is TinyG.
* RC's Brushless DC Motor for spindle. RPM can be controlled with TinyG.
* Rigidness. it can cut soft metals (Aluminum & Brass)
* Reduced noise.

###Note
* Mule CNC use commercial parts available in Japan. Some of them might unable to purchase outside of Japan.
* PLA is weak to heat. You should keep the current for steppers moderate to avoid heat damage.
* Limit switch has not been implemented yet.
* Documents are under construction.