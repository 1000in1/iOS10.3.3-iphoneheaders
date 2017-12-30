/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DirectUploadProgress : NSObject <NSCopying> {

	long long _countOfBytesExpectedToSend;
	long long _countOfBytesSent;
	long long _uploadDatabaseIdentifier;

}

@property (assign,nonatomic) long long uploadDatabaseIdentifier;                //@synthesize uploadDatabaseIdentifier=_uploadDatabaseIdentifier - In the implementation block
@property (assign,nonatomic) long long countOfBytesExpectedToSend;              //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign,nonatomic) long long countOfBytesSent;                        //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
-(long long)uploadDatabaseIdentifier;
-(void)setUploadDatabaseIdentifier:(long long)arg1 ;
-(long long)countOfBytesExpectedToSend;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)countOfBytesSent;
@end

