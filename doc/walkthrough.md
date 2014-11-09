#フォルダ構成の説明

* CAD/ : MoI 2.5で作成したCADデータ。市販部品のデータが組み込まれていますが、こちらは当然元々のメーカのものですのでご注意ください
* Design/ : 静音化のときの試行錯誤のメモとか、強度計算もどきのメモなんかが残っています
* doc/ : ライセンスとこのファイル。BoMもここに入れる予定です
* readme.md
* STL & NC : CADデータから出力したstlデータです。3Dプリント用にサポートなどがついた状態になっています
* Test : 製作時に行った各種テストのデータです
	* Arduino_rpm_sensor : Arduinoを使った主軸回転数計。要改良
	* Arduino_tmp_sensor : Arduinoを使った温度計