/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol flowDispositionObserver <NSObject>
@property (assign,nonatomic) BOOL enabled; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3;
-(unsigned)noteFlow:(id)arg1 withDisposition:(unsigned)arg2 present:(BOOL)arg3 trackedBy:(id)arg4;
-(void)configurePolicies:(id)arg1;

@end

