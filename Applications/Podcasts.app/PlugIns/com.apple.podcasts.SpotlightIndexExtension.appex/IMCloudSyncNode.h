/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMCloudSyncTransaction, NSString, NSData, NSNumber, NSDate, NSArray, NSDictionary;

@interface IMCloudSyncNode : NSObject {

	IMCloudSyncTransaction* _transaction;
	NSString* _key;
	NSString* _version;
	NSData* _value;
	char _mismatch;
	NSString* _wrapperRevision;
	NSString* _name;

}

@property (nonatomic,retain) IMCloudSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) NSString * wrapperRevision;                        //@synthesize wrapperRevision=_wrapperRevision - In the implementation block
@property (assign,nonatomic) char mismatch;                                     //@synthesize mismatch=_mismatch - In the implementation block
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSNumber * numberValue; 
@property (nonatomic,retain) NSDate * dateValue; 
@property (nonatomic,retain) NSData * dataValue; 
@property (nonatomic,retain) NSArray * arrayValue; 
@property (nonatomic,retain) NSDictionary * dictionaryValue; 
@property (nonatomic,retain) id objectValue; 
+(id)serverRevisionNewerThanClientKeys;
+(char)isServerRevisionNewerThanClient:(id)arg1 ;
+(void)setServerRevisionNewerThanClient:(id)arg1 ;
+(id)keyWithPrefix:(id)arg1 assetID:(id)arg2 ;
+(id)assetIDForKey:(id)arg1 withPrefix:(id)arg2 ;
+(id)cloudDataCurrentRevision;
+(id)cloudDataMaxRevision;
+(id)keysWithPrefix:(id)arg1 assetIDs:(id)arg2 ;
-(id)objectValueMatchingClass:(Class)arg1 ;
-(NSString *)wrapperRevision;
-(void)setMismatch:(char)arg1 ;
-(void)setWrapperRevision:(NSString *)arg1 ;
-(void)setDictionaryValue:(NSDictionary *)arg1 ;
-(void)setArrayValue:(NSArray *)arg1 ;
-(NSArray *)arrayValue;
-(char)mismatch;
-(id)init;
-(NSString *)key;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(id)objectValue;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(char)hasData;
-(IMCloudSyncTransaction *)transaction;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(NSNumber *)numberValue;
-(NSDictionary *)dictionaryValue;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSDate *)dateValue;
-(NSData *)dataValue;
-(void)setNumberValue:(NSNumber *)arg1 ;
-(void)setDataValue:(NSData *)arg1 ;
@end
