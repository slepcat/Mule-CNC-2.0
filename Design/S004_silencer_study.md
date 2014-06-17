# Stepper motor silencer

マウントに防振材を挟む方式
[Motor housing with dumper](http://www.thingiverse.com/thing:25205)

モーター本体を金属たわしとアルミホイルでくるむ方式もあった筈だが論文が見つからない。
どこに行ったのか…
I've seen the paper describe stepper silencer with aluminium foil and steel wool, but I cann't find it.

# Spindle silencer & EM noise sheild

アルミホイルで覆うのが手っ取り早い？
Aluminum sheet may be good considering EM noise of Spindle...

## 12th June 2014 silencer test result

* SK3 Brushless DC apx. 5000rpm
* Use "dB-Meter Free" iPhone app. 10cm distance from spindle.
* Resutls
	* 1.0 Design: avg 80dB / peak 90db
	* Cardboard Box: avg 77dB / peak 87dB
	* Aluminum foil: avg 78dB / peak 88dB
	* Foil & steel wool: avg 76dB / peak 86dB

アルミホイルとスチールウールでも思ったほど落ちない。あとはモータをゴムでマウントする、アルミフォイルではなく厚いアルミ板を使用することを検討。
Foil & steel wool failed to reach the expectation. Motor housing with dumper and thicker aluminum sheet may be effective.

## 14th June 2014 dumper mount test result

* SK3 Brushless DC apx. 5000rpm
* Use "dB-Meter Free" iPhone app. 10cm distance from spindle.
* Resutls
	* Dumper (Rubber Mount): avg 72dB / peak 80dB
	* Dumper & foil: avg 71dB / peak 79dB

Use dumper mount of 3mm thickness rubber sheets. Big improvement!
ダンパーで劇的に改善。3mm厚のゴムをThingiverseを参考に挟み込む。
Ref: [Silencer Kit for NEMA 17 Steppers](http://www.thingiverse.com/thing:25205)

Ref. Makerbot Replicator2: avg 63dB / peak 73dB

## 16th June 2013 lead tape test result

* SK3 Brushless DC apx. 5000rpm
* Use "dB-Meter Free" iPhone app. 10cm distance from spindle.
* dc housing with silencer case
* Resutls
	* Dumper, on the towl: avg 69dB / peak 76dB
	* Dumper: avg 72dB / peak 80dB
	* Dumper, lead tape, on the sponge avg 69dB / peak 76dB

Apparantly, lead tape doesn't show effect. The result of towl and sponge show 
another dumper between the DC housing and the spindle block will improve noise.

I received an advice on acoustic impedance and suggestion air/sponge/lead layers 
may show effect.

鉛テープに効果なし。ハウジングとスピンドルブロックにダンパーを挟み込むことに効果がありそう
だと判明。

音響インピーダンスに付いてアドバイスをもらう。空気／スポンジ／鉛テープの層にすれば効果があ
るかも。

## 17th June 2014 sponge test result

* SK3 Brushless DC apx. 5000rpm
* Use "dB-Meter Free" iPhone app. 10cm distance from spindle.
* dc housing with silencer case
* Resutls
	* Dumper, lead/sponge on sponge: avg 65dB / peak 72dB

It seem to work, but heat concern raised.
効果があるようですが放熱が心配。

ノイズ対策レシピ
Anti Noise recipes from CNC Cookbook
http://www.cnccookbook.com/CCCNCNoise.html

