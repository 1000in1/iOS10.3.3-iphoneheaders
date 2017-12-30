/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/ETBrowserViewController.h>
#import <DigitalTouchBalloonProvider/ETTranscriptDetailCanvasViewControllerPresentationDelegate.h>

@class NSString;

@interface ETIOSBrowserViewController : ETBrowserViewController <ETTranscriptDetailCanvasViewControllerPresentationDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateBottomMargin;
-(void)canvasViewControllerHideEntryView:(id)arg1 ;
-(Class)canvasViewControllerClass;
-(void)canvasViewController:(id)arg1 requestsPresentationStyleExpanded:(char)arg2 ;
-(void)canvasViewControllerShowEntryView:(id)arg1 ;
-(char)canvasViewControllerUsesCompactKeyboardLayout:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(void)beginSuppressingAppearanceMethods;
-(void)endSuppressingAppearanceMethods;
-(void)viewWillTransitionToExpandedPresentation;
-(void)viewDidTransitionToExpandedPresentation;
-(void)viewWillTransitionToCompactPresentation;
-(void)viewDidTransitionToCompactPresentation;
-(char)wantsDarkUI;
-(char)wantsOpaqueUI;
-(char)supportsQuickView;
-(int)browserPresentationStyle;
-(char)shouldShowChatChrome;
@end
