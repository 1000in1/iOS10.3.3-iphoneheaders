/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXAssertion : NSObject {

	NSString* _assertionType;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * assertionType;              //@synthesize assertionType=_assertionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(id)assertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(void)setAssertionType:(NSString *)arg1 ;
-(void)_notifyServerAssertionWasAcquired;
-(void)_notifyServerAssertionWasRelinquished;
-(NSString *)assertionType;
-(char)_hasValidAssertionType;
@end
