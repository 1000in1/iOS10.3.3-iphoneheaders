/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface InAppReviewRequest : NSManagedObject

@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (nonatomic,retain) NSString * bundleVersion; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) char rated; 
+(id)entityForContext:(id)arg1 ;
-(id)valueHash;
@end

