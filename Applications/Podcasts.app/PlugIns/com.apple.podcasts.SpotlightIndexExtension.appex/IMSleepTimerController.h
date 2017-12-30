/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMSleepTimerDelegate;
@class IMAVPlayer;

@interface IMSleepTimerController : NSObject {

	id<IMSleepTimerDelegate> _delegate;
	IMAVPlayer* _player;

}

@property (nonatomic,retain) IMAVPlayer * player;                                   //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<IMSleepTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addActionForTime:(double)arg1 alertController:(id)arg2 ;
-(void)addActionWithTitle:(id)arg1 autoStop:(unsigned)arg2 timerTime:(double)arg3 alertController:(id)arg4 ;
-(id)alertControllerForSleepTimer;
-(void)setDelegate:(id<IMSleepTimerDelegate>)arg1 ;
-(id<IMSleepTimerDelegate>)delegate;
-(id)initWithPlayer:(id)arg1 ;
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
@end

