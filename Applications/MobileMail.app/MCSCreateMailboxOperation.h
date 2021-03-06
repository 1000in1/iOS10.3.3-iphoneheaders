/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSMailboxOperation.h>

@class NSString, MFMailboxUid;

@interface MCSCreateMailboxOperation : MCSMailboxOperation {

	NSString* _pendingName;
	MFMailboxUid* _parentMailbox;
	NSString* _reasonForFailure;

}

@property (nonatomic,copy) NSString * reasonForFailure;              //@synthesize reasonForFailure=_reasonForFailure - In the implementation block
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)accountForErrorHandling;
-(void)setReasonForFailure:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 parentMailbox:(id)arg2 ;
-(NSString *)reasonForFailure;
-(void)dealloc;
-(char)commit;
-(char)revert;
@end

