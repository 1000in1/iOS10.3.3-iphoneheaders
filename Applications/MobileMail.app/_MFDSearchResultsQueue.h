/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>
#import <libobjc.A.dylib/MFSearchResultHandler.h>

@protocol MFScheduler, MSDSearchResultsProtocol, MFMessageIterationFilter;
@class MFMessageResultsGenerator;

@interface _MFDSearchResultsQueue : MFBufferedQueue <MFSearchResultHandler> {

	id<MFScheduler> _scheduler;
	id<MSDSearchResultsProtocol> _resultsProxy;
	id<MFMessageIterationFilter> _filter;
	MFMessageResultsGenerator* _generator;

}
-(id)initWithKeys:(id)arg1 resultsProxy:(id)arg2 filter:(id)arg3 ;
-(void)dealloc;
-(char)handleItems:(id)arg1 ;
-(void)beginResult:(unsigned)arg1 ;
-(void)setResultSubject:(char*)arg1 ;
-(void)setResultSender:(char*)arg1 ;
-(void)setResultDateRecieved:(double)arg1 ;
-(void)setResultUnread:(char)arg1 ;
-(void)endResult;
-(id)filter;
-(void)handleMessage:(id)arg1 ;
@end
