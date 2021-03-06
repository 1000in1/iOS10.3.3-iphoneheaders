/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AppReceiptRefreshOperationOptions : NSObject <NSCopying> {

	char _needsAuthentication;
	char _performSinfMirartionCheckBeforeFailing;
	unsigned _receiptFlags;
	NSString* _bundleIdentifier;
	int _authenticationPromptStyle;

}

@property (assign,nonatomic) unsigned receiptFlags;                                    //@synthesize receiptFlags=_receiptFlags - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) int authenticationPromptStyle;                            //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) char needsAuthentication;                                 //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign,nonatomic) char performSinfMirartionCheckBeforeFailing;              //@synthesize performSinfMirartionCheckBeforeFailing=_performSinfMirartionCheckBeforeFailing - In the implementation block
@property (nonatomic,readonly) NSString * URLBagKey; 
-(void)setPerformSinfMirartionCheckBeforeFailing:(char)arg1 ;
-(unsigned)receiptFlags;
-(char)performSinfMirartionCheckBeforeFailing;
-(void)setReceiptFlags:(unsigned)arg1 ;
-(id)initWithReceiptFlags:(unsigned)arg1 ;
-(int)authenticationPromptStyle;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)needsAuthentication;
-(void)setNeedsAuthentication:(char)arg1 ;
-(NSString *)URLBagKey;
-(void)setAuthenticationPromptStyle:(int)arg1 ;
@end

