/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWSourceNodeErrorDelegate;
@interface BWSourceNode : BWNode {

	id<BWSourceNodeErrorDelegate> _errorDelegate;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (assign,nonatomic) id<BWSourceNodeErrorDelegate> errorDelegate;              //@synthesize errorDelegate=_errorDelegate - In the implementation block
-(id)nodeType;
-(void)setErrorDelegate:(id<BWSourceNodeErrorDelegate>)arg1 ;
-(id<BWSourceNodeErrorDelegate>)errorDelegate;
-(OpaqueCMClockRef)clock;
-(char)start:(id*)arg1 ;
-(char)stop:(id*)arg1 ;
@end

