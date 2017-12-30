/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class PKPrinter, UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView;

@interface UIPrinterSetupPINViewController : UIViewController {

	PKPrinter* _printer;
	UIPrinterSetupConnectingView* _connectingView;
	UIPrinterSetupPINView* _PINView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (nonatomic,retain) UIPrinterSetupConnectingView * connectingView;              //@synthesize connectingView=_connectingView - In the implementation block
@property (nonatomic,retain) UIPrinterSetupPINView * PINView;                            //@synthesize PINView=_PINView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(UIScrollView *)scrollView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)setConnectingView:(UIPrinterSetupConnectingView *)arg1 ;
-(void)setPINView:(UIPrinterSetupPINView *)arg1 ;
-(void)connectToPrinter;
-(void)showSetup;
-(void)showFailure;
-(void)connected:(char)arg1 ;
-(UIPrinterSetupConnectingView *)connectingView;
-(UIPrinterSetupPINView *)PINView;
@end

