/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString, NSArray;

@interface TICompositeMecabraCandidate : TIMecabraCandidate {

	NSString* _remainderCandidateString;
	NSArray* _autoconvertedCandidatePointerValues;

}

@property (nonatomic,copy) NSString * remainderCandidateString;                        //@synthesize remainderCandidateString=_remainderCandidateString - In the implementation block
@property (nonatomic,copy) NSArray * autoconvertedCandidatePointerValues;              //@synthesize autoconvertedCandidatePointerValues=_autoconvertedCandidatePointerValues - In the implementation block
+(int)type;
+(char)supportsSecureCoding;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(NSString *)remainderCandidateString;
-(NSArray *)autoconvertedCandidatePointerValues;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setAutoconvertedCandidatePointerValues:(NSArray *)arg1 ;
-(void)setRemainderCandidateString:(NSString *)arg1 ;
@end

