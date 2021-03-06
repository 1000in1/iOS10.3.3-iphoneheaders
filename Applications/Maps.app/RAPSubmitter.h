/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapServiceProblemReportTicket, RAPSubmitterDelegate;
@class RAPStorage, NSMutableSet, NSTimer, NSString;

@interface RAPSubmitter : NSObject {

	char _sending;
	RAPStorage* _storage;
	unsigned _attemptsFailed;
	NSMutableSet* _processedIdentifiers;
	NSTimer* _timerForNextAttempt;
	char _hasAssertion;
	id<MKMapServiceProblemReportTicket> _currentResubmissionTicket;
	char _allowsEnqueuingReports;
	char _canSubmitEnqueuedReports;
	id<RAPSubmitterDelegate> _delegate;

}

@property (assign,nonatomic) char allowsEnqueuingReports;                           //@synthesize allowsEnqueuingReports=_allowsEnqueuingReports - In the implementation block
@property (assign,nonatomic) char canSubmitEnqueuedReports;                         //@synthesize canSubmitEnqueuedReports=_canSubmitEnqueuedReports - In the implementation block
@property (assign,nonatomic,__weak) id<RAPSubmitterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * activityAssertionReason; 
-(id)_submitOrEnqueueProblem:(id)arg1 mapItemForProblemContext:(id)arg2 mapItemForStartDirectionsSearchInput:(id)arg3 mapitemForEndDirectionsSearchInput:(id)arg4 pushToken:(id)arg5 allowContactBackAtEmailAddress:(id)arg6 traits:(id)arg7 completion:(/*^block*/id)arg8 ;
-(id)_reportsOutboxDirectoryURLCreatingIfNeeded:(char)arg1 error:(out id*)arg2 ;
-(id)_storage:(out id*)arg1 ;
-(void)_enqueueSendingResubmissionData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_networkReachabilityDidChange;
-(void)setCanSubmitEnqueuedReports:(char)arg1 ;
-(void)_moveToSendingStateIfNeeded:(char)arg1 ;
-(void)_scheduleNextAttemptIfPossible;
-(void)_takeAssertionIfNeeded;
-(void)_releaseAssertionIfNeeded;
-(void)_resubmitNextReport;
-(void)beginSendingNowIfNeeded;
-(void)beginReschedulingSendingNowIfNeeded;
-(NSString *)activityAssertionReason;
-(char)allowsEnqueuingReports;
-(void)setAllowsEnqueuingReports:(char)arg1 ;
-(char)canSubmitEnqueuedReports;
-(id)init;
-(void)setDelegate:(id<RAPSubmitterDelegate>)arg1 ;
-(void)dealloc;
-(id<RAPSubmitterDelegate>)delegate;
-(void)_update;
@end

