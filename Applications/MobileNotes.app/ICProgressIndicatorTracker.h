/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICProgressIndicatorTrackerDelegate;
@class ICSelectorDelayer, NSDate;

@interface ICProgressIndicatorTracker : NSObject {

	char _progressIndicatorShouldAnimate;
	char _makingProgress;
	id<ICProgressIndicatorTrackerDelegate> _delegate;
	ICSelectorDelayer* _updateMakingProgressDelayer;
	ICSelectorDelayer* _progressIndicatorShouldStartDelayer;
	ICSelectorDelayer* _progressIndicatorShouldStopDelayer;
	NSDate* _progressIndicatorStartDate;

}

@property (assign,nonatomic) char progressIndicatorShouldAnimate;                                  //@synthesize progressIndicatorShouldAnimate=_progressIndicatorShouldAnimate - In the implementation block
@property (assign,nonatomic,__weak) id<ICProgressIndicatorTrackerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char makingProgress;                                                  //@synthesize makingProgress=_makingProgress - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * updateMakingProgressDelayer;                      //@synthesize updateMakingProgressDelayer=_updateMakingProgressDelayer - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * progressIndicatorShouldStartDelayer;              //@synthesize progressIndicatorShouldStartDelayer=_progressIndicatorShouldStartDelayer - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * progressIndicatorShouldStopDelayer;               //@synthesize progressIndicatorShouldStopDelayer=_progressIndicatorShouldStopDelayer - In the implementation block
@property (nonatomic,retain) NSDate * progressIndicatorStartDate;                                  //@synthesize progressIndicatorStartDate=_progressIndicatorStartDate - In the implementation block
+(char)isMigratingICloudAccount;
+(char)isMigratingLocalAccount;
-(void)migrationStateDidChange:(id)arg1 ;
-(char)progressIndicatorShouldAnimate;
-(void)progressIndicatorShouldUpdate;
-(void)setProgressIndicatorShouldStartDelayer:(ICSelectorDelayer *)arg1 ;
-(void)setProgressIndicatorShouldStopDelayer:(ICSelectorDelayer *)arg1 ;
-(void)updateMakingProgress;
-(void)setUpdateMakingProgressDelayer:(ICSelectorDelayer *)arg1 ;
-(void)cloudOperationsDidChange:(id)arg1 ;
-(void)legacyImportOperationsDidChange:(id)arg1 ;
-(ICSelectorDelayer *)progressIndicatorShouldStartDelayer;
-(ICSelectorDelayer *)progressIndicatorShouldStopDelayer;
-(ICSelectorDelayer *)updateMakingProgressDelayer;
-(void)setMakingProgress:(char)arg1 ;
-(NSDate *)progressIndicatorStartDate;
-(void)setProgressIndicatorShouldAnimate:(char)arg1 ;
-(void)setProgressIndicatorStartDate:(NSDate *)arg1 ;
-(char)makingProgress;
-(id)init;
-(void)invalidate;
-(void)setDelegate:(id<ICProgressIndicatorTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<ICProgressIndicatorTrackerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
@end

