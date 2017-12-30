/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFCancelationToken, MFMessageLoadingContext, MFDiagnostic;

@interface MFMessageLoadingContextErrorReportingMiddleware : NSObject {

	MFCancelationToken* _cancellationToken;
	MFMessageLoadingContext* _loadingContext;
	MFDiagnostic* _diagnosticManager;

}

@property (nonatomic,retain) MFMessageLoadingContext * loadingContext;              //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,retain) MFDiagnostic * diagnosticManager;                      //@synthesize diagnosticManager=_diagnosticManager - In the implementation block
@property (nonatomic,readonly) MFCancelationToken * cancellationToken;              //@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (nonatomic,readonly) id<MFScheduler> scheduler; 
-(MFCancelationToken *)cancellationToken;
-(id)initWithLoadingContext:(id)arg1 ;
-(void)_handleLoadEvent:(id)arg1 error:(id)arg2 ;
-(void)_observeLoadingContext;
-(id)initWithLoadingContext:(id)arg1 diagnosticManager:(id)arg2 ;
-(void)_logToSystemWithError:(id)arg1 ;
-(void)_logToAWDWithError:(id)arg1 ;
-(void)dealloc;
-(MFMessageLoadingContext *)loadingContext;
-(void)setLoadingContext:(MFMessageLoadingContext *)arg1 ;
-(id<MFScheduler>)scheduler;
-(MFDiagnostic *)diagnosticManager;
-(void)setDiagnosticManager:(MFDiagnostic *)arg1 ;
@end

