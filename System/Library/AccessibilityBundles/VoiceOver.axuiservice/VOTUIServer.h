/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIService.h>
#import <libobjc.A.dylib/AXUIContentViewControllerDelegate.h>

@class VOTUICursorViewController, VOTUISwipeOrderViewController, VOTUIScreenCurtainViewController, VOTUIBrailleViewController, VOTUICaptionPanelViewController, VOTUIRotorViewController, NSString;

@interface VOTUIServer : NSObject <AXUIService, AXUIContentViewControllerDelegate> {

	VOTUICursorViewController* _cursorViewController;
	VOTUISwipeOrderViewController* _swipeOrderViewController;
	VOTUIScreenCurtainViewController* _screenCurtainViewController;
	VOTUIBrailleViewController* _brailleViewController;
	VOTUICaptionPanelViewController* _captionPanelViewController;
	VOTUIRotorViewController* _rotorViewController;
	NSString* _voiceOverWarningIdentifier;

}

@property (nonatomic,retain) VOTUICursorViewController * cursorViewController;                            //@synthesize cursorViewController=_cursorViewController - In the implementation block
@property (nonatomic,retain) VOTUISwipeOrderViewController * swipeOrderViewController;                    //@synthesize swipeOrderViewController=_swipeOrderViewController - In the implementation block
@property (nonatomic,retain) VOTUIScreenCurtainViewController * screenCurtainViewController;              //@synthesize screenCurtainViewController=_screenCurtainViewController - In the implementation block
@property (nonatomic,retain) VOTUIBrailleViewController * brailleViewController;                          //@synthesize brailleViewController=_brailleViewController - In the implementation block
@property (nonatomic,retain) VOTUICaptionPanelViewController * captionPanelViewController;                //@synthesize captionPanelViewController=_captionPanelViewController - In the implementation block
@property (nonatomic,retain) VOTUIRotorViewController * rotorViewController;                              //@synthesize rotorViewController=_rotorViewController - In the implementation block
@property (nonatomic,retain) NSString * voiceOverWarningIdentifier;                                       //@synthesize voiceOverWarningIdentifier=_voiceOverWarningIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VOTUIRotorViewController *)rotorViewController;
-(void)setRotorViewController:(VOTUIRotorViewController *)arg1 ;
-(void)_addBrailleViewControllerWithOrientation:(int)arg1 dotNumberPositions:(id)arg2 typingMode:(int)arg3 ;
-(VOTUIBrailleViewController *)brailleViewController;
-(VOTUIScreenCurtainViewController *)screenCurtainViewController;
-(void)setScreenCurtainViewController:(VOTUIScreenCurtainViewController *)arg1 ;
-(void)setBrailleViewController:(VOTUIBrailleViewController *)arg1 ;
-(void)_removeRotorViewController;
-(void)_toggleVoiceOverCaptionPanelViewController;
-(void)_removeBrailleViewController;
-(void)_removeCaptionPanelViewController;
-(void)_removeSwipeOrderViewController;
-(void)_removeScreenCurtainController;
-(void)_handleHideBrailleUIMessage:(id)arg1 ;
-(void)_handleHighlightBrailleDotsMessage:(id)arg1 ;
-(void)_handleUpdateBrailleUIMessage:(id)arg1 ;
-(void)_handleFlashBrailleInsertedTextMessage:(id)arg1 ;
-(void)_handleScreenCurtainEnabled:(char)arg1 ;
-(void)_handleVoiceOverCaptionPanelEnabled:(id)arg1 ;
-(void)_handleSetSwipeOrderFramesMessage:(id)arg1 ;
-(void)_handleShowVoiceOverWarning:(id)arg1 ;
-(void)_handleHideVoiceOverWarning:(id)arg1 ;
-(void)_handleUpdateVisualRotor:(id)arg1 ;
-(VOTUICaptionPanelViewController *)captionPanelViewController;
-(void)setCaptionPanelViewController:(VOTUICaptionPanelViewController *)arg1 ;
-(VOTUISwipeOrderViewController *)swipeOrderViewController;
-(void)setSwipeOrderViewController:(VOTUISwipeOrderViewController *)arg1 ;
-(NSString *)voiceOverWarningIdentifier;
-(void)setVoiceOverWarningIdentifier:(NSString *)arg1 ;
-(void)_removeCursorViewController;
-(void)_handleSetCursorFrameMessage:(id)arg1 ;
-(void)_handleShowBrailleUIMessage:(id)arg1 ;
-(VOTUICursorViewController *)cursorViewController;
-(void)setCursorViewController:(VOTUICursorViewController *)arg1 ;
-(id)init;
-(void)dealloc;
-(float)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(char)arg2 ;
-(char)shouldPreventAutorotatingAllContentViewControllers;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1 ;
@end

