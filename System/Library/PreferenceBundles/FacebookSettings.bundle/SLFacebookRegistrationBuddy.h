/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPromptDelegate.h>

@protocol SLFacebookRegistrationBuddyDelegate;
@class SLFacebookRegistrationInfo, NSMutableArray, PSListController, PSSetupController, NSString;

@interface SLFacebookRegistrationBuddy : NSObject <SLFacebookRegistrationInfoPromptDelegate> {

	SLFacebookRegistrationInfo* _registrationInfo;
	NSMutableArray* _registrationInfoPrompts;
	int _currentPromptIndex;
	PSListController* _presentingViewController;
	PSSetupController* _setupController;
	id<SLFacebookRegistrationBuddyDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_presentNextPrompt;
-(id)_alertForError:(int)arg1 ;
-(void)registrationInfoPromptDidCancel:(id)arg1 ;
-(char)_isCorrectableError:(int)arg1 ;
-(void)registrationInfoPrompt:(id)arg1 didUpdateRegistrationInfo:(id)arg2 ;
-(void)_returnToPromptOfClass:(Class)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
@end

