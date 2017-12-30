/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface ODRBundleManagedObject : NSManagedObject

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSSet * tags; 
+(id)existingRecordsForBundleWithBundleID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)bundleForBundleID:(id)arg1 ;
+(id)createBundleWithBundleID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(char)deleteBundleForID:(id)arg1 ;
+(char)areTags:(id)arg1 validForBundleWithID:(id)arg2 ;
+(char)haveExistingRecordForBundleWithBundleID:(id)arg1 ;
-(char)validateForInsert:(id*)arg1 ;
@end

