/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSURL, NSString;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding> {

	NSNumber* _authenticatedAccountIdentifier;
	int _performedButtonIndex;
	NSURL* _redirectURL;
	int _selectedButtonIndex;

}

@property (nonatomic,copy) NSNumber * authenticatedAccountIdentifier;              //@synthesize authenticatedAccountIdentifier=_authenticatedAccountIdentifier - In the implementation block
@property (assign,nonatomic) int performedButtonIndex;                             //@synthesize performedButtonIndex=_performedButtonIndex - In the implementation block
@property (nonatomic,copy) NSURL * redirectURL;                                    //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign,nonatomic) int selectedButtonIndex;                              //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)authenticatedAccountIdentifier;
-(void)setAuthenticatedAccountIdentifier:(NSNumber *)arg1 ;
-(int)performedButtonIndex;
-(void)setPerformedButtonIndex:(int)arg1 ;
-(void)setSelectedButtonIndex:(int)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(int)selectedButtonIndex;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
@end

