/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/RichLinkProvider.bundle/RichLinkProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RichLinkProvider/RichLinkProvider-Structs.h>
#import <RichLinkProvider/RichLinkPluginDataSourceClient.h>
#import <DigitalTouchBalloonProvider/CKTranscriptBalloonPluginController.h>

@class UIViewController, RichLinkPluginDataSource, LPLinkView, NSString;

@interface RichLinkPluginController : NSObject <RichLinkPluginDataSourceClient, CKTranscriptBalloonPluginController> {

	RichLinkPluginDataSource* _dataSource;
	LPLinkView* _view;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char allowsReusablePluginViews; 
@property (nonatomic,readonly) UIView*<CKTranscriptPluginView> pluginContentView; 
@property (nonatomic,copy) id updateSnapshot; 
@property (nonatomic,readonly) char isInteractive; 
@property (nonatomic,readonly) char wantsTranscriptTimestampDrawer; 
@property (nonatomic,readonly) char wantsTranscriptGroupMonograms; 
@property (nonatomic,readonly) char wantsBalloonGradient; 
@property (nonatomic,readonly) char wantsOutline; 
@property (nonatomic,readonly) UIViewController * contentViewController; 
-(void)richLinkPluginDataSource:(id)arg1 didReceiveMetadata:(id)arg2 ;
-(id)rendererForRichLinkPluginDataSource:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)isInteractive;
-(UIViewController *)contentViewController;
-(id)initWithDataSource:(id)arg1 isFromMe:(char)arg2 ;
-(UIView*<CKTranscriptPluginView>)pluginContentView;
-(char)handlePresentationAction;
-(char)wantsEdgeToEdgeLayout;
-(char)wantsTranscriptGroupMonograms;
-(char)wantsTranscriptTimestampDrawer;
@end

