# CAD Modeling Guideline

Modeling Guideline for FDM/FFF printed mechanical parts.
This Guideline written for my Replicator2 3D printer. Before you apply 
the guideline for your printer, plaese check this also work for yours.

FDM/FFF方式の3Dプリント機械部品用のCADモデリングガイドラインです。
私のReplicator2を前提に書かれていますので、ご自分のプリンタで使用される場合は同じ
設定が有効か、事前に確認されることをお勧めします。

## Undercut

Avoid undercut. Undercut require support structures and it make the surface of supported object very rough.

Angled surface which is sharper than approximately 45 degree can be 
printed without support structure.

### Use diamond ,round or sphere hole on vertical surface

If you want use truss like vertical structure, you should use diamond or 
round hole. Diamond is best because it have 45 degree surface but small 
roundhole also can be printed without support.

### Modeled support

If undercut which need support is unavoidable, 

## Clearlance

Clearlance for assembly.
組み立て用のクリアランス

### Hole

* clearance hole: +0.5mm to radius, thorough hole, slight friction
* snap fit hole: +0.3mm to radius, difficult to take apart without destruction
* pressfit hole: +0.1mm to radius, use drier to push in


