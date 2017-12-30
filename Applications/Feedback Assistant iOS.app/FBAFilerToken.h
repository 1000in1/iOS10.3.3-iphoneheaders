/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface FBAFilerToken : NSObject {

	NSNumber* _entityID;
	NSString* _token;
	NSNumber* _dsid;
	unsigned _entityType;

}

@property (nonatomic,readonly) NSNumber * entityID;              //@synthesize entityID=_entityID - In the implementation block
@property (nonatomic,readonly) NSString * token;                 //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSNumber * dsid;                  //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) unsigned entityType;              //@synthesize entityType=_entityType - In the implementation block
-(id)initWithEntityID:(id)arg1 type:(unsigned)arg2 token:(id)arg3 dsid:(id)arg4 ;
-(NSString *)token;
-(NSNumber *)entityID;
-(NSNumber *)dsid;
-(unsigned)entityType;
@end

