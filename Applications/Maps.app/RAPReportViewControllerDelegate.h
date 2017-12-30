/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPReportViewControllerProtocol.h>

@protocol RAPReportViewControllerProtocol;
@class RAPReport, UIBarButtonItem, NSString;

@interface RAPReportViewControllerDelegate : NSObject <RAPReportViewControllerProtocol> {

	RAPReport* _report;
	/*^block*/id _completion;
	UIBarButtonItem* _sendButtonItem;
	id<RAPReportViewControllerProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<RAPReportViewControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RAPReport * report;                                             //@synthesize report=_report - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * sendButtonItem;                               //@synthesize sendButtonItem=_sendButtonItem - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                             //@synthesize completion=_completion - In the implementation block
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_send;
-(void)invokeCompletionWithOutcome:(int)arg1 ;
-(UIBarButtonItem *)sendButtonItem;
-(id)initWithReport:(id)arg1 completion:(/*^block*/id)arg2 delegate:(id)arg3 ;
-(void)setDelegate:(id<RAPReportViewControllerProtocol>)arg1 ;
-(void)dealloc;
-(id<RAPReportViewControllerProtocol>)delegate;
-(id)completion;
-(RAPReport *)report;
@end

