/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECExpert.h>
#import <libobjc.A.dylib/_DECExpertDelegate.h>

@class NSString;

@interface PeopleSuggesterExpert : _DECExpert <_DECExpertDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)expert:(id)arg1 prewarmPredictionForCategory:(unsigned)arg2 consumer:(unsigned)arg3 ;
-(id)expert:(id)arg1 predictionForCategory:(unsigned)arg2 consumer:(unsigned)arg3 limit:(unsigned)arg4 ;
-(id)expert:(id)arg1 predictionForCategory:(unsigned)arg2 criteria:(id)arg3 consumer:(unsigned)arg4 limit:(unsigned)arg5 ;
-(void)expert:(id)arg1 receiveFeedback:(id)arg2 category:(unsigned)arg3 consumer:(unsigned)arg4 ;
-(void)trainExpert:(id)arg1 ;
-(id)saveModelForExpert:(id)arg1 byteLimit:(unsigned)arg2 ;
-(void)expert:(id)arg1 restoreModel:(id)arg2 ;
@end

