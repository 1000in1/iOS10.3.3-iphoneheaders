/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/FMFBalloonProvider.bundle/FMFBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol CKTranscriptBalloonPluginController <CKTranscriptPluginViewReuseDelegate,IMBalloonPluginController>
@property (nonatomic,readonly) UIView*<CKTranscriptPluginView> pluginContentView; 
@property (nonatomic,copy) id updateSnapshot; 
@property (nonatomic,readonly) char isInteractive; 
@property (nonatomic,readonly) char wantsTranscriptTimestampDrawer; 
@property (nonatomic,readonly) char wantsTranscriptGroupMonograms; 
@property (nonatomic,readonly) char wantsBalloonGradient; 
@property (nonatomic,readonly) char wantsOutline; 
@property (nonatomic,readonly) UIViewController * contentViewController; 
@optional
-(id)updateSnapshot;
-(void)configureWithDataSource:(id)arg1 isFromMe:(char)arg2;
-(void)relinquishDataSource;
-(char)isInteractive;
-(UIViewController *)contentViewController;
-(char)handlePresentationAction;
-(void)pluginContentViewWillAppear;
-(char)wantsTranscriptGroupMonograms;
-(void)setUpdateSnapshot:(/*^block*/id)arg1;
-(char)wantsOutline;
-(char)wantsBalloonGradient;
-(char)wantsTranscriptTimestampDrawer;
-(void)pluginContentViewWillDisappear;

@required
-(UIView*<CKTranscriptPluginView>)pluginContentView;

@end

