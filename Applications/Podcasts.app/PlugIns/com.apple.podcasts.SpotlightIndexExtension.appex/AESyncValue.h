/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface AESyncValue : NSObject {

	id<NSObject> _value;
	NSString* _syncVersion;

}

@property (nonatomic,retain) id<NSObject> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * syncVersion;              //@synthesize syncVersion=_syncVersion - In the implementation block
-(void)setSyncVersion:(NSString *)arg1 ;
-(NSString *)syncVersion;
-(void)dealloc;
-(id<NSObject>)value;
-(void)setValue:(id<NSObject>)arg1 ;
@end

