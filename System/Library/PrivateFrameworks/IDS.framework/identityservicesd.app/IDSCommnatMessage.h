/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@interface IDSCommnatMessage : NSObject {

	unsigned _type;
	unsigned _nonce;
	sockaddr_storage _local;
	sockaddr_storage _external;
	unsigned _status;
	double _startTime;

}

@property (assign,nonatomic) unsigned type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned nonce;                //@synthesize nonce=_nonce - In the implementation block
@property (assign,nonatomic) unsigned status;               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
-(id)initWithType:(unsigned)arg1 localAddress:(sockaddr*)arg2 ;
-(const sockaddr*)local;
-(char)read:(char*)arg1 inputLength:(int)arg2 ;
-(char)write:(char*)arg1 outputLength:(int*)arg2 ;
-(void)setStartTime:(double)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(double)startTime;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(const sockaddr*)external;
-(unsigned)nonce;
-(void)setNonce:(unsigned)arg1 ;
@end

