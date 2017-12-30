/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IntentsApp : NSObject {

	char _accessGranted;
	NSString* _appID;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * appID;                    //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) char accessGranted;                       //@synthesize accessGranted=_accessGranted - In the implementation block
-(id)initWithAppId:(id)arg1 displayName:(id)arg2 accessGranted:(char)arg3 ;
-(int)compareWithIntentsApp:(id)arg1 ;
-(NSString *)displayName;
-(char)accessGranted;
-(NSString *)appID;
@end
