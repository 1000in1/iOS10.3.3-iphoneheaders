/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:44 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface DiagnosticCaseUsage : NSManagedObject

@property (nonatomic,retain) NSString * domain; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * subtype; 
@property (nonatomic,retain) NSString * process; 
@property (nonatomic,retain) NSDate * lastSeen; 
@property (nonatomic,retain) NSDate * lastAccepted; 
@property (assign,nonatomic) int casesSeen; 
@property (assign,nonatomic) int casesAccepted; 
@property (assign,nonatomic) double interarrival_mean; 
@property (assign,nonatomic) double interarrival_var; 
@end
