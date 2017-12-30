/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface VCMediaNegotiatorCaptionsResults : NSObject {

	char _isSupported;
	char _remoteCanDisplayCaptions;
	NSSet* _localLanguages;
	NSSet* _remoteLanguages;

}

@property (assign,nonatomic) char isSupported;                           //@synthesize isSupported=_isSupported - In the implementation block
@property (assign,nonatomic) char remoteCanDisplayCaptions;              //@synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions - In the implementation block
@property (nonatomic,retain) NSSet * localLanguages;                     //@synthesize localLanguages=_localLanguages - In the implementation block
@property (nonatomic,retain) NSSet * remoteLanguages;                    //@synthesize remoteLanguages=_remoteLanguages - In the implementation block
-(void)dealloc;
-(char)isSupported;
-(void)setIsSupported:(char)arg1 ;
-(NSSet *)localLanguages;
-(void)setLocalLanguages:(NSSet *)arg1 ;
-(NSSet *)remoteLanguages;
-(void)setRemoteLanguages:(NSSet *)arg1 ;
-(char)remoteCanDisplayCaptions;
-(void)setRemoteCanDisplayCaptions:(char)arg1 ;
@end
