/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorScrollViewControllerProxy.h>

@class UIPushBehavior;

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {

	UIPushBehavior* _velocityPushBehavior;

}
+(id)supportedSettings;
-(CGSize)contentSize;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(CGPoint)contentOffset;
-(void)viewDidLoad;
-(void)commonInit;
-(CGRect)contentBounds;
-(id)dynamicsPushBehaviors;
-(id)layoutSettingsKeys;
-(void)pushWatchdog:(id)arg1 ;
-(void)setSettingContentSize:(CGSize)arg1 ;
-(CGSize)settingContentSize;
-(void)setSettingIndicatorStyle:(unsigned)arg1 ;
-(void)setSettingAlwaysBounceVertical:(char)arg1 ;
-(void)setSettingAlwaysBounceHorizontal:(char)arg1 ;
-(void)setSettingShowsVerticalScrollIndicator:(char)arg1 ;
-(void)setSettingShowsHorizontalScrollIndicator:(char)arg1 ;
@end

