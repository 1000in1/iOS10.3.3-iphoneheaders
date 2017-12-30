/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFeedback.h>
#import <UIKit/_UIFeedbackDiscretePlayable.h>

@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable> {

	char _highPriority;
	int _type;

}

@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHighPriority,nonatomic,readonly) char highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
+(id)type;
+(id)discreteFeedbackForType:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)_effectiveEventType;
-(id)_playableProtocol;
-(char)isPlaying;
-(char)isHighPriority;
-(id)dictionaryRepresentation;
-(unsigned long)_effectiveSystemSoundID;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_debugDictionary;
@end

