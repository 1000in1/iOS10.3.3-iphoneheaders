/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSArray;

@interface VOTUISwipeOrderViewController : UIViewController {

	NSArray* _frames;

}

@property (nonatomic,retain) NSArray * frames;              //@synthesize frames=_frames - In the implementation block
-(void)setSwipeFrames:(id)arg1 ;
-(void)setFramesHidden:(char)arg1 ;
-(void)_updateSwipeFramesForView;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)setFrames:(NSArray *)arg1 ;
-(NSArray *)frames;
@end

