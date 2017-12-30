/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {

	int _dataNetworkType;
	int _wifiStrengthRaw;
	int _wifiStrengthBars;
	char _wifiLinkWarning;
	char _enableRSSI;
	char _showRSSI;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(float)extraRightPadding;
-(id)contentsImage;
-(char)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(float)extraLeftPadding;
-(float)maximumOverlap;
-(id)_stringForRSSI;
-(id)_dataNetworkImage;
@end

