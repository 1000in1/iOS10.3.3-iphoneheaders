/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFConversationFlagTriageInteraction.h>

@interface MFMuteTriageInteraction : MFConversationFlagTriageInteraction
-(void)performInteractionWithCompletion:(/*^block*/id)arg1 ;
-(char)isPermitted;
-(void)_performInteraction_Internal;
-(char)flagState;
-(char)_isPreferenceForMuteActionSet;
-(void)_setPreferenceForAction:(int)arg1 ;
-(id)title;
@end
