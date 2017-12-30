/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage <NSObject>
@optional
-(unsigned)colorSpaceID;

@required
-(id)renditionWithKey:(const renditionkeytoken*)arg1;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2;
-(char)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
-(float)fontSizeForFontSizeType:(id)arg1;
-(unsigned)distilledInCoreUIVersion;
-(char)getPhysicalColor:(colordef*)arg1 withName:(id)arg2;
-(char)hasPhysicalColorWithName:(id)arg1;
-(unsigned)documentFormatVersion;
-(unsigned)authoredWithSchemaVersion;
-(id)catalogGlobals;

@end

