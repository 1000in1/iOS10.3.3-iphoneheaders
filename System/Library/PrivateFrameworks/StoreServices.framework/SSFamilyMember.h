/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSNumber;

@interface SSFamilyMember : NSObject <SSXPCCoding> {

	NSString* _firstName;
	NSString* _iCloudAccountName;
	NSNumber* _iCloudIdentifier;
	NSNumber* _iTunesIdentifier;
	NSString* _lastName;
	char _me;
	char _sharingPurchases;

}

@property (nonatomic,retain) NSNumber * iTunesIdentifier;                                  //@synthesize iTunesIdentifier=_iTunesIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * iCloudIdentifier;                                  //@synthesize iCloudIdentifier=_iCloudIdentifier - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                          //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * iCloudAccountName;                                 //@synthesize iCloudAccountName=_iCloudAccountName - In the implementation block
@property (assign,getter=isMe,nonatomic) char me;                                          //@synthesize me=_me - In the implementation block
@property (assign,getter=isSharingPurchases,nonatomic) char sharingPurchases;              //@synthesize sharingPurchases=_sharingPurchases - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)iTunesIdentifier;
-(id)newCacheRepresentation;
-(void)setICloudAccountName:(NSString *)arg1 ;
-(void)setICloudIdentifier:(NSNumber *)arg1 ;
-(void)setITunesIdentifier:(NSNumber *)arg1 ;
-(char)isSharingPurchases;
-(void)setSharingPurchases:(char)arg1 ;
-(NSString *)description;
-(char)isMe;
-(void)setMe:(char)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSNumber *)iCloudIdentifier;
-(NSString *)iCloudAccountName;
-(NSString *)firstName;
-(NSString *)lastName;
@end

