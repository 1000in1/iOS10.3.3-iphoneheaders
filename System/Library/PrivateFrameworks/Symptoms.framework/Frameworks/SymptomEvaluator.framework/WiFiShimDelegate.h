/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:45 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiShimDelegate <NSObject>
@optional
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_RSSIChangedTo:(int)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2TriggerDisconnectEdge:(char)arg1 forInterface:(id)arg2;
-(void)wifiShim_AWDLLinkUp:(char)arg1;

@end

