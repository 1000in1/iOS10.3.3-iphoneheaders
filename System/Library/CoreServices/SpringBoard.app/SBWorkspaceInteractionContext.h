/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIInteractionProgress, UIGestureRecognizer;

@interface SBWorkspaceInteractionContext : NSObject {

	UIInteractionProgress* _interactionProgress;
	UIGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,readonly) UIInteractionProgress * interactionProgress;              //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer;                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
-(UIGestureRecognizer *)gestureRecognizer;
-(UIInteractionProgress *)interactionProgress;
-(id)initWithInteractionProgress:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
@end

