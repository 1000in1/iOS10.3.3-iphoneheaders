/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AXElementGroup;


@protocol AXGroupable <NSObject>
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup; 
@required
-(CGRect)frame;
-(char)isGroup;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(void)setParentGroup:(id)arg1;
-(AXElementGroup *)parentGroup;

@end
