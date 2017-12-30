/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDate, NSString, NSObject, NSNumber, CDAttribute;

@interface _CDActivity : NSObject {

	char _allowOnBattery;
	char _afterUserIsInactive;
	char _beforeUserIsActive;
	char _cpuIntensive;
	char _memoryIntensive;
	char _ioIntensive;
	char _discretionaryActivity;
	char _budgeted;
	char _triggersRestart;
	char _deviceWakeAllowed;
	NSDate* _startAfter;
	NSDate* _executeBefore;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	/*^block*/id _startHandler;
	/*^block*/id _suspendHandler;
	NSString* _networkAvailability;
	int _budgetedPid;
	NSString* _bundleId;
	NSNumber* _identifier;
	unsigned _state;
	int _pid;
	NSDate* _scheduledTime;
	CDAttribute* _meteringAttribute;
	CDAttribute* _admissionAttribute;
	double _leeway;
	unsigned long long _budgetingToken;

}

@property (retain) NSNumber * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned state;                                                   //@synthesize state=_state - In the implementation block
@property (assign) int pid;                                                          //@synthesize pid=_pid - In the implementation block
@property (retain) NSDate * scheduledTime;                                           //@synthesize scheduledTime=_scheduledTime - In the implementation block
@property (assign) double leeway;                                                    //@synthesize leeway=_leeway - In the implementation block
@property (retain) CDAttribute * meteringAttribute;                                  //@synthesize meteringAttribute=_meteringAttribute - In the implementation block
@property (retain) CDAttribute * admissionAttribute;                                 //@synthesize admissionAttribute=_admissionAttribute - In the implementation block
@property (assign) unsigned long long budgetingToken;                                //@synthesize budgetingToken=_budgetingToken - In the implementation block
@property (nonatomic,copy) NSDate * startAfter;                                      //@synthesize startAfter=_startAfter - In the implementation block
@property (nonatomic,copy) NSDate * executeBefore;                                   //@synthesize executeBefore=_executeBefore - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,copy) id startHandler;                                          //@synthesize startHandler=_startHandler - In the implementation block
@property (nonatomic,copy) id suspendHandler;                                        //@synthesize suspendHandler=_suspendHandler - In the implementation block
@property (assign,nonatomic) char allowOnBattery;                                    //@synthesize allowOnBattery=_allowOnBattery - In the implementation block
@property (assign,nonatomic) char afterUserIsInactive;                               //@synthesize afterUserIsInactive=_afterUserIsInactive - In the implementation block
@property (assign,nonatomic) char beforeUserIsActive;                                //@synthesize beforeUserIsActive=_beforeUserIsActive - In the implementation block
@property (nonatomic,retain) NSString * networkAvailability;                         //@synthesize networkAvailability=_networkAvailability - In the implementation block
@property (assign,nonatomic) char cpuIntensive;                                      //@synthesize cpuIntensive=_cpuIntensive - In the implementation block
@property (assign,nonatomic) char memoryIntensive;                                   //@synthesize memoryIntensive=_memoryIntensive - In the implementation block
@property (assign,nonatomic) char ioIntensive;                                       //@synthesize ioIntensive=_ioIntensive - In the implementation block
@property (assign,nonatomic) char discretionaryActivity;                             //@synthesize discretionaryActivity=_discretionaryActivity - In the implementation block
@property (assign,nonatomic) char budgeted;                                          //@synthesize budgeted=_budgeted - In the implementation block
@property (assign,nonatomic) int budgetedPid;                                        //@synthesize budgetedPid=_budgetedPid - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                                    //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) char triggersRestart;                                   //@synthesize triggersRestart=_triggersRestart - In the implementation block
@property (assign,nonatomic) char deviceWakeAllowed;                                 //@synthesize deviceWakeAllowed=_deviceWakeAllowed - In the implementation block
+(id)activityWithName:(id)arg1 startAfter:(id)arg2 executeBefore:(id)arg3 handlerQueue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)setStartHandler:(id)arg1 ;
-(void)setSuspendHandler:(id)arg1 ;
-(id)init;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(void)setStartAfter:(NSDate *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(char)cpuIntensive;
-(char)allowOnBattery;
-(char)memoryIntensive;
-(char)afterUserIsInactive;
-(char)triggersRestart;
-(char)discretionaryActivity;
-(NSDate *)startAfter;
-(NSDate *)executeBefore;
-(void)setScheduledTime:(NSDate *)arg1 ;
-(NSDate *)scheduledTime;
-(void)startBudgetAccounting;
-(id)startHandler;
-(id)suspendHandler;
-(char)budgeted;
-(char)checkForBudget;
-(char)deviceWakeAllowed;
-(void)stopBudgetAccounting;
-(id)initWithName:(id)arg1 startAfter:(id)arg2 executeBefore:(id)arg3 handlerQueue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(char)updateAttribute;
-(void)setExecuteBefore:(NSDate *)arg1 ;
-(void)setAllowOnBattery:(char)arg1 ;
-(void)setAfterUserIsInactive:(char)arg1 ;
-(char)beforeUserIsActive;
-(void)setBeforeUserIsActive:(char)arg1 ;
-(NSString *)networkAvailability;
-(void)setNetworkAvailability:(NSString *)arg1 ;
-(void)setCpuIntensive:(char)arg1 ;
-(void)setMemoryIntensive:(char)arg1 ;
-(char)ioIntensive;
-(void)setIoIntensive:(char)arg1 ;
-(void)setDiscretionaryActivity:(char)arg1 ;
-(void)setBudgeted:(char)arg1 ;
-(int)budgetedPid;
-(void)setBudgetedPid:(int)arg1 ;
-(void)setTriggersRestart:(char)arg1 ;
-(void)setDeviceWakeAllowed:(char)arg1 ;
-(CDAttribute *)meteringAttribute;
-(void)setMeteringAttribute:(CDAttribute *)arg1 ;
-(CDAttribute *)admissionAttribute;
-(void)setAdmissionAttribute:(CDAttribute *)arg1 ;
-(unsigned long long)budgetingToken;
-(void)setBudgetingToken:(unsigned long long)arg1 ;
-(void)setPid:(int)arg1 ;
-(void)setLeeway:(double)arg1 ;
-(double)leeway;
-(int)pid;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

