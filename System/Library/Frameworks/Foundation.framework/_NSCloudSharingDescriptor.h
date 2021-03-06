/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding> {

	int _operation;
	NSString* _sharedContentType;
	int _numberOfInvitations;
	char _invitationsSentViaThirdPartyService;
	char _publicShare;

}

@property (assign) int operation;                                         //@synthesize operation=_operation - In the implementation block
@property (assign) char invitationsSentViaThirdPartyService;              //@synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService - In the implementation block
@property (assign) char publicShare;                                      //@synthesize publicShare=_publicShare - In the implementation block
@property (assign) int numberOfInvitations;                               //@synthesize numberOfInvitations=_numberOfInvitations - In the implementation block
@property (copy) NSString * sharedContentType;                            //@synthesize sharedContentType=_sharedContentType - In the implementation block
+(char)supportsSecureCoding;
-(id)_variantSubstrings;
-(char)invitationsSentViaThirdPartyService;
-(void)setInvitationsSentViaThirdPartyService:(char)arg1 ;
-(char)publicShare;
-(void)setPublicShare:(char)arg1 ;
-(int)numberOfInvitations;
-(void)setNumberOfInvitations:(int)arg1 ;
-(NSString *)sharedContentType;
-(void)setSharedContentType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)operation;
-(void)setOperation:(int)arg1 ;
@end

