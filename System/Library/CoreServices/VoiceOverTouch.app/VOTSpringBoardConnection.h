/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMachPort;

@interface VOTSpringBoardConnection : NSObject {

	NSMachPort* _sbPort;

}
+(id)defaultConnection;
-(void)setSpringBoardCaptionPanelText:(id)arg1 ;
-(void)informConnectionDied;
-(id)_sbPort;
-(void)restartConnection;
-(void)showSpringBoardVOConfirmation:(char)arg1 ;
-(void)sendProgrammaticAppSwitch:(char)arg1 ;
-(void)showElementLabelPanel:(char)arg1 currentLabel:(id)arg2 ;
-(void)setInPassthroughMode:(char)arg1 ;
-(void)showItemChooser:(char)arg1 withItems:(id)arg2 ;
-(void)setScreenCurtainEnabled:(char)arg1 ;
-(void)dealloc;
-(char)isConnected;
@end

