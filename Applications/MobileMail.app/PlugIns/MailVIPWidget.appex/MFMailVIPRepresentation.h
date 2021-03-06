/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/PlugIns/MailVIPWidget.appex/MailVIPWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSURL;

@interface MFMailVIPRepresentation : NSObject <NSCoding> {

	NSString* _name;
	NSArray* _addresses;
	unsigned _unreadCount;
	NSURL* _url;

}

@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * addresses;               //@synthesize addresses=_addresses - In the implementation block
@property (assign,nonatomic) unsigned unreadCount;              //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) NSURL * url;                       //@synthesize url=_url - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSArray *)addresses;
-(void)setUnreadCount:(unsigned)arg1 ;
-(unsigned)unreadCount;
@end

