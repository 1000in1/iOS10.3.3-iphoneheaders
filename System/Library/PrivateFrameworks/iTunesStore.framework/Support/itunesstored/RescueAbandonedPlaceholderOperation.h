/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface RescueAbandonedPlaceholderOperation : ISOperation {

	NSString* _bundleID;
	/*^block*/id _outputBlock;

}

@property (nonatomic,copy) id outputBlock; 
-(id)_fetchAppProxyForBundleID:(id)arg1 error:(id*)arg2 ;
-(char)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id*)arg3 ;
-(char)_attemptRescueForBundleID:(id)arg1 error:(id*)arg2 ;
-(char)_isRestoreRunning;
-(void)run;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end

