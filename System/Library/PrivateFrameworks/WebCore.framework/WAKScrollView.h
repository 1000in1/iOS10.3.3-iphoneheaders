/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>
#import <WebCore/WebCoreFrameScrollView.h>

@class WAKView, WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {

	WAKView* _documentView;
	WAKClipView* _contentView;
	id _delegate;
	CGPoint _scrollOrigin;

}
-(void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(char)arg3 ;
-(void)scrollingModes:(int*)arg1 vertical:(int*)arg2 ;
-(CGRect)exposedContentRect;
-(void)setActualScrollPosition:(CGPoint)arg1 ;
-(CGRect)documentVisibleRect;
-(void)setScrollBarsSuppressed:(char)arg1 repaintOnUnsuppress:(char)arg2 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(char)arg2 immediately:(char)arg3 ;
-(char)_selfHandleEvent:(id)arg1 ;
-(void)reflectScrolledClipView:(id)arg1 ;
-(void)setHorizontalScrollingMode:(int)arg1 ;
-(void)setVerticalScrollingMode:(int)arg1 ;
-(void)setScrollingMode:(int)arg1 ;
-(int)horizontalScrollingMode;
-(int)verticalScrollingMode;
-(void)_adjustScrollers;
-(float)verticalLineScroll;
-(void)setHasVerticalScroller:(char)arg1 ;
-(void)setHasHorizontalScroller:(char)arg1 ;
-(void)setLineScroll:(float)arg1 ;
-(CGPoint)scrollOrigin;
-(float)horizontalLineScroll;
-(char)hasHorizontalScroller;
-(char)hasVerticalScroller;
-(char)inProgrammaticScroll;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contentView;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(void)scrollWheel:(id)arg1 ;
-(void)setDrawsBackground:(char)arg1 ;
-(id)documentView;
-(CGRect)unobscuredContentRect;
-(char)drawsBackground;
-(void)setDocumentView:(id)arg1 ;
@end

