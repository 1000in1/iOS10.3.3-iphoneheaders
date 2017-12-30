/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>

@class FBSScene;

@interface HNDApplication : UIApplication {

	FBSScene* _mainScene;

}

@property (nonatomic,retain) FBSScene * mainScene;              //@synthesize mainScene=_mainScene - In the implementation block
-(void)setMainScene:(FBSScene *)arg1 ;
-(id)_accessibilityScannerCurrentFocusContext;
-(id)_accessibilityScannerCurrentLoopElementsForFocusContext:(id)arg1 ;
-(id)_accessibilityScannerCurrentLoopElements;
-(unsigned)_accessibilityScannerCurrentLoopIndex;
-(id)init;
-(char)isSuspended;
-(void)dealloc;
-(id)_mainSceneForDisplay:(id)arg1 ;
-(void)_runWithMainScene:(id)arg1 transitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_createStatusBarWithRequestedStyle:(int)arg1 orientation:(int)arg2 hidden:(char)arg3 ;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(FBSScene *)mainScene;
-(id)_accessibilityMainWindow;
@end

