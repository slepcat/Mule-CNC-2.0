# Stepper motor silencer

マウントに防振材を挟む方式
[Motor housing with dumper](http://www.thingiverse.com/thing:25205)

モーター本体を金属たわしとアルミホイルでくるむ方式もあった筈だが論文が見つからない。
どこに行ったのか…

# Spindle silencer & EM noise sheild

アルミホイルで覆うのが手っ取り早い？

## 12th June 2014 silencer test result

* SK3 Brushless DC apx. 5000 rpm
* Use "dB-Meter Free" iPhone app. 10 cm distance from spindle.
* Results
	* 1.0 Design: avg 80dB / peak 90dB
	* Cardboard Box: avg 77dB / peak 87dB
	* Aluminum foil: avg 78dB / peak 88dB
	* Foil & steel wool: avg 76dB / peak 86dB

アルミホイルとスチールウールでも思ったほど落ちない。あとはモータをゴムでマウントする、アルミフォイルではなく厚いアルミ板を使用することを検討。

## 14th June 2014 dumper mount test result

* SK3 Brushless DC apx. 5000 rpm
* Use "dB-Meter Free" iPhone app. 10 cm distance from spindle.
* Results
	* Dumper (Rubber Mount): avg 72dB / peak 80dB
	* Dumper & foil: avg 71dB / peak 79dB

ダンパーで劇的に改善。3mm厚のゴムをThingiverseを参考に挟み込む。
Ref: [Silencer Kit for NEMA 17 Steppers](http://www.thingiverse.com/thing:25205)

Ref. Makerbot Replicator 2: avg 63dB / peak 73dB

## 16th June 2013 lead tape test result

* SK3 Brushless DC apx. 5000 rpm
* Use "dB-Meter Free" iPhone app. 10 cm distance from spindle.
* dc housing with silencer case
* Results
	* Dumper, on the towel: avg 69dB / peak 76dB
	* Dumper: avg 72dB / peak 80dB
	* Dumper, lead tape, on the sponge avg 69dB / peak 76dB

鉛テープに効果なし。ハウジングとスピンドルブロックにダンパーを挟み込むことに効果がありそう
だと判明。

音響インピーダンスに付いてアドバイスをもらう。空気／スポンジ／鉛テープの層にすれば効果があ
るかも。

## 17th June 2014 sponge test result

* SK3 Brushless DC apx. 5000 rpm
* Use "dB-Meter Free" iPhone app. 10 cm distance from spindle.
* dc housing with silencer case
* Results
	* Dumper, lead/sponge on sponge: avg 65dB / peak 72dB

効果があるようですが放熱が心配。

ノイズ対策レシピ
Anti Noise recipes from CNC Cookbook
http://www.cnccookbook.com/CCCNCNoise.html

## 14th September 2014 new motor

* SNTM 28-26 1100KV Brushless DC apx. 5000 rpm?
* Use "dB-Meter Free" iPhone app. 10 cm distance from spindle.
* dc housing with silencer case
* Results
	* Dumper: avg 60dB / peak 67dB

モータ交換した事で劇的に改善。しばらくSK3で運用していたがこちらに交換する事を決断。ハウジングのデザインも多少見直す予定。
なお、SK3はシャフトに取り付けていた軸ががたついていたのでこれも騒音の一因だったかも。いずれにしても高回転のモータは騒音面でデメリットが大きいかも。SK3しか使っていないので分かりませんが。

## 9th November 2014 Round up

本体に組み込んだところ、ハウジングの振動でキャリッジと接触して騒音が大きくなることが判明。
スピンドル周りを一回り小さくなるように造形し直し、キャリッジとクリアランスを確保。
スピンドルを再作成する際に排気口を追加、スピンドルモータの冷却風がスピンドル下面から流れ出るようにデザインを修正。これでハウジングに排気口をつける必要がなくなり騒音を密閉できるように。また切削時のエアブローとしても多少期待できるかも？