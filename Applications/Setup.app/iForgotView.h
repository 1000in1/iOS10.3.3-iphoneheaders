/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIToolbar, UIWebView, SetupiForgotViewController, NSString;

@interface iForgotView : UIView <UIWebViewDelegate> {

	UIToolbar* _toolbar;
	UIWebView* _webView;
	char _loaded;
	char _dismissed;
	char _needLoadingIndicator;
	SetupiForgotViewController* _controller;

}

@property (assign,nonatomic,__weak) SetupiForgotViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) char needLoadingIndicator;                                 //@synthesize needLoadingIndicator=_needLoadingIndicator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)needLoadingIndicator;
-(void)_showiForgotFailure:(id)arg1 ;
-(void)_iForgotConnect:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(SetupiForgotViewController *)controller;
-(void)setController:(SetupiForgotViewController *)arg1 ;
-(void)load;
-(void)willDismiss;
-(void)donePressed:(id)arg1 ;
@end

