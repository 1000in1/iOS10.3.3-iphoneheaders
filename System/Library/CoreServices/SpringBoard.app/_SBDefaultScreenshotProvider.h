/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/_SBScreenshotProvider.h>

@class UIScreen, SBScreenFlash, NSString;

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider> {

	UIScreen* _screen;
	SBScreenFlash* _flasher;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScreen * screen;                    //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) SBScreenFlash * flasher;              //@synthesize flasher=_flasher - In the implementation block
-(id)captureScreenshot;
-(SBScreenFlash *)flasher;
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
@end

