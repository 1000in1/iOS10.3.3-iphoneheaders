/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABChangeStoreInfo : NSObject {

	int _minConsumedSequenceNumber;
	NSString* _minConsumedClientIdentifier;
	int _secondMinConsumedSequenceNumber;

}

@property (assign,nonatomic) int minConsumedSequenceNumber;                       //@synthesize minConsumedSequenceNumber=_minConsumedSequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * minConsumedClientIdentifier;              //@synthesize minConsumedClientIdentifier=_minConsumedClientIdentifier - In the implementation block
@property (assign,nonatomic) int secondMinConsumedSequenceNumber;                 //@synthesize secondMinConsumedSequenceNumber=_secondMinConsumedSequenceNumber - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)minConsumedClientIdentifier;
-(int)minConsumedSequenceNumber;
-(int)secondMinConsumedSequenceNumber;
-(void)setMinConsumedSequenceNumber:(int)arg1 ;
-(void)setMinConsumedClientIdentifier:(NSString *)arg1 ;
-(void)setSecondMinConsumedSequenceNumber:(int)arg1 ;
@end

