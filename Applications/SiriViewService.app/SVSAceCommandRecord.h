/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SAAceCommand, SVSAceCommandRecordDelegate;
@interface SVSAceCommandRecord : NSObject {

	id<SAAceCommand> _aceCommand;
	/*^block*/id _commandCompletion;
	int _result;
	int _numberOfStartedActions;
	int _numberOfSuccessfullyCompletedActions;
	int _numberOfUnsuccessfullyCompletedActions;
	id<SVSAceCommandRecordDelegate> _delegate;

}

@property (assign,setter=_setResult:,nonatomic) int result;                                                                              //@synthesize result=_result - In the implementation block
@property (assign,setter=_setNumberOfStartedActions:,nonatomic) int numberOfStartedActions;                                              //@synthesize numberOfStartedActions=_numberOfStartedActions - In the implementation block
@property (assign,setter=_setNumberOfSuccessfullyCompletedActions:,nonatomic) int numberOfSuccessfullyCompletedActions;                  //@synthesize numberOfSuccessfullyCompletedActions=_numberOfSuccessfullyCompletedActions - In the implementation block
@property (assign,setter=_setNumberOfUnsuccessfullyCompletedActions:,nonatomic) int numberOfUnsuccessfullyCompletedActions;              //@synthesize numberOfUnsuccessfullyCompletedActions=_numberOfUnsuccessfullyCompletedActions - In the implementation block
@property (nonatomic,readonly) id<SAAceCommand> aceCommand;                                                                              //@synthesize aceCommand=_aceCommand - In the implementation block
@property (nonatomic,copy) id commandCompletion;                                                                                         //@synthesize commandCompletion=_commandCompletion - In the implementation block
@property (assign,nonatomic,__weak) id<SVSAceCommandRecordDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
-(int)numberOfStartedActions;
-(void)_setNumberOfStartedActions:(int)arg1 ;
-(int)numberOfSuccessfullyCompletedActions;
-(void)_setNumberOfSuccessfullyCompletedActions:(int)arg1 ;
-(int)numberOfUnsuccessfullyCompletedActions;
-(void)_setNumberOfUnsuccessfullyCompletedActions:(int)arg1 ;
-(id)initWithAceCommand:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)incrementNumberOfStartedActions;
-(void)incrementNumberOfSuccessfullyCompletedActions;
-(void)incrementNumberOfUnsuccessfullyCompletedActions;
-(id<SAAceCommand>)aceCommand;
-(id)commandCompletion;
-(void)setCommandCompletion:(id)arg1 ;
-(void)setDelegate:(id<SVSAceCommandRecordDelegate>)arg1 ;
-(id<SVSAceCommandRecordDelegate>)delegate;
-(int)result;
-(void)_setResult:(int)arg1 ;
@end

