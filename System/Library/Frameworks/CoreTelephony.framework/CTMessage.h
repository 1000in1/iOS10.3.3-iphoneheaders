/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CTMessageAddressNSCopying;
@class NSObject, NSMutableArray, NSDictionary, NSDate, CTPhoneNumber, NSString, NSMutableDictionary, NSUUID, NSArray;

@interface CTMessage : NSObject {

	NSObject*<CTMessageAddress>*<NSCopying> _sender;
	NSMutableArray* _recipients;
	NSMutableArray* _items;
	NSDictionary* _rawHeaders;
	NSDate* _date;
	unsigned _messageId;
	int _messageType;
	CTPhoneNumber* _serviceCenter;
	NSString* _subject;
	NSString* _contentType;
	NSMutableDictionary* _contentTypeParams;
	unsigned _replaceMessage;
	NSString* _countryCode;
	NSUUID* _uuid;

}

@property (readonly) NSArray * recipients;                                              //@synthesize recipients=_recipients - In the implementation block
@property (readonly) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (readonly) NSArray * items;                                                   //@synthesize items=_items - In the implementation block
@property (readonly) NSDictionary * rawHeaders;                                         //@synthesize rawHeaders=_rawHeaders - In the implementation block
@property (readonly) unsigned replaceMessage;                                           //@synthesize replaceMessage=_replaceMessage - In the implementation block
@property (assign,nonatomic) unsigned messageId;                                        //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) int messageType;                                           //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy) CTPhoneNumber * serviceCenter;                               //@synthesize serviceCenter=_serviceCenter - In the implementation block
@property (nonatomic,copy) NSString * subject;                                          //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSObject*<CTMessageAddress>*<NSCopying> sender;              //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                      //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                             //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;                                 //@synthesize uuid=_uuid - In the implementation block
-(void)setRawHeaders:(NSDictionary *)arg1 ;
-(void)setReplaceMessage:(unsigned)arg1 ;
-(void)removeRecipientsInArray:(id)arg1 ;
-(id)addData:(id)arg1 withContentType:(id)arg2 ;
-(void)removePartAtIndex:(unsigned)arg1 ;
-(id)contentTypeParameterWithName:(id)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)allContentTypeParameterNames;
-(NSDictionary *)rawHeaders;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDate *)date;
-(NSArray *)items;
-(NSObject*<CTMessageAddress>*<NSCopying>)sender;
-(NSUUID *)uniqueIdentifier;
-(void)setSender:(NSObject*<CTMessageAddress>*<NSCopying>)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(CTPhoneNumber *)serviceCenter;
-(void)setServiceCenter:(CTPhoneNumber *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)contentType;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)setRecipient:(id)arg1 ;
-(id)addText:(id)arg1 ;
-(id)addPart:(id)arg1 ;
-(void)addEmailRecipient:(id)arg1 ;
-(void)addPhoneRecipient:(id)arg1 ;
-(unsigned)replaceMessage;
-(unsigned)messageId;
-(void)setMessageId:(unsigned)arg1 ;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
@end
