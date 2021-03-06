/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASGetOptionsTask : ASTask {

	NSArray* _versionArray;
	NSArray* _commandArray;

}
+(void)__setUsePort:(char)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(char)processContext:(id)arg1 ;
-(id)_url;
-(char)_shouldSendAuthForRequest:(id)arg1 ;
-(char)shouldStallAfterConnectionLost;
-(char)requiresEASVersionInformaton;
-(void)setVersionArray:(id)arg1 ;
-(void)setCommandArray:(id)arg1 ;
-(id)commandArray;
-(id)versionArray;
-(id)httpMethod;
-(void)finishWithError:(id)arg1 ;
@end

