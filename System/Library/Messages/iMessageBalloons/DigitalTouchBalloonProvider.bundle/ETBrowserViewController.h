/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBrowserViewController.h>
#import <DigitalTouchBalloonProvider/DTSCanvasViewControllerSendDelegate.h>

@class ETBalloonPluginDataSource, DTSCanvasViewController, NSString;

@interface ETBrowserViewController : CKBrowserViewController <DTSCanvasViewControllerSendDelegate> {

	ETBalloonPluginDataSource* _dataSource;
	char _expanded;
	DTSCanvasViewController* _canvasViewController;

}

@property (nonatomic,retain) DTSCanvasViewController * canvasViewController;              //@synthesize canvasViewController=_canvasViewController - In the implementation block
@property (assign,getter=isExpanded,nonatomic) char expanded;                             //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DTSCanvasViewController *)canvasViewController;
-(void)setCanvasViewController:(DTSCanvasViewController *)arg1 ;
-(Class)canvasViewControllerClass;
-(void)viewDidLoad;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(void)setBalloonPluginDataSource:(id)arg1 ;
-(void)canvasViewController:(id)arg1 sendMessage:(id)arg2 ;
-(void)dataSource:(id)arg1 didReceiveSessionMessage:(id)arg2 ;
@end
