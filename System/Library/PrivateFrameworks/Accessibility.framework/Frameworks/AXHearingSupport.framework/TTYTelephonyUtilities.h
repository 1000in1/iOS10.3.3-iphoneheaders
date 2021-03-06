/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TTYTelephonyUtilities : NSObject {

	char _headphoneJackSupportsTTY;

}

@property (assign,nonatomic) char headphoneJackSupportsTTY;              //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
+(id)sharedUtilityProvider;
+(char)relayIsSupported;
+(id)relayPhoneNumber;
-(id)init;
-(void)dealloc;
-(void)registerNotifications;
-(char)contactIsTTYContact:(id)arg1 ;
-(void)mediaServerDied;
-(char)relayIsSupported;
-(unsigned)currentPreferredTransportMethod;
-(char)headphoneJackSupportsTTY;
-(void)setHeadphoneJackSupportsTTY:(char)arg1 ;
-(void)updateHeadphoneState;
-(void)headphoneStateChangedNotification:(id)arg1 ;
@end

