/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBScaleZoomSettings.h>

@class SBAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings {

	SBAnimationSettings* _innerFolderFadeSettings;

}

@property (retain) SBAnimationSettings * innerFolderFadeSettings;              //@synthesize innerFolderFadeSettings=_innerFolderFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(SBAnimationSettings *)innerFolderFadeSettings;
-(void)setInnerFolderFadeSettings:(SBAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

