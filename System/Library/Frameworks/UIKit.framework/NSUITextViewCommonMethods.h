/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextContainer;


@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider,NSTextContainerView>
@property (assign,nonatomic,__weak) NSTextContainer * textContainer; 
@property (assign,nonatomic) NSRange markedRange; 
@optional
-(NSRange)markedRange;
-(NSTextContainer *)textContainer;
-(void)setTextContainer:(id)arg1;
-(void)setMarkedRange:(NSRange)arg1;

@required
-(CGPoint*)textContainerOrigin;
-(CGRect*)visibleRect;
-(UIEdgeInsets*)textContainerInset;
-(void)setConstrainedFrameSize:(CGSize)arg1;
-(void)invalidateTextContainerOrigin;
-(CGSize*)minSize;
-(char)isHorizontallyResizable;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(char)arg2;

@end
