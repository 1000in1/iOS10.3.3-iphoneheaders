/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIForceLevelClassifierDelegate <NSObject>
@optional
-(void)_forceLevelClassifierDidReset:(id)arg1;
-(void)_forceLevelClassifier:(id)arg1 didUpdateProgress:(float)arg2 toForceLevel:(int)arg3;

@required
-(void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(int)arg2;

@end

