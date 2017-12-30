/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {

	NSMutableArray* mTestCases;
	char mQuiet;
	int mPassingTests;
	int mTotalTests;
	char mPassed;
	timeval mSetupTime;

}

@property (assign,nonatomic) char quiet; 
@property (nonatomic,readonly) int passingTestCount; 
@property (nonatomic,readonly) int testCount; 
@property (nonatomic,readonly) char passed; 
+(id)harness;
-(id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(id)p_createResultDirectory;
-(void)p_writeSystemConfigurationToDirectory:(id)arg1 ;
-(void)p_writeConsoleMessagesToDirectory:(id)arg1 ;
-(void)p_writeCsvResultsToDirectory:(id)arg1 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4 ;
-(char)runTests;
-(int)passingTestCount;
-(int)testCount;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(void)testSuite;
-(void)report;
-(char)quiet;
-(void)setQuiet:(char)arg1 ;
-(char)passed;
-(void)setup;
@end

