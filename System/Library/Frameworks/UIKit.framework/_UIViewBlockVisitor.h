/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIViewVisitor.h>

@interface _UIViewBlockVisitor : _UIViewVisitor {

	/*^block*/id _visitorBlock;

}

@property (nonatomic,copy) id visitorBlock;              //@synthesize visitorBlock=_visitorBlock - In the implementation block
-(void)dealloc;
-(id)initWithTraversalDirection:(unsigned)arg1 visitorBlock:(/*^block*/id)arg2 ;
-(char)_visitView:(id)arg1 ;
-(void)setVisitorBlock:(id)arg1 ;
-(id)visitorBlock;
@end
