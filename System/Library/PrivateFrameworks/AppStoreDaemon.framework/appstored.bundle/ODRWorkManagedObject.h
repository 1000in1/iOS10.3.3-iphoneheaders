/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@protocol OS_os_transaction;
@class NSObject, NSString, NSData, NSDictionary;

@interface ODRWorkManagedObject : NSManagedObject {

	NSObject*<OS_os_transaction> transaction;

}

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSData * contextData; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSDictionary * context; 
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction; 
-(id)description;
-(NSDictionary *)context;
-(void)start;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)markAsCompleted;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
@end

