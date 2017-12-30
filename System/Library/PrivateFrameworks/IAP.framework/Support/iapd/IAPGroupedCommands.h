/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IAPGroupedCommands : NSObject {

	char _videoOutSettingsChanged;
	char _lineOutEnabled;
	char _lineOutChanged;
	char _cancelled;

}

@property (assign,nonatomic) char videoOutSettingChanged;              //@synthesize videoOutSettingsChanged=_videoOutSettingsChanged - In the implementation block
@property (assign,nonatomic) char lineOutEnabled;                      //@synthesize lineOutEnabled=_lineOutEnabled - In the implementation block
@property (assign,nonatomic) char lineOutChanged;                      //@synthesize lineOutChanged=_lineOutChanged - In the implementation block
@property (assign,nonatomic) char cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
-(char)videoOutSettingChanged;
-(void)setVideoOutSettingChanged:(char)arg1 ;
-(char)lineOutEnabled;
-(void)setLineOutEnabled:(char)arg1 ;
-(char)lineOutChanged;
-(void)setLineOutChanged:(char)arg1 ;
-(char)cancelled;
-(void)setCancelled:(char)arg1 ;
@end

