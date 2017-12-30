/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/PlugIns/com.apple.mobilesafari.SafariDiagnosticExtension.appex/com.apple.mobilesafari.SafariDiagnosticExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEExtensionProvider.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface SafariDiagnosticExtension : DEExtensionProvider <SFContentBlockerManagerObserver> {

	NSObject*<OS_dispatch_semaphore> _semaphoreWaitingForChangeInContentBlockers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)_tabsListAttachment;
-(id)_contentBlockerListAttachment;
-(id)_getAttachmentsWithDisplayNamePattern:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(id)attachmentsForParameters:(id)arg1 ;
-(id)_temporaryDirectory;
@end

