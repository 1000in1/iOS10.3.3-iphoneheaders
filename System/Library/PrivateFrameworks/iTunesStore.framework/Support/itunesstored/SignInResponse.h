/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACAccountCredential;

@interface SignInResponse : NSObject {

	NSString* _altDSID;
	NSString* _password;
	int _responseType;
	ACAccountCredential* _singleSignOnCredential;
	NSString* _userName;

}

@property (assign,nonatomic) int signInResponseType;                                    //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                          //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) ACAccountCredential * singleSignOnCredential;              //@synthesize singleSignOnCredential=_singleSignOnCredential - In the implementation block
@property (nonatomic,copy) NSString * userName;                                         //@synthesize userName=_userName - In the implementation block
+(char)deviceSupportsSingleSignOn;
-(int)signInResponseType;
-(void)setSignInResponseType:(int)arg1 ;
-(void)setSingleSignOnCredential:(ACAccountCredential *)arg1 ;
-(id)initWithResponseType:(int)arg1 ;
-(ACAccountCredential *)singleSignOnCredential;
-(NSString *)userName;
-(void)dealloc;
-(void)setUserName:(NSString *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)altDSID;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

