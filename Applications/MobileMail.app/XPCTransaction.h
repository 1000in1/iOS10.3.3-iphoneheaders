/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface XPCTransaction : NSObject {

	char _tranactionCreated;
	NSString* _reason;

}

@property (assign) char tranactionCreated;              //@synthesize tranactionCreated=_tranactionCreated - In the implementation block
@property (retain) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(char)tranactionCreated;
-(void)setTranactionCreated:(char)arg1 ;
@end

