/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:28 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/PlugIns/com.apple.CloudDocsUI.CloudSharing.appex/com.apple.CloudDocsUI.CloudSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class _UIShareInvitationAddParticipantController, NSString;

@interface _UIShareInvitationModalAddParticipantController : UINavigationController {

	_UIShareInvitationAddParticipantController* _addParticipantController;
	/*^block*/id _completion;

}

@property (nonatomic,retain) _UIShareInvitationAddParticipantController * addParticipantController;              //@synthesize addParticipantController=_addParticipantController - In the implementation block
@property (nonatomic,copy) id completion;                                                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * continueActionTitle; 
-(id)initWithShare:(id)arg1 uti:(id)arg2 ;
-(void)setAddParticipantController:(_UIShareInvitationAddParticipantController *)arg1 ;
-(_UIShareInvitationAddParticipantController *)addParticipantController;
-(NSString *)continueActionTitle;
-(void)setContinueActionTitle:(NSString *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

