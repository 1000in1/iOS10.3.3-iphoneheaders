/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@interface IDSStunCandidate : NSObject {

	char _active;
	unsigned _type;
	unsigned _priority;
	int _transport;
	int _index;
	sockaddr_storage _address;
	sockaddr_storage _external;
	unsigned _radioAccessTechnology;
	unsigned _mtu;

}

@property (assign,nonatomic) char active;                                 //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned priority;                         //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) int transport;                             //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) int index;                                 //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) const sockaddr* address; 
@property (assign,nonatomic) sockaddr* external; 
@property (assign,nonatomic) unsigned radioAccessTechnology;              //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mtu;                                //@synthesize mtu=_mtu - In the implementation block
+(id)candidateWithType:(unsigned)arg1 transport:(int)arg2 radioAccessTechnology:(unsigned)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(void)setExternal:(sockaddr*)arg1 ;
-(char)isCellularStunCandidate;
-(void)updateTransport:(int)arg1 ;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setMtu:(unsigned)arg1 ;
-(char)isCompatibleWithStunCandidate:(id)arg1 ;
-(char)hasNATIPv4Address;
-(char)hasNATIPv4External;
-(char)isLinkLocalStunCandidate;
-(char)isRelayStunCandidate;
-(id)initWithType:(unsigned)arg1 transport:(int)arg2 radioAccessTechnology:(unsigned)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(char)isServerReflexiveStunCandidate;
-(unsigned)radioAccessTechnology;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)type;
-(unsigned)priority;
-(char)active;
-(void)setActive:(char)arg1 ;
-(int)index;
-(sockaddr*)external;
-(const sockaddr*)address;
-(int)transport;
-(unsigned)mtu;
@end

