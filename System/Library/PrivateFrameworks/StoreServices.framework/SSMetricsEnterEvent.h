/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsEnterEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * enterType; 
@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(void)setEnterType:(NSString *)arg1 ;
-(NSString *)enterType;
-(void)setEnterTypeWithLaunchReason:(int)arg1 ;
-(id)init;
-(id)description;
@end

