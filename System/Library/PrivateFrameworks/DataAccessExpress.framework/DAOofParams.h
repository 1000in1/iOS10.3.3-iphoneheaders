/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface DAOofParams : NSObject {

	int _oofState;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _message;
	int _externalState;
	NSString* _externalMessage;

}

@property (assign,nonatomic) int oofState;                            //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int externalState;                       //@synthesize externalState=_externalState - In the implementation block
@property (nonatomic,retain) NSString * externalMessage;              //@synthesize externalMessage=_externalMessage - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(char)isEnabled;
-(NSDate *)startTime;
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)message;
-(void)enableOof:(char)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(int)oofState;
-(void)setOofState:(int)arg1 ;
-(void)setExternalMessage:(NSString *)arg1 ;
-(int)externalState;
-(void)setExternalState:(int)arg1 ;
-(NSString *)externalMessage;
-(id)dictionaryRepresentationForASSettingTask;
@end

