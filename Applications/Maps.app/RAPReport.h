/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RAPAppStateProtocol, MKMapServiceProblemReportTicket;
@class RAPSubmitter, NSMapTable, NSString, RAPQuestion, RAPSubmissionOutcome;

@interface RAPReport : NSObject {

	char _willUpdate;
	id<RAPAppStateProtocol> _reportContext;
	RAPSubmitter* _submitter;
	NSMapTable* _observers;
	NSString* _submissionID;
	id<MKMapServiceProblemReportTicket> _ticket;
	char _canCreateSubmittableProblem;
	char _submitting;
	RAPQuestion* _initialQuestion;
	id<RAPAppStateProtocol> _context;
	RAPSubmissionOutcome* _latestSubmissionOutcome;

}

@property (getter=_context,nonatomic,readonly) id<RAPAppStateProtocol> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) RAPQuestion * initialQuestion;                                  //@synthesize initialQuestion=_initialQuestion - In the implementation block
@property (nonatomic,readonly) char canCreateSubmittableProblem;                             //@synthesize canCreateSubmittableProblem=_canCreateSubmittableProblem - In the implementation block
@property (getter=isSubmitting,nonatomic,readonly) char submitting;                          //@synthesize submitting=_submitting - In the implementation block
@property (nonatomic,readonly) RAPSubmissionOutcome * latestSubmissionOutcome;               //@synthesize latestSubmissionOutcome=_latestSubmissionOutcome - In the implementation block
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_invokeChangeHandlers;
-(char)_getDirectionsMapItemsForStart:(out id*)arg1 end:(out id*)arg2 ;
-(id)initWithContext:(id)arg1 submitter:(id)arg2 ;
-(void)setInitialQuestion:(RAPQuestion *)arg1 ;
-(char)canCreateSubmittableProblem;
-(void)_questionDidChange:(id)arg1 ;
-(id)newSubmittableProblem;
-(id)_mapContext;
-(id)_placeContext;
-(id)_auxiliaryControlsRecording;
-(void)submitWithPrivacyRequestHandler:(/*^block*/id)arg1 willStartSubmitting:(/*^block*/id)arg2 ;
-(void)recordRAPSubmissionID:(id)arg1 ;
-(void)recordCurrentEnvironment:(id)arg1 ;
-(void)recordManifestURLs:(id)arg1 ;
-(void)cancelSubmission;
-(RAPQuestion *)initialQuestion;
-(char)isSubmitting;
-(RAPSubmissionOutcome *)latestSubmissionOutcome;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)_context;
-(void)updateIfNeeded;
-(void)_update;
-(id)devicePushToken;
-(void)_setNeedsUpdate;
@end

