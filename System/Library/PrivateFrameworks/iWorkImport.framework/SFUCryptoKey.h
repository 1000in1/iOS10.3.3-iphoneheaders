/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPMutableCryptoInfo.h>

@class NSData, NSString, NSArray;

@interface SFUCryptoKey : NSObject <TSPMutableCryptoInfo> {

	unsigned mIterationCount;
	char* mKey;
	unsigned long mKeyLength;
	NSData* mSaltData;
	NSString* _passphrase;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey; 
@property (nonatomic,readonly) unsigned long preferredBlockSize; 
@property (nonatomic,readonly) NSArray * blockInfos; 
@property (nonatomic,readonly) char hasDecodedLength; 
@property (nonatomic,readonly) unsigned long decodedLength; 
@property (nonatomic,readonly) NSString * passphrase;                         //@synthesize passphrase=_passphrase - In the implementation block
-(SFUCryptoKey *)cryptoKey;
-(unsigned long)decodedLength;
-(id)mutableCryptoInfoCopy;
-(char)hasDecodedLength;
-(NSArray *)blockInfos;
-(unsigned long)preferredBlockSize;
-(void)addBlockInfo:(id)arg1 ;
-(void)incrementDecodedLengthBy:(unsigned long)arg1 ;
-(void)dealloc;
-(void)reset;
-(int)keyType;
-(NSString *)passphrase;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 saltData:(id)arg4 ;
-(unsigned)iterationCount;
-(id)saltData;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 saltData:(id)arg3 ;
-(id)initAes128Key:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(const char*)keyData;
-(unsigned long)keyLength;
@end
