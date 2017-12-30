/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardCandidate, NSArray;

@interface TIAutocorrectionList : NSObject <NSSecureCoding> {

	TIKeyboardCandidate* _autocorrection;
	NSArray* _predictions;
	NSArray* _emojiList;
	NSArray* _proactiveTriggers;

}

@property (nonatomic,readonly) TIKeyboardCandidate * autocorrection;              //@synthesize autocorrection=_autocorrection - In the implementation block
@property (nonatomic,readonly) NSArray * predictions;                             //@synthesize predictions=_predictions - In the implementation block
@property (nonatomic,readonly) NSArray * emojiList;                               //@synthesize emojiList=_emojiList - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveTriggers;                       //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,readonly) char shouldAcceptTopCandidate; 
+(id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(char)arg2 ;
+(char)supportsSecureCoding;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 ;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 ;
+(id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3 ;
+(id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2 ;
-(id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
-(id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
-(id)initWithCandidates:(id)arg1 ;
-(id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(char)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSArray *)candidates;
-(TIKeyboardCandidate *)autocorrection;
-(NSArray *)predictions;
-(NSArray *)emojiList;
-(char)shouldAcceptTopCandidate;
-(NSArray *)proactiveTriggers;
@end

