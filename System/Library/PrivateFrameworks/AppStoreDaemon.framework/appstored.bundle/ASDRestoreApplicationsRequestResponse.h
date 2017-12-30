/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDRestoreApplicationsRequestResponse : ASDRequestResponse {

	char _success;
	NSArray* _results;

}

@property (nonatomic,readonly) NSArray * results;              //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) char success;                   //@synthesize success=_success - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)results;
-(id)initWithResults:(id)arg1 ;
-(char)success;
@end

