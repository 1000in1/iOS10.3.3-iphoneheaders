/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXIPCServer;

@interface VOTSystemServerInstance : NSObject {

	AXIPCServer* _server;

}
+(id)serverInstance;
-(id)voiceOverCommandTriggered:(id)arg1 ;
-(id)voiceOverCurrentFocusedElement:(id)arg1 ;
-(id)lastSpokenPhrases:(id)arg1 ;
-(id)lastSoundsPlayed:(id)arg1 ;
-(id)currentRotorName:(id)arg1 ;
-(id)lastScreenChange:(id)arg1 ;
-(id)isBrailleInputUIShowing:(id)arg1 ;
-(void)dealloc;
-(id)_initServer;
@end

