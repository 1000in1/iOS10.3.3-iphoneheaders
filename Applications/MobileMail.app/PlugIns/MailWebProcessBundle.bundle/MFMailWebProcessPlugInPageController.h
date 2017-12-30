/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/PlugIns/MailWebProcessBundle.bundle/MailWebProcessBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailWebProcessBundle/WKWebProcessPlugInEditingDelegate.h>

@protocol MFMailWebProcessDelegate;
@class WKWebProcessPlugInBrowserContextController, NSString;

@interface MFMailWebProcessPlugInPageController : NSObject <WKWebProcessPlugInEditingDelegate> {

	WKWebProcessPlugInBrowserContextController* _controller;
	id<MFMailWebProcessDelegate> _webProcessDelegateProxy;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_webProcessDelegateProxy;
-(id)initWithContextController:(id)arg1 ;
-(id)_webProcessPlugInBrowserContextController:(id)arg1 pasteboardDataForRange:(id)arg2 ;
-(void)_webProcessPlugInBrowserContextControllerDidWriteToPasteboard:(id)arg1 ;
@end

