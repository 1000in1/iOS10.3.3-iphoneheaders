/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@interface ICCreateContainerResponse : HSResponse {

	char _updateRequired;
	unsigned _containerID;

}

@property (assign,nonatomic) unsigned containerID;              //@synthesize containerID=_containerID - In the implementation block
@property (assign,nonatomic) char updateRequired;               //@synthesize updateRequired=_updateRequired - In the implementation block
-(char)updateRequired;
-(void)setUpdateRequired:(char)arg1 ;
-(unsigned)containerID;
-(void)setContainerID:(unsigned)arg1 ;
@end

