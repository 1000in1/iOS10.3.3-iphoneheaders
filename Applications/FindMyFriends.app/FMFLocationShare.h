/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFEntity.h>

@class NSString, NSDate, FMFAccount;

@interface FMFLocationShare : FMFEntity

@property (assign,nonatomic) char sharingEnabled; 
@property (nonatomic,retain) NSString * trackingUrl; 
@property (nonatomic,retain) NSDate * expireTimestamp; 
@property (nonatomic,retain) NSDate * createTimestamp; 
@property (nonatomic,retain) NSString * desc; 
@property (nonatomic,retain) FMFAccount * account; 
-(void)prepareForDeletion;
@end

