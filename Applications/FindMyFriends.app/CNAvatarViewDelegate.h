/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarViewDelegate <NSObject>
@optional
-(char)shouldShowActionsForAvatarView:(id)arg1;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(void)avatarView:(id)arg1 willShowActions:(id)arg2;
-(char)avatarView:(id)arg1 shouldShowContact:(id)arg2;
-(void)willDismissActionsForAvatarView:(id)arg1;
-(void)didDismissActionsForAvatarView:(id)arg1;

@required
-(id)presentingViewControllerForAvatarView:(id)arg1;

@end

