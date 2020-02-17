
#pragma once

// 以下巨集定義要求的最低平台。要求的最低平台
// 是具有執行套用程式所需功能的 Windows、Internet Explorer 等產品的
// 最早版本。透過在指定版本及更低版本的平台上啟用所有可用的功能，巨集可以
// 標準工作。

// 若果必須要針對低於以下指定版本的平台，請修改下列定義。
// 有關不同平台對應值的最新訊息，請參考 MSDN。
#ifndef WINVER                          // 指定要求的最低平台是 Windows Vista。
#define WINVER 0x0600           // 將此值變更為對應的值，以適用於 Windows 的其他版本。
#endif

#ifndef _WIN32_WINNT            // 指定要求的最低平台是 Windows Vista。
#define _WIN32_WINNT 0x0600     // 將此值變更為對應的值，以適用於 Windows 的其他版本。
#endif

#ifndef _WIN32_WINDOWS          // 指定要求的最低平台是 Windows 98。
#define _WIN32_WINDOWS 0x0410 // 將此值變更為適當的值，以適用於 Windows Me 或更高版本。
#endif

#ifndef _WIN32_IE                       // 指定要求的最低平台是 Internet Explorer 7.0。
#define _WIN32_IE 0x0700        // 將此值變更為對應的值，以適用於 IE 的其他版本。
#endif

