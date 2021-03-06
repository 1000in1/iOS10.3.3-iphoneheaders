/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SiriViewService/SVSStarkItemController.h>
#import <SiriViewService/SVSStarkConfirmationSnippetViewDelegate.h>

@protocol SVSStarkConfirmationSnippetControllerDelegate;
@class SVSStarkConfirmationSnippetView, NSUUID, NSArray, NSTimer, NSString;

@interface SVSStarkConfirmationSnippetController : UIViewController <SVSStarkItemController, SVSStarkConfirmationSnippetViewDelegate> {

	char _isReading;
	char _isIdle;
	SVSStarkConfirmationSnippetView* _snippetView;
	int _interactionStyle;
	NSUUID* _conversationItemIdentifier;
	id<SVSStarkConfirmationSnippetControllerDelegate> _delegate;
	NSArray* _confirmationButtons;
	NSTimer* _idleTimer;

}

@property (assign,getter=_isReading,nonatomic) char isReading;                                               //@synthesize isReading=_isReading - In the implementation block
@property (assign,getter=_isIdle,nonatomic) char isIdle;                                                     //@synthesize isIdle=_isIdle - In the implementation block
@property (getter=_idleTimer,nonatomic,retain) NSTimer * idleTimer;                                          //@synthesize idleTimer=_idleTimer - In the implementation block
@property (assign,nonatomic,__weak) id<SVSStarkConfirmationSnippetControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SVSStarkConfirmationSnippetView * snippetView;                                  //@synthesize snippetView=_snippetView - In the implementation block
@property (nonatomic,readonly) NSArray * confirmationButtons;                                                //@synthesize confirmationButtons=_confirmationButtons - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int interactionStyle;                                                           //@synthesize interactionStyle=_interactionStyle - In the implementation block
@property (nonatomic,copy) NSUUID * conversationItemIdentifier;                                              //@synthesize conversationItemIdentifier=_conversationItemIdentifier - In the implementation block
-(void)updateAfterSpeechQueueEmpties;
-(int)interactionStyle;
-(void)setInteractionStyle:(int)arg1 ;
-(void)setSnippetView:(SVSStarkConfirmationSnippetView *)arg1 ;
-(char)isShowingGatekeeperHeader;
-(id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 interactionStyle:(int)arg3 ;
-(char)_isReadAgainItem:(id)arg1 ;
-(void)setIsReading:(char)arg1 ;
-(void)_setupConfirmationOptionButtons:(id)arg1 ;
-(void)_sendGenericAceCommands:(id)arg1 andDismissSnippet:(char)arg2 ;
-(NSArray *)confirmationButtons;
-(SVSStarkConfirmationSnippetView *)snippetView;
-(void)_createNewIdleTimer;
-(void)_idleTimerFired:(id)arg1 ;
-(char)_isReading;
-(id)_idleTimer;
-(void)setDelegate:(id<SVSStarkConfirmationSnippetControllerDelegate>)arg1 ;
-(id<SVSStarkConfirmationSnippetControllerDelegate>)delegate;
-(char)isActive;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_clearIdleTimer;
-(void)_resetIdleTimer;
-(char)_isIdle;
-(NSUUID *)conversationItemIdentifier;
-(void)setConversationItemIdentifier:(NSUUID *)arg1 ;
-(void)setIsIdle:(char)arg1 ;
-(void)setIdleTimer:(NSTimer *)arg1 ;
@end

