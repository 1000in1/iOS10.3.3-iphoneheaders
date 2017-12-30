/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcess;
@class NSString;

@interface FBSProcessTerminationRequest : NSObject <NSCopying, BSDescriptionProviding> {

	id<FBSProcess> _process;
	NSString* _label;
	unsigned _options;
	int _reportType;
	NSString* _explanation;
	long long _exceptionCode;

}

@property (nonatomic,copy) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<FBSProcess> process;              //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) unsigned options;                           //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) int reportType;                             //@synthesize reportType=_reportType - In the implementation block
@property (assign,nonatomic) long long exceptionCode;                    //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (nonatomic,copy) NSString * explanation;                       //@synthesize explanation=_explanation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForProcess:(id)arg1 withLabel:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)options;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setReportType:(int)arg1 ;
-(void)setExceptionCode:(long long)arg1 ;
-(long long)exceptionCode;
-(int)reportType;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(void)execute;
-(id<FBSProcess>)process;
-(void)setProcess:(id<FBSProcess>)arg1 ;
@end

