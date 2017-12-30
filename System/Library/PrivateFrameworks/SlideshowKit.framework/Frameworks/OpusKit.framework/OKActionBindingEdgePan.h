/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBindingPan.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIScreenEdgePanGestureRecognizer, NSString;

@interface OKActionBindingEdgePan : OKActionBindingPan <UIGestureRecognizerDelegate> {

	unsigned _edges;
	UIScreenEdgePanGestureRecognizer* _edgePanGestureRecognizer;

}

@property (assign,nonatomic) unsigned edges;                        //@synthesize edges=_edges - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)init;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setEdges:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(unsigned)edges;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned)arg2 ;
-(char)respondsToAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(char)ownsGestureRecognizer:(id)arg1 ;
-(void)performActionWithState:(unsigned)arg1 location:(CGPoint)arg2 touchCount:(unsigned)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned)arg6 context:(id)arg7 ;
-(void)unload;
@end
