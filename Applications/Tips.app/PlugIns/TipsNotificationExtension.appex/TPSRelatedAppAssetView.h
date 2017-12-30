/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsNotificationExtension.appex/TipsNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSImageAssetView.h>

@class TPSRelatedApp;

@interface TPSRelatedAppAssetView : TPSImageAssetView {

	char _hideBorderOnLoad;
	char _useTranslucentBorderOnLoad;
	int _iconFormat;
	TPSRelatedApp* _relatedApp;

}

@property (assign,nonatomic) int iconFormat;                               //@synthesize iconFormat=_iconFormat - In the implementation block
@property (assign,nonatomic) char hideBorderOnLoad;                        //@synthesize hideBorderOnLoad=_hideBorderOnLoad - In the implementation block
@property (assign,nonatomic) char useTranslucentBorderOnLoad;              //@synthesize useTranslucentBorderOnLoad=_useTranslucentBorderOnLoad - In the implementation block
@property (nonatomic,retain) TPSRelatedApp * relatedApp;                   //@synthesize relatedApp=_relatedApp - In the implementation block
-(void)setRelatedApp:(TPSRelatedApp *)arg1 ;
-(TPSRelatedApp *)relatedApp;
-(char)borderlessAppIcon;
-(char)hideBorderOnLoad;
-(void)setHideBorderOnLoad:(char)arg1 ;
-(char)useTranslucentBorderOnLoad;
-(void)setUseTranslucentBorderOnLoad:(char)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setIconFormat:(int)arg1 ;
-(int)iconFormat;
@end

