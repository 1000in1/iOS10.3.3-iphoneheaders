/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAWDMetricDelegate;
@interface SBAWDMetric : NSObject {

	id<SBAWDMetricDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBAWDMetricDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)postWithDataBuilder:(/*^block*/id)arg1 ;
-(id)configureWithData:(id)arg1 ;
-(unsigned)metricID;
-(void)_postMetric:(id)arg1 withID:(unsigned)arg2 ;
-(unsigned)componentID;
-(void)setDelegate:(id<SBAWDMetricDelegate>)arg1 ;
-(id<SBAWDMetricDelegate>)delegate;
-(Class)dataClass;
@end
