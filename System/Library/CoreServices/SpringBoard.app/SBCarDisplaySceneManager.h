/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSceneManager.h>

@protocol SBCarDisplaySceneManagerDelegate;
@interface SBCarDisplaySceneManager : SBSceneManager {

	id<SBCarDisplaySceneManagerDelegate> _carDisplayDelegate;

}

@property (assign,nonatomic,__weak) id<SBCarDisplaySceneManagerDelegate> carDisplayDelegate;              //@synthesize carDisplayDelegate=_carDisplayDelegate - In the implementation block
-(id)_sceneWindowLayoutStrategy;
-(id)_newLayoutController;
-(char)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(id<SBCarDisplaySceneManagerDelegate>)carDisplayDelegate;
-(void)setCarDisplayDelegate:(id<SBCarDisplaySceneManagerDelegate>)arg1 ;
@end

