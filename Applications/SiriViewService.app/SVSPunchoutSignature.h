/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SVSPunchoutSignature : NSObject <NSCopying> {

	NSString* _originalCommandId;
	NSString* _appPunchOutAppDisplayName;
	NSString* _appPunchOutBundleId;
	NSString* _appPunchOutEventId;
	NSString* _appPunchOutURI;
	NSString* _appPunchoutMetricsContext;

}

@property (nonatomic,copy,readonly) NSString * originalCommandId;                      //@synthesize originalCommandId=_originalCommandId - In the implementation block
@property (nonatomic,copy,readonly) NSString * appPunchOutAppDisplayName;              //@synthesize appPunchOutAppDisplayName=_appPunchOutAppDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * appPunchOutBundleId;                    //@synthesize appPunchOutBundleId=_appPunchOutBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * appPunchOutEventId;                     //@synthesize appPunchOutEventId=_appPunchOutEventId - In the implementation block
@property (nonatomic,copy,readonly) NSString * appPunchOutURI;                         //@synthesize appPunchOutURI=_appPunchOutURI - In the implementation block
@property (nonatomic,copy,readonly) NSString * appPunchoutMetricsContext;              //@synthesize appPunchoutMetricsContext=_appPunchoutMetricsContext - In the implementation block
-(id)initWithOriginalCommandId:(id)arg1 appPunchOutAppDisplayName:(id)arg2 appPunchOutBundleId:(id)arg3 appPunchOutEventId:(id)arg4 appPunchOutURI:(id)arg5 appPunchoutMetricsContext:(id)arg6 ;
-(NSString *)appPunchOutAppDisplayName;
-(NSString *)appPunchOutBundleId;
-(NSString *)appPunchOutEventId;
-(NSString *)appPunchOutURI;
-(NSString *)appPunchoutMetricsContext;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)originalCommandId;
-(id)initWithStringRepresentation:(id)arg1 ;
-(id)stringRepresentation;
@end

