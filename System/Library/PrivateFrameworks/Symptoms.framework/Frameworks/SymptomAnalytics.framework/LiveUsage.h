/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:44 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, Process;

@interface LiveUsage : NSManagedObject

@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSNumber * tag; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSNumber * wifiIN; 
@property (nonatomic,retain) NSNumber * wifiOUT; 
@property (nonatomic,retain) NSNumber * wwanIN; 
@property (nonatomic,retain) NSNumber * wwanOUT; 
@property (nonatomic,retain) NSNumber * wiredIN; 
@property (nonatomic,retain) NSNumber * wiredOUT; 
@property (nonatomic,retain) NSNumber * metadata; 
@property (nonatomic,retain) Process * hasProcess; 
@property (nonatomic,retain) Process * hintedBy; 
@end

