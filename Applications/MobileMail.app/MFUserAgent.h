/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFUserAgent
@required
-(char)isMobileMail;
-(char)isAllowedToAccessProtectedData;
-(void)networkActivityStarted:(id)arg1;
-(void)networkActivityEnded:(id)arg1;
-(char)canRegisterForAPSPush;
-(void)autofetchAccount:(id)arg1 mailboxUid:(id)arg2;
-(id)focusedMessage;
-(char)isForeground;

@end

