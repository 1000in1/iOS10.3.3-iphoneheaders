/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:45 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SystemProperties : NSObject {

	char _lowEndHardware;
	char _internalBuild;
	char _seedBuild;
	NSString* _productType;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;

}

@property (readonly) NSString * productType;                 //@synthesize productType=_productType - In the implementation block
@property (readonly) char lowEndHardware;                    //@synthesize lowEndHardware=_lowEndHardware - In the implementation block
@property (readonly) char internalBuild;                     //@synthesize internalBuild=_internalBuild - In the implementation block
@property (readonly) char seedBuild;                         //@synthesize seedBuild=_seedBuild - In the implementation block
@property (readonly) NSString * productName;                 //@synthesize productName=_productName - In the implementation block
@property (readonly) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
@property (readonly) NSString * buildVersion;                //@synthesize buildVersion=_buildVersion - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)description;
-(NSString *)buildVersion;
-(NSString *)productName;
-(char)internalBuild;
-(NSString *)productType;
-(NSString *)productVersion;
-(char)seedBuild;
-(char)lowEndHardware;
@end

