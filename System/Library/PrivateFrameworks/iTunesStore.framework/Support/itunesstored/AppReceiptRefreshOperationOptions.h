/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface AppReceiptRefreshOperationOptions : NSObject <NSCopying> {

	int _authenticationPromptStyle;
	NSString* _bundleIdentifier;
	unsigned _flags;
	char _needsAuthentication;
	char _performSinfMirartionCheckBeforeFailing;
	NSNumber* _targetAccount;

}

@property (assign,nonatomic) unsigned receiptFlags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) int authenticationPromptStyle;                            //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) char needsAuthentication;                                 //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign,nonatomic) char performSinfMirartionCheckBeforeFailing;              //@synthesize performSinfMirartionCheckBeforeFailing=_performSinfMirartionCheckBeforeFailing - In the implementation block
@property (nonatomic,copy) NSNumber * targetAccount;                                   //@synthesize targetAccount=_targetAccount - In the implementation block
@property (nonatomic,readonly) NSString * URLBagKey; 
-(id)initWithReceiptFlags:(unsigned)arg1 ;
-(unsigned)receiptFlags;
-(void)setPerformSinfMirartionCheckBeforeFailing:(char)arg1 ;
-(char)performSinfMirartionCheckBeforeFailing;
-(void)setReceiptFlags:(unsigned)arg1 ;
-(void)setTargetAccount:(NSNumber *)arg1 ;
-(NSNumber *)targetAccount;
-(int)authenticationPromptStyle;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)needsAuthentication;
-(void)setNeedsAuthentication:(char)arg1 ;
-(NSString *)URLBagKey;
-(void)setAuthenticationPromptStyle:(int)arg1 ;
@end

