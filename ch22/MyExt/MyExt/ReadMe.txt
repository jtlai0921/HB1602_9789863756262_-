========================================================================
    動態連結庫：MyExt 專案概述
========================================================================

套用程式精靈已為您建立了此 MyExt DLL。

本檔案概要介紹群組成 MyExt 套用程式的
的每個檔案的內容。


MyExt.vcproj
    這是使用套用程式精靈產生的 VC++ 專案的主專案檔案，
    其中包括產生該檔案的 Visual C++ 的版本訊息，以及有關使用套用程式精靈選取的平台、組態和專案功能的訊息。

MyExt.cpp
    這是主 DLL 源檔案。

	此 DLL 在建立時不匯出任何符號。因此，在產生此 DLL 時
	將不會產生 .lib 檔案。若果希望此專案
	成為其他某個專案的專案相依項，則需要
	加入程式碼以從 DLL 匯出某些符號，
	以便產生一個匯出庫，或是，也可以在專案“屬性頁”交談視窗中的
	“連結器”資料夾中，將“一般”屬性頁上的
	“忽略輸入庫”屬性設定為“是”。

/////////////////////////////////////////////////////////////////////////////
其他標准檔案：

StdAfx.h, StdAfx.cpp
    這些檔案用於產生名為 MyExt.pch 的預先編譯頭 (PCH) 檔案和名為 StdAfx.obj 的預先編譯型態檔案。

/////////////////////////////////////////////////////////////////////////////
其他注解：

套用程式精靈使用“TODO:”注解來指示應加入或自訂的源程式碼部分。

/////////////////////////////////////////////////////////////////////////////