/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICoordinateSpace;
#import <MobileSafari/MobileSafari-Structs.h>
@class UIView, BrowserContainerViewController;

@interface DragContext : NSObject {

	id<UICoordinateSpace> _referenceSpace;
	UIView* _sourceView;
	float _zPosition;
	BrowserContainerViewController* _browserContainerViewController;
	CGPoint _startPoint;
	CGPoint _anchorPoint;

}

@property (nonatomic,readonly) id<UICoordinateSpace> referenceSpace;                                       //@synthesize referenceSpace=_referenceSpace - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                                                        //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint;                                                         //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPoint;                                                        //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (nonatomic,readonly) float zPosition;                                                            //@synthesize zPosition=_zPosition - In the implementation block
@property (nonatomic,retain) BrowserContainerViewController * browserContainerViewController;              //@synthesize browserContainerViewController=_browserContainerViewController - In the implementation block
-(Class)dragInteractionDriverClass;
-(void)setBrowserContainerViewController:(BrowserContainerViewController *)arg1 ;
-(id<UICoordinateSpace>)referenceSpace;
-(BrowserContainerViewController *)browserContainerViewController;
-(id)initWithSourceView:(id)arg1 startPoint:(CGPoint)arg2 anchorPoint:(CGPoint)arg3 zPosition:(float)arg4 ;
-(id)init;
-(CGPoint)anchorPoint;
-(CGPoint)startPoint;
-(UIView *)sourceView;
-(float)zPosition;
@end
